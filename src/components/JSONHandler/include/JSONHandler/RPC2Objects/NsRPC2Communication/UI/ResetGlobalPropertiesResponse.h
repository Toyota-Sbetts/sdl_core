#ifndef NSRPC2COMMUNICATION_UI_RESETGLOBALPROPERTIESRESPONSE_INCLUDE
#define NSRPC2COMMUNICATION_UI_RESETGLOBALPROPERTIESRESPONSE_INCLUDE

#include "JSONHandler/RPC2Response.h"


/*
  interface	NsRPC2Communication::UI
  version	1.2
  generated at	Mon Nov 19 07:25:04 2012
  source stamp	Mon Nov 19 07:04:40 2012
  author	robok0der
*/

namespace NsRPC2Communication
{
  namespace UI
  {

    class ResetGlobalPropertiesResponse : public ::RPC2Communication::RPC2Response
    {
    public:
    
      ResetGlobalPropertiesResponse(const ResetGlobalPropertiesResponse& c);
      ResetGlobalPropertiesResponse(void);
    
      ResetGlobalPropertiesResponse& operator =(const ResetGlobalPropertiesResponse&);
    
      virtual ~ResetGlobalPropertiesResponse(void);
    
      bool checkIntegrity(void);
    

    private:

      friend class ResetGlobalPropertiesResponseMarshaller;


    };
  }
}

#endif
