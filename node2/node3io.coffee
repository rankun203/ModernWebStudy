#!/usr/bin/coffee

###
Read a file from file system, then count its lines. in synchronous.
###

fs = require 'fs'
contents = (fs.readFileSync process.argv?[2] ? 'test.txt').toString()
console.log (contents.match /\n/g).length

