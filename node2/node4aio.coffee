#!/usr/bin/coffee

###
#@author rankun203@gmail.com
#Read a file from file system, then count its lines. in asynchronous.
###

fs = require 'fs'
fs.readFile process.argv?[2] ? 'test.txt', (err, contents) ->
  contStr = contents.toString()
  console.log (contStr.match /\n/g).length

