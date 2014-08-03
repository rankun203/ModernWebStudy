#!/usr/bin/node

var fs = require('fs');

fs.readFile('./app.js', function(err, contents){
  if (err) throw err;
  console.log(contents);
});

