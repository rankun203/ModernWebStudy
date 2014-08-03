#!/usr/bin/coffee

###
#@author rankun203@gmail.com
#retrieve some text from a specified URL and output to the command line.
###

http = require 'http'

http.get process.argv[2] ? 'http://www.quora.com/', (res) ->
  res.setEncoding 'utf8'
  res.on 'data', (data) -> console.log data
  res.on 'error', (error) -> console.log error
