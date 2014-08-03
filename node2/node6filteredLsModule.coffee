#!/usr/bin/coffee

###
#@author rankun203@gmail.com
#
#Module: list filtered files
###

fs = require 'fs'
path = require 'path'

module.exports = (folder, ext, callback) ->
  fs.readdir folder, (err, files) ->
    return callback err, files if err
    filteredFiles = []
    for file in files
      filteredFiles.push file if (path.extname file) == ".#{ext}"
      #console.log file if (path.extname file) == ".#{ext}"
    callback null, filteredFiles

