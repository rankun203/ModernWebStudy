// Generated by CoffeeScript 1.7.1

/*
 *@author rankun203@gmail.com
 *retrieve some text from a specified URL and output to the command line.
 */

(function() {
  var http, _ref;

  http = require('http');

  http.get((_ref = process.argv[2]) != null ? _ref : 'http://www.baidu.com/', function(res) {
    res.setEncoding('utf8');
    res.on('data', function(data) {
      return console.log(data);
    });
    return res.on('error', function(error) {
      return console.log(error);
    });
  });

}).call(this);
