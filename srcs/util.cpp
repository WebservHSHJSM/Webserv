#include "../header/total.hpp"

std::vector<std::string>	splitArgs(std::string line, std::string sep) {
	std::vector<std::string>	str;
	size_t	start = 0;
	size_t	end = 0;

	while (1) {
		end = line.find_first_of(sep, start);
		if (end == std::string::npos)
			break ;
		std::string parsed = line.substr(start, end - start);
		str.push_back(parsed);
		start = line.find_first_not_of(sep, end);
		if (start == std::string::npos) {
			break ;
		}
	}
	return str;
}

std::vector<std::string> split(const std::string& str, char delimiter) {
    std::vector<std::string> result;
    std::stringstream ss(str);
    std::string token;
    while (std::getline(ss, token, delimiter)) {
        result.push_back(token);
    }
    return result;
}

bool	is_Button(char *buf, const char *button){
	const char *but = std::strstr(buf, button);
	if (button == NULL)
		return (0);
	return (1);
}

std::string getValueByRequest(char *buf, const char *value){
	const char* rvalue = std::strstr(buf, value);
	std::string findvalue;
	if (rvalue != NULL)
    {
        const char* valueStart = rvalue + std::strlen(value);
        const char* valueEnd = std::strstr(valueStart, "&");
		if (valueStart == valueEnd)
			return "";
        if (valueEnd != NULL)
            findvalue = std::string(valueStart, valueEnd - valueStart);
        else{
			return "";
		}
    }
    else{
		return "";
	}
	return findvalue;
}