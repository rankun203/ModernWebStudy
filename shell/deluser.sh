#!/usr/bin/env bash
# 自动删除 50 个用户帐号, 帐号名为 stud1 至 stud50

i=1
while [ ${i} -le 500 ]; do
    userdel -r stu${i}
    i=$((${i}+1))
done
