#include "http.hpp"

#include <string>

namespace Http {
	const std::string CRLF = "\r\n";

	std::map <int, std::string> codes {
			{CONTINUE, "Continue"},
			{SWITCHING_PROTOCOLS, "Switching Protocols"},
			{OK, "OK"},
			{CREATED, "Created"},
			{ACCEPTED, "Accepted"},
			{NON_AUTHORATIVE_INFORMATION, "Non Authorative Information"},
			{NO_CONTENT, "No Content"},
			{RESET_CONTENT, "Reset Content"},
			{PARTIAL_CONTENT, "Partial Content"},
			{MULTIPLE_CHOICES, "Multiple Choices"},
			{MOVED_PERMAMENTLY, "Moved Permamently"},
			{FOUND, "Found"},
			{SEE_OTHER, "See Other"},
			{NOT_MODIFIED, "Not Modified"},
			{USE_PROXY, "Use Proxy"},
			{TEMPORARY_REDIRECT, "Temporary Redirect"},
			{BAD_REQUEST, "Bad Request"},
			{UNAUTHORIZED, "Unauthorized"},
			{PAYMENT_REQUIRED, "Payment Required"},
			{FORBIDDEN, "Forbidden"},
			{NOT_FOUND, "Not Found"},
			{METHOD_NOT_ALLOWED, "Method Not Allowed"},
			{NOT_ACCEPTABLE, "Not Acceptable"},
			{PROXY_AUTHENTICATION_REQUIRED, "Proxy Authentication Required"},
			{REQUEST_TIMEOUT, "Request Timeout"},
			{CONFLICT, "Conflict"},
			{GONE, "Gone"},
			{LENGTH_REQUIRED, "Length Required"},
			{PRECONDITION_FAILED, "Precondition Failed"},
			{REQUEST_ENTITY_TOO_LARGE, "Request Entity Too Large"},
			{REQUEST_URI_TOO_LONG, "Request Uri Too Long"},
			{UNSUPPORTED_MEDIA_TIME, "Unsupported Media Time"},
			{REQUESTED_RANGE_NOT_SATIFSFIABLE, "Requested Range Not Satifsfiable"},
			{EXPECTATION_FAILED, "Expectation Failed"},
			{INTERNAL_SERVER_ERROR, "Internal Server Error"},
			{NOT_IMPLEMENTED, "Not Implemented"},
			{BAD_GATEWAY, "Bad Gateway"},
			{SERVICE_UNAVAILABLE, "Service Unavailable"},
			{GATEWAY_TIMEOUT, "Gateway Timeout"},
			{HTTP_VERSION_NOT_SUPPORTED, "Http Version Not Supported"},
	};

	std::map <int, std::string> method {
			{GET, "GET"},
			{POST, "POST"},
			{DELETE, "DELETE"},
	};

	Http::Http()
	{
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
		this->status = status;
	}

	void Http::setResponseBody(const std::string &body)
	{
	}

	bool Http::parseHttp(const std::string &httpRequest)
	{
		return false;
	}

	std::map <std::string, std::string> Http::getTokens() const
	{
		return this->tokens;
	}
}
