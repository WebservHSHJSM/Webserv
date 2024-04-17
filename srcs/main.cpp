#include "../header/total.hpp"

// static std::vector<Server> CreateServer(std::string configfile)
// {
// 	std::vector<Server>	Result;

// 	return Result;
// }

int main(int argc, char **argv){
	if (argc > 2) {
        std::cout << "Error: Invalid arguments" << std::endl;
        return (1);
    }
    try {
        std::string config;
        config = (argc == 1 ? "config/default.conf" : argv[1]);

        ParseConfig parsed;
        parsed.parsingFile(config);
        parsed.print();
        
        // ServerManage manage;
        // manage.setupServer(parsed);
        // manage.runServer();
        // manage.testServer();

    } catch (std::exception& e) {
        std::cout << e.what() << std::endl;
        return (1);
    }
    // system("leaks webserv");
}