// Generated by CoffeeScript 1.7.1

/*
 *@author rankun203@gmail.com
 *Call the module node6filteredLsModule, to list filtered files.
 */

(function() {
  var fil, _ref, _ref1;

  fil = require('./node6filteredLsModule.js');

  fil((_ref = process.argv[2]) != null ? _ref : './', (_ref1 = process.argv[3]) != null ? _ref1 : 'js', function(err, data) {
    var item, _i, _len, _results;
    if (err) {
      console.log("Something went wrong, " + err + ".");
    }
    _results = [];
    for (_i = 0, _len = data.length; _i < _len; _i++) {
      item = data[_i];
      _results.push(console.log(item));
    }
    return _results;
  });

}).call(this);
