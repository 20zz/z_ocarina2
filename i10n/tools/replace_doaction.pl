#!/usr/bin/perl -w

open(DOACTION_LIST, "<doaction.list") || die "Can't open doaction.list: $!";

$zroot = $ENV{ZELDA_ROOT};
$texture_path = "$zroot/i10n/assets/zh/";
$data_offset = "0x850";
$obj_file = "do_action_idx";
`rm -f $zroot/data/$obj_file.zh.o`;
`cp $zroot/data/$obj_file.o $zroot/data/$obj_file.zh.o`;
`chmod u+w $zroot/data/$obj_file.zh.o`;

while (<DOACTION_LIST>) {
    /(.*DO_ACTION)\/(.*)\.inta\s+(0x[0-9a-fA-F]+)\s+(\d+)/;
    $dir = $1;
    $name = $2;
    $loc = $3;
    $size = $4;

    print "./rgb2bin.pl $texture_path$dir/$name.inta IA 4\n";
    `./rgb2bin.pl $texture_path$dir/$name.inta IA 4`;

    $offset = hex($data_offset) + hex($loc);
    print "./replace.pl $zroot/data/$obj_file.zh.o $texture_path$dir/$name.bin $offset $size\n\n";
    `./replace.pl $zroot/data/$obj_file.zh.o $texture_path$dir/$name.bin $offset $size`;

    `rm $texture_path$dir/$name.bin`;
    `rm $texture_path$dir/$name.h`;
}

close DOACTION_LIST;
