#!/usr/bin/coffee

###
#@author rankun203@gmail.com
#Call the module node6filteredLsModule, to list filtered files.
###

fil = require './node6filteredLsModule.js'

fil process.argv[2] ? './', process.argv[3] ? 'js', (err, data) ->
  console.log "Something went wrong, #{err}." if err
  for item in data
    console.log item
