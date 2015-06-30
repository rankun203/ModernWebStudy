#!/bin/sh
# 便携一个 shell 程序, 接收用户从键盘输入的10个整数, 求出其总和, 最大值及最小值.

read max
min=${max}
sum=${max}

i=1

while [ ${i} -lt 10 ]
do
  read x
  sum=`expr ${sum} + ${x}`
  if [ ${max} -lt ${x} ]
  then
    max=${x}
  fi
  
  if [ ${x} -lt ${min} ]
  then
    min=${x}
  fi

  i=`expr ${i} + 1`
done

echo "sum = $sum; max = $max; min = $min"
  
