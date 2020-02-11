#include <server.h>
#include <string>

using namespace ucm;

int main(int argc, char** argv){

    Server server(argc, argv);

    server.route("/sayHello", [&](const request& req, response& res){
        res.sendHTML("Hello World");
    });

    server.route("/echo", [&](const request& req, response& res){
        if (req.has_params({"text"})){
            // Valid input
            std::string text = req.url_params.get("text");

            res.sendHTML(text);
        }
        else {
            // User has not provided a value for text
            res.sendError400();
        }
    });

    server.run();
}
