#!/usr/bin/coffee

###
List files with specified extension in a specified folder.
###

fs = require 'fs'

folder = process.argv[2] ? './'
ext = process.argv[3] ? '.*'
reg = new RegExp "^.*\.#{ext}$"

fs.readdir folder, (err, files) ->
  throw err if err
  for file in files
    console.log file if file.match reg
