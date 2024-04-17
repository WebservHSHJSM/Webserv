#pragma once

#include "../total.hpp"

class Request;
class Response;

class Client{
	private :
		int				fd;
		std::string		reqeustString;
		Request			request;
		Response		response;
		Client();
	public :
		Client(int fd);
		~Client();
};