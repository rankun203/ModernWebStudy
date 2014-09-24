#!/usr/bin/env coffee

fs = require 'fs'
writeStream = fs.createWriteStream 'file.xls'

header="Sl No"+"\t"+" Age"+"\t"+"Name"+"\n"
row1 = "0"+"\t"+" 21"+"\t"+"Rob"+"\n"
row2 = "1"+"\t"+" 22"+"\t"+"bob"+"\n"

writeStream.write header
writeStream.write row1
writeStream.write row2

writeStream.close()
