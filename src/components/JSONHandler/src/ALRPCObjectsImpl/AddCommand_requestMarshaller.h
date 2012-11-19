#ifndef NSAPPLINKRPC_ADDCOMMAND_REQUESTMARSHALLER_INCLUDE
#define NSAPPLINKRPC_ADDCOMMAND_REQUESTMARSHALLER_INCLUDE

#include <string>
#include <json/json.h>

#include "../include/JSONHandler/ALRPCObjects/AddCommand_request.h"


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

  struct AddCommand_requestMarshaller
  {
    static bool checkIntegrity(AddCommand_request& e);
    static bool checkIntegrityConst(const AddCommand_request& e);
  
    static bool fromString(const std::string& s,AddCommand_request& e);
    static const std::string toString(const AddCommand_request& e);
  
    static bool fromJSON(const Json::Value& s,AddCommand_request& e);
    static Json::Value toJSON(const AddCommand_request& e);
  };
}

#endif
