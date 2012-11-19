#ifndef NSRPC2COMMUNICATION_VR_GETCAPABILITIESRESPONSEMARSHALLER_INCLUDE
#define NSRPC2COMMUNICATION_VR_GETCAPABILITIESRESPONSEMARSHALLER_INCLUDE

#include <string>
#include <json/json.h>

#include "../src/../include/JSONHandler/RPC2Objects/NsRPC2Communication/VR/GetCapabilitiesResponse.h"

namespace NsRPC2Communication
{
  namespace VR
  {

    struct GetCapabilitiesResponseMarshaller
    {
      static bool checkIntegrity(GetCapabilitiesResponse& e);
      static bool checkIntegrityConst(const GetCapabilitiesResponse& e);
    
      static bool fromString(const std::string& s,GetCapabilitiesResponse& e);
      static const std::string toString(const GetCapabilitiesResponse& e);
    
      static bool fromJSON(const Json::Value& s,GetCapabilitiesResponse& e);
      static Json::Value toJSON(const GetCapabilitiesResponse& e);
    };
  }
}

#endif
