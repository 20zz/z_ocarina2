#!/usr/bin/perl
#
#  �ģĥ��᡼���ؤΥǡ����񤭹���perl������
#
{
  while(<>) {
    chop;
    s/leowrite/isvwrite/;
    if ($. != 1) {
	$_ .= " -V -n \n";
    } else {
	$_ .= " -V \n";
    }
    print $_;
  }
}
