#!/bin/sh
# $Log: make_version.sh,v $
# Revision 1.1.1.1  2003/03/10 22:42:53  tong
# new OBJ tree for ocarina from Nintendo
#
# Revision 2.1  1998-10-22 20:41:56+09  zelda
# �ңϣͽФ��С������(NTSC)
#
# Revision 1.4  1998/03/10 04:38:08  hayakawa
# ���� CREATER �� CREATOR
#
# Revision 1.3  1998/03/06  11:56:20  hayakawa
# MAKEOPTION�б�
#
# Revision 1.2  1998/03/06  11:35:25  hayakawa
# __MAKEOPTION__�ɲ�
#
# Revision 1.1  1997/05/26  12:41:05  hayakawa
# Initial revision
#

echo "#define __CREATOR__  \"`whoami`@`hostname`\""
echo "#define __DATETIME__ \"`date '+%y-%m-%d %H:%M:%S'`\""
echo '#define __MAKEOPTION__ "'$*'"'
