#ifndef HTTP_CPP
#define HTTP_CPP

#include <map>
#include <string>

namespace Http {

	enum {
		CONTINUE = 100,
		SWITCHING_PROTOCOLS = 101,

		/* 
		 * Succesful codes 2XX
		 */
		OK = 200,
		CREATED = 201,
		ACCEPTED = 202,
		NON_AUTHORATIVE_INFORMATION = 203,
		NO_CONTENT = 204,
		RESET_CONTENT = 205,
		PARTIAL_CONTENT = 206,
		
		/*
		 * Redirdection codes 3XX
		 */
		MULTIPLE_CHOICES = 300,
		MOVED_PERMAMENTLY = 301,
		FOUND = 302,
		SEE_OTHER = 303,
		NOT_MODIFIED = 304,
		USE_PROXY = 305,
		// 306 unused in current version
	
		TEMPORARY_REDIRECT = 307,

		/*
		 * Client error 4XX
		 */
		BAD_REQUEST = 400,
		UNAUTHORIZED = 401,
		PAYMENT_REQUIRED = 402,
		FORBIDDEN = 403,
		NOT_FOUND = 404,
		METHOD_NOT_ALLOWED = 405,
		NOT_ACCEPTABLE = 406,
		PROXY_AUTHENTICATION_REQUIRED = 407,
		REQUEST_TIMEOUT = 408,
		CONFLICT = 409,
		GONE = 410,
		LENGTH_REQUIRED = 411,
		PRECONDITION_FAILED = 412,
		REQUEST_ENTITY_TOO_LARGE = 413,
		REQUEST_URI_TOO_LONG = 414,
		UNSUPPORTED_MEDIA_TIME = 415,
		REQUESTED_RANGE_NOT_SATIFSFIABLE = 416,
		EXPECTATION_FAILED = 417,

		/*
		 * Server error 5XX
		 */
		INTERNAL_SERVER_ERROR = 500,
		NOT_IMPLEMENTED = 501,
		BAD_GATEWAY = 502,
		SERVICE_UNAVAILABLE = 503,
		GATEWAY_TIMEOUT = 504,
		HTTP_VERSION_NOT_SUPPORTED = 505,
	};


	class Http {
	private:
		/*
		 * Http response status
		 */
		int status;

		/*
		 * Response body (e.g. Html)
		 */
		std::string body;

		/*
		 * Map of tokens
		 */
		std::map <std::string, std::string> tokens;

	public:
		Http();
		~Http();

		std::string createResponse();

		void addToken(const std::string &key, const std::string &value);
		void setStatusCode(int status);
		void setResponseBody(const std::string &body);

		bool parseHttp(const std::string &httpRequest);

		std::map <std::string, std::string> getTokens() const;
		
	};
}

#endif /* HTTP_CPP */
