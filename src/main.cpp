#include <iostream>

#include <http.hpp>

int main(int argc, char *argv[])
{
	Http::Http http;

	http.addToken("costam", "mleko");
	http.addToken("Date", "2018-08-01");
	http.addToken("Method", "POST");
	http.addToken("jajko", "GET");
	std::map <std::string, std::string> tokens = http.getTokens();	

	for(auto token = tokens.begin(); token != tokens.end(); token++) {
		std::cout << token->first << " | " << token->second << std::endl;
	}

	return 0;
}
