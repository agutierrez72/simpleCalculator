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

    server.route("/add", [&](const request& req, response& res){
        if (req.has_params({"x", "y"})){
            std::string x_string = req.url_params.get("x");
            std::string y_string = req.url_params.get("y");

            int x = std::stoi(x_string);
            int y = std::stoi(y_string);

            int ans = x + y;

            std::string ans_string = std::to_string(ans);

            res.sendHTML(ans_string);
        }
        else {
            res.sendError400();
        }
    });

    server.run();
}
