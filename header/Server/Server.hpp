#pragma once

#include "../total.hpp"

class Location;
class Client;
class MemberRepository;

class Server{
	private :
		std::vector<Location>		locations; // location 
		std::vector<Client>			clients; // Clients
        std::map<int, std::string>  error_pages;
        std::map<int, std::string>  error_pages_header;
		MemberRepository			*memberRepository; // Member Save In Memory DB
		uintptr_t                   server_socket; // listen_fd를 조금 더 직관적으로 변경
        struct sockaddr_in          server_address; // 서버 별 run을 위한 인자 추가
        sockaddr_in                 server_addr; // 서버 별 run을 위한 인자 추가
		std::string					server_name; // 서버이름
        uint16_t                    port; // Server Port
        unsigned long               client_max_body_size; // Default ContentMaxBody
        bool                        autoindex; // Default AutoIndex;
        std::string                 root; // root path
		in_addr_t                   host; // ???
        std::string                 index; // ???
        int                         clnt_fd; // ???
	public :
		Server(void);
        ~Server(void);

		//setter
        void	setLocation(std::vector<Location> locs);		// Create with a config block at the time of creation (called immediately after the default constructor).
		void	setRoot(std::string param);						// root path Setting
        void    setPort(std::string param);						// server's port Setting
        void    setClntMaxBodySize(std::string param);			// Default Content Max Body Setting
        void    setAutoindex(std::string param);				// Default Auto Index Value Setting
        void    setErrorPages(std::vector<std::string> param);	// Error Pages Setting
        void    setServerSocket(std::string param);				// Server Socket Setting
        void    setServerAddress(void);							// Sever init Setting
		void    setServerName(std::string param); 				// ServerName set ???
		void    setIndex(std::string param);					// ???
        void    setHost(std::string param);						// ???
        void    setTryFiles(std::vector<std::string> param);	// ???
        void    setClntFd(int fd);								// ???

		//getter
		std::string                     getServerName(void);
        std::string                     getRoot(void);
        std::string                     getIndex(void);
        uint16_t                        getPort(void);
        in_addr_t                       getHost(void);
        unsigned long                   getClntMaxBodySize(void);
        bool                            getAutoindex(void);
        std::map<int, std::string>      getErrorPages(void);
        std::map<int, std::string>      getErrorPagesHeader(void);
        uintptr_t                       getServerSocket(void);
        std::vector<std::string>        getTryFiles(void);
        std::vector<Location>           getLocations(void);
        struct sockaddr_in*             getServerAddress(void);
        int                             getClntFd(void);
        MemberRepository                *getMemberRepository(void);

		// execve function
        void    run(void);
        void    initErrorPages(void);
        void    initErrorPagesHeader(void);
        void    print(void);
};