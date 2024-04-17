#ifndef TOTAL_HPP
# define TOTAL_HPP

# define BUFFER_SIZE 1024
# define TIMEOUT_SEC 60

# include <iostream>
# include <cstring>
# include <cstdio>
# include <cstdlib>
# include <iostream>
# include <fstream>
# include <sstream>
# include <exception>

//Container
# include <vector>
# include <map>
# include <queue>

//C
# include <unistd.h>
# include <netdb.h>
# include <fcntl.h>
# include <signal.h>
# include <dirent.h>

# include <sys/socket.h>
# include <sys/select.h>
# include <sys/poll.h>
# include <sys/event.h>
# include <sys/types.h>
# include <netinet/in.h>
# include <arpa/inet.h>
# include <sys/wait.h>
# include <sys/time.h>

//class
# include "Client/Client.hpp"
# include "Client/Request.hpp"
# include "Client/Response.hpp"
# include "Member/Member.hpp"
# include "Member/MemberRepository.hpp"
# include "Server/Location.hpp"
# include "Server/ParseConfig.hpp"
# include "Server/Server.hpp"
# include "Server/ServerManage.hpp"
# include "Util.hpp"

class ErrorException : public std::exception
{
    private:
        std::string message;
    public:
        ErrorException(std::string mess) throw() {
            message = "Error: " + mess;
        }
        const char* what() const throw() {
            return message.c_str();
        }
        ~ErrorException() throw() {}
};

#endif