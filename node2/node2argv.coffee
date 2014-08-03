#!/usr/bin/coffee

###
#@author rankun203@gmail.com
#coffee arguments training.
#add all arguments together.
###

sum = 0

for num, i in process.argv
  #with a prefix '+' before the property can turn it to a Number.
  sum += +num if i > 1

console.log sum

