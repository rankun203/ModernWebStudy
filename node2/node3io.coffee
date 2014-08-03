#!/usr/bin/coffee

###
#@author rankun203@gmail.com
#Read a file from file system, then count its lines. in synchronous.
###

fs = require 'fs'
contents = (fs.readFileSync process.argv?[2] ? 'test.txt').toString()
console.log (contents.match /\n/g).length

