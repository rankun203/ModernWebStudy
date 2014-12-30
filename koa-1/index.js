/**
 * Created by rankun203 on 12/30/14.
 * http://macr.ae/article/iterators-and-generators.html
 */

var arr = ['one', 'two', 'three'];
Array.prototype._someLibraryAddedThis = {};

for (var i of arr) {
    console.log(i);
}
