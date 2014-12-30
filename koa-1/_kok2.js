/**
 * Created by rankun203 on 12/30/14.
 */

var koa = require('koa');
var app = koa();
var port = process.argv.length > 2 ? process.argv[2] : 8080;

app.use(function *(next){
    if (this.path !== '/') return yield next;
});

app.listen(port);
