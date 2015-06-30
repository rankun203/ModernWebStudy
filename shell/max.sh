#!/usr/bin/env bash
# 创建一个 shell 脚本, 它从用户那里接收 10 个数, 并显示已输入的最大的数

read max

i=1
while [ ${i} -lt 10 ]; do
    read val
    if [ ${val} -gt ${max} ]; then
        max=${val}
    fi

    i=`expr ${i} + 1`
done

echo "Max number is ${max}"
