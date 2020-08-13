#!/usr/freeware/bin/perl -w
# $Id: make_disk_keeptable.pl,v 1.1.1.1 2003/03/10 22:42:45 tong Exp $
#
# z_disk_keeptable_*.dat ���������
# ������:
# make_disk_keeptable.pl < /project/ZELDA1/ROM/zelda_x2.nm2 > z_disk_keeptable_x.dat
#
use strict;

my @SYMBOLS;
my %ADDRESSES;
my %ALPHABETS;

my $SYMBOL_FILENAME = "z_disk_keeptable.decl";

# ����ܥ����
open(SYMBOL_FILE, $SYMBOL_FILENAME) or die "$0: can't open $SYMBOL_FILENAME\n";
my $SYMBOL;

my $IN_COMMENT = 0;
my $IDX = 0;
my $REX = " (";
while (<SYMBOL_FILE>) {
#   print $_."\n";
    if ($IN_COMMENT) {
	if (m"\*\/") {
	    s/.*?\*\///g;
	    s/.*?\*\///g;
	    $IN_COMMENT = 0;
	} else {
	    next;
	}
    }
    next if m"^(#|$)";		# ���Ԥ�#�ǻϤޤ�Ԥ�̵�뤹��
    s/\/\*.*\*\// /g;		# /* ������ */ ���Ĥζ�����ִ�����
##  s/(^ *)|( *$)//g;		# ��Ƭ�ȹ����ζ����������
    s/^ *//g; s/ *$//g;		# �����η�����xemacs�Ǥ��ޤ������Ǥ��ʤ��Τǣ�̿��ˤ櫓�ޤ���(;_;)
    next if m"^(#|$)";	 	# ���Ԥ�#�ǻϤޤ�Ԥ�̵�뤹��
    chop;			# '\n'��������

    if (m"\/\*") {
	s/\/\*.*$//;
	$IN_COMMENT = 1;
    }
    if (m"^decl2\([^,]*, *([^, ]*) *,.*") {
	$SYMBOL = $1;
	$SYMBOLS[$IDX++] = $SYMBOL;
	$REX .= $SYMBOL . "|";
    }
}
chop $REX;
$REX .= ")\$";
close(SYMBOL_FILE);

#printf(STDERR "REX=%s\n", $REX);

#���ɥ쥹����
my %COUNT;
while (<STDIN>) {
    if (/$REX/) {
	(my $ADDRESS, my $ALPHABET, my $SYMBOL) = split;
	$ADDRESSES{$SYMBOL} = $ADDRESS;
	$ALPHABETS{$SYMBOL} = $ALPHABET;
	$COUNT{$SYMBOL}++;
    }
}

#��̽���
foreach $SYMBOL (@SYMBOLS) {
    printf("decl(%s) /* %s %s %d */\n", $ADDRESSES{$SYMBOL}, $ALPHABETS{$SYMBOL}, $SYMBOL, $COUNT{$SYMBOL});
    
    # ����ܥ�¿����������å�
    if ($COUNT{$SYMBOL} > 1) {
	printf(STDERR "�ٹ�:����ܥ� `%s' �� %d �Ĥ���ޤ�\n", $SYMBOL, $COUNT{$SYMBOL});
    }
}
