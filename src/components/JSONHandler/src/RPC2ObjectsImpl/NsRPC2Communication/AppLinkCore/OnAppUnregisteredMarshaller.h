#ifndef NSRPC2COMMUNICATION_APPLINKCORE_ONAPPUNREGISTEREDMARSHALLER_INCLUDE
#define NSRPC2COMMUNICATION_APPLINKCORE_ONAPPUNREGISTEREDMARSHALLER_INCLUDE

#include <string>
#include <json/json.h>

#include "../src/../include/JSONHandler/RPC2Objects/NsRPC2Communication/AppLinkCore/OnAppUnregistered.h"

namespace NsRPC2Communication
{
  namespace AppLinkCore
  {

    struct OnAppUnregisteredMarshaller
    {
      static bool checkIntegrity(OnAppUnregistered& e);
      static bool checkIntegrityConst(const OnAppUnregistered& e);
    
      static bool fromString(const std::string& s,OnAppUnregistered& e);
      static const std::string toString(const OnAppUnregistered& e);
    
      static bool fromJSON(const Json::Value& s,OnAppUnregistered& e);
      static Json::Value toJSON(const OnAppUnregistered& e);
    };
  }
}

#endif
