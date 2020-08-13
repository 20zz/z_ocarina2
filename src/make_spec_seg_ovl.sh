#!/usr/local/bin/bash
# $Id: make_spec_seg_ovl.sh,v 1.1.1.1 2003/03/10 22:42:53 tong Exp $

read after || exit 0

echo '/*'
echo $0 '�ˤ�뼫ư�����ե�����Ǥ���'
echo '�Խ�����ӥ쥸���Ȥ϶ػߤ���Ƥ��ޤ���'
echo '*/'

while true
do
  read segname objbase || exit 0
  echo ''
  echo 'beginseg'
  echo '	name "'$segname'"'
  echo '	flags OBJECT'
  echo '	after "'$after'"'
  echo '	include "'$objbase'.o"'
  echo '	include "'$objbase'.rel"'
  echo 'endseg'
  after=$segname
done
