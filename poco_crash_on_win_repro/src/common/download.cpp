#include"download.h"
#include "Poco/Net/HTTPSClientSession.h"
#include "Poco/Net/HTTPRequest.h"
#include "Poco/Net/HTTPResponse.h"

#include "Poco/Net/SSLManager.h"
#include "Poco/Net/AcceptCertificateHandler.h"

#include "Poco/StreamCopier.h"
#include "Poco/File.h"

#include "Poco/URI.h"
#include "Poco/Exception.h"

void download()
{
    std::string strURI("https://mt1.google.com/vt/lyrs=s&x=208725&y=123184&z=18");
    Poco::URI uri(strURI);

    // std::string path(uri.getPathAndQuery());
    // if (path.empty()) path = "/";

    // Poco::Net::HTTPSClientSession session(uri.getHost(), uri.getPort());
    // printf("Downloading %s(%s:%d)\n", strURI.c_str(), uri.getHost().c_str(), uri.getPort());
}