#ifndef NSAPPLINKRPC_ENCODEDSYNCPDATA_REQUESTMARSHALLER_INCLUDE
#define NSAPPLINKRPC_ENCODEDSYNCPDATA_REQUESTMARSHALLER_INCLUDE

#include <string>
#include <json/json.h>

#include "../include/JSONHandler/ALRPCObjects/EncodedSyncPData_request.h"


/*
  interface	Ford Sync RAPI
  version	1.2
  date		2011-05-17
  generated at	Mon Nov 19 06:40:48 2012
  source stamp	Thu Oct 25 06:49:27 2012
  author	robok0der
*/

namespace NsAppLinkRPC
{

  struct EncodedSyncPData_requestMarshaller
  {
    static bool checkIntegrity(EncodedSyncPData_request& e);
    static bool checkIntegrityConst(const EncodedSyncPData_request& e);
  
    static bool fromString(const std::string& s,EncodedSyncPData_request& e);
    static const std::string toString(const EncodedSyncPData_request& e);
  
    static bool fromJSON(const Json::Value& s,EncodedSyncPData_request& e);
    static Json::Value toJSON(const EncodedSyncPData_request& e);
  };
}

#endif
