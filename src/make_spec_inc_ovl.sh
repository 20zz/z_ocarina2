#!/usr/local/bin/bash
# $Id: make_spec_inc_ovl.sh,v 1.1.1.1 2003/03/10 22:42:52 tong Exp $

read after || exit 0

echo '/*'
echo $0 '�ˤ�뼫ư�����ե�����Ǥ���'
echo '�Խ�����ӥ쥸���Ȥ϶ػߤ���Ƥ��ޤ���'
echo '*/'

while true
do
  read segname objbase || exit 0
  echo '	include "'$segname'"'
done
