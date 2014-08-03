#!/usr/bin/node

//read a file from file system, then return it through Node.js server.
//specify Content-Type to text/html

var http = require('http');
var fs = require('fs');

http.createServer(function(request, response){
  response.writeHead(200, {
    'Content-Type': 'text/html'
  });

  fs.readFile('./test.txt', function(err, contents){
    if (err) throw err;
    response.write(contents);
    response.end();
  });

}).listen(8080);
