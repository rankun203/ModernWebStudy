/**
 * Created by rankun203 on 12/30/14.
 * http://macr.ae/article/iterators-and-generators.html
 */

function NumberIterator(arr) {
    this['@@iterator'] = function () {
        var index = 0;

        return {
            next: function () {
                if (index >= arr.length) {
                    return {done: true};
                } else {
                    return {
                        value: parseInt(arr[index++]),
                        done: false
                    }
                }
            }
        }
    };
}

for (let i of new NumberIterator([1, 2, "3"])) {
    console.log(i);
}