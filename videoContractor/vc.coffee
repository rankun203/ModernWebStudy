#!/usr/bin/env coffee

fs = require 'fs'

folder = process.argv[2] ? './'

# Execute a command
exec = (cmd, callback) ->
  rtn = '\ncmd:\n----\n' + cmd
  childp.exec cmd, (error, stdout, stderr) ->
    rtn += "\n\nstdout:\n----\n" + stdout if stdout
    rtn += "\n\nstderr:\n----\n" + stderr if stderr
    rtn += "\n\nerror :\n----\n" + error if error
    callback(rtn) if callback

fs.readdir folder, (err, files) ->
  throw err if err
  for file in files
    console.log file if file.match reg
