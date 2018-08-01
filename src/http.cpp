#include "http.hpp"

namespace Http {
	std::map <int, std::string> codes;


	Http::Http()
	{
		codes[CONTINUE] = "Continue";
		codes[SWITCHING_PROTOCOLS] = "Switching Protocols";
		codes[OK] = "Ok";
		codes[CREATED] = "Created";
		codes[ACCEPTED] = "Accepted";
		codes[NON_AUTHORATIVE_INFORMATION] = "Non Authorative Information";
		codes[NO_CONTENT] = "No Content";
		codes[RESET_CONTENT] = "Reset Content";
		codes[PARTIAL_CONTENT] = "Partial Content";
		codes[MULTIPLE_CHOICES] = "Multiple Choices";
		codes[MOVED_PERMAMENTLY] = "Moved Permamently";
		codes[FOUND] = "Found";
		codes[SEE_OTHER] = "See Other";
		codes[NOT_MODIFIED] = "Not Modified";
		codes[USE_PROXY] = "Use Proxy";
		codes[TEMPORARY_REDIRECT] = "Temporary Redirect";
		codes[BAD_REQUEST] = "Bad Request";
		codes[UNAUTHORIZED] = "Unauthorized";
		codes[PAYMENT_REQUIRED] = "Payment Required"; codes[FORBIDDEN] = "Forbidden";
		codes[NOT_FOUND] = "Not Found";
		codes[METHOD_NOT_ALLOWED] = "Method Not Allowed";
		codes[NOT_ACCEPTABLE] = "Not Acceptable";
		codes[PROXY_AUTHENTICATION_REQUIRED] = "Proxy Authentication Required";
		codes[REQUEST_TIMEOUT] = "Request Timeout";
		codes[CONFLICT] = "Conflict";
		codes[GONE] = "Gone";
		codes[LENGTH_REQUIRED] = "Length Required";
		codes[PRECONDITION_FAILED] = "Precondition Failed";
		codes[REQUEST_ENTITY_TOO_LARGE] = "Request Entity Too Large";
		codes[REQUEST_URI_TOO_LONG] = "Request Uri Too Long";
		codes[UNSUPPORTED_MEDIA_TIME] = "Unsupported Media Time";
		codes[REQUESTED_RANGE_NOT_SATIFSFIABLE] = "Requested Range Not Satifsfiable";
		codes[EXPECTATION_FAILED] = "Expectation Failed";
		codes[INTERNAL_SERVER_ERROR] = "Internal Server Error";
		codes[NOT_IMPLEMENTED] = "Not Implemented";
		codes[BAD_GATEWAY] = "Bad Gateway";
		codes[SERVICE_UNAVAILABLE] = "Service Unavailable";
		codes[GATEWAY_TIMEOUT] = "Gateway Timeout";
		codes[HTTP_VERSION_NOT_SUPPORTED] = "Http Version Not Supported";
	}
	
	Http::~Http()
	{
	}

	std::string Http::createResponse()
	{
		return "";
	}

	void Http::addToken(const std::string &key, const std::string &value)
	{
		this->tokens[key] = value;
	}

	void Http::setStatusCode(int status)
	{
	}

	void Http::setResponseBody(const std::string &body)
	{
	}

	bool Http::parseHttp(const std::string &httpRequest)
	{
	}

	std::map <std::string, std::string> Http::getTokens() const
	{
		return this->tokens;
	}
}
