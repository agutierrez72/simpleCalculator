#include <server.h>

using namespace ucm;

int main(int argc, char** argv){

    Server server(argc, argv);

    server.renderHTML("/", "index.html");

    server.run();
}
