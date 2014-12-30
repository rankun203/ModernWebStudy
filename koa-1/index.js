/**
 * Created by rankun203 on 12/30/14.
 */

var arr = ['one', 'two', 'three'];
Array.prototype._someLibraryAddedThis = {};

for (var i in arr) {
    if (arr.hasOwnProperty(i)) {
        console.log(arr[i]);
    }
}
