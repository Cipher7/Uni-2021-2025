var server = require("http")
var fs = require('fs')

server.createServer(function(req,res){
    fs.readFile("test.txt",function(err,data){
        res.writeHead(200,{"content-type":"text/plain"});
        res.write(data);
        return res.end();
    });
       
}).listen(8080);