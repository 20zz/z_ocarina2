#!/usr/bin/perl
#
#  �ģĤؤΥޥ������ǡ����񤭹���perl������
#

{
  while(<>) {
    chop;
    s/leowrite/isvwrite/;
    if ($. != 1) {
	$_ .= " -V -D -n \n";
    } else {
	$_ .= " -V -D \n";
    }
    print $_;
  }
}
