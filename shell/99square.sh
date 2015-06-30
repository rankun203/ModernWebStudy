#!/usr/bin/env bash
# 打印 9 9 乘法表

for i in 1 2 3 4 5 6 7 8 9; do
    for j in 1 2 3 4 5 6 7 8 9; do
        if [ ${j} -le ${i} ]; then
            echo -n $((${i}*${j}))"     "
        fi
    done
    echo ""
done