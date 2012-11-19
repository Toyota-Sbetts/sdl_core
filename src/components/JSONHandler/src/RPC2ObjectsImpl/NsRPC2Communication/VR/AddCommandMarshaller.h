#ifndef NSRPC2COMMUNICATION_VR_ADDCOMMANDMARSHALLER_INCLUDE
#define NSRPC2COMMUNICATION_VR_ADDCOMMANDMARSHALLER_INCLUDE

#include <string>
#include <json/json.h>

#include "../src/../include/JSONHandler/RPC2Objects/NsRPC2Communication/VR/AddCommand.h"

namespace NsRPC2Communication
{
  namespace VR
  {

    struct AddCommandMarshaller
    {
      static bool checkIntegrity(AddCommand& e);
      static bool checkIntegrityConst(const AddCommand& e);
    
      static bool fromString(const std::string& s,AddCommand& e);
      static const std::string toString(const AddCommand& e);
    
      static bool fromJSON(const Json::Value& s,AddCommand& e);
      static Json::Value toJSON(const AddCommand& e);
    };
  }
}

#endif
