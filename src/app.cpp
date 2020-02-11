#include <server.h>

using namespace ucm;

int main(int argc, char** argv){

    Server server(argc, argv);

    server.route("/sayHello", [&](const request& req, response& res){
        res.sendHTML("Hello World");
    });

    server.run();
}
