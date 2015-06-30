#!/usr/bin/env bash
# 在 /tmp/userdata 目录下建立 50 个目录, 即 user1 ~ user50,
# 并设置每个目录的权限, 其中其他用户的权限为: 读;
# 文件所有者的权限为: 读, 写, 执行;
# 文件所有者所在组的权限为: 读, 执行

i=1
while [ ${i} -le 50 ]; do
    foldername=/tmp/userdata/user${i}
    mkdir -p ${foldername}
    chmod 754 ${foldername}
    i=$((${i}+1))
done
