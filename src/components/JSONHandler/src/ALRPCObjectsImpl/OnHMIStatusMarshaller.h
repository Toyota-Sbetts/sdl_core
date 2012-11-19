#ifndef NSAPPLINKRPC_ONHMISTATUSMARSHALLER_INCLUDE
#define NSAPPLINKRPC_ONHMISTATUSMARSHALLER_INCLUDE

#include <string>
#include <json/json.h>

#include "../include/JSONHandler/ALRPCObjects/OnHMIStatus.h"


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

  struct OnHMIStatusMarshaller
  {
    static bool checkIntegrity(OnHMIStatus& e);
    static bool checkIntegrityConst(const OnHMIStatus& e);
  
    static bool fromString(const std::string& s,OnHMIStatus& e);
    static const std::string toString(const OnHMIStatus& e);
  
    static bool fromJSON(const Json::Value& s,OnHMIStatus& e);
    static Json::Value toJSON(const OnHMIStatus& e);
  };
}

#endif
