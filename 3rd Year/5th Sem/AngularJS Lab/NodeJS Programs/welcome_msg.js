var server = require("http");
server.createServer(function(req,resp){
    resp.write("Welcome to the world of Node JS");
    resp.end();
}).listen(8080);