#!/usr/bin/env node

var request = require('request');
Email = require('email').Email;

//var url = 'http://wb.zk789.cn/';
var url = 'http://www.baidu.com';
var from = 'rankun203@gmail.com';
var to = 'rankun203@icloud.com';

function sendMail(subject, body) {
    var myMsg = new Email({
        from: from,
        to: to,
        subject: subject,
        body: body
    });
    myMsg.send(function(err) {
        console.error(err);
    });
}

request(url, function (error, response, body) {
    if(error) throw error;
    if(response.statusCode == 200) {
        console.log('Success');
        sendMail("Website accessible!!", body);
    } else if(response.statusCode == 404) {
        console.log('Not found');
    }
});
