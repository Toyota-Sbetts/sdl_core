#ifndef NSRPC2COMMUNICATION_UI_SHOWRESPONSE_INCLUDE
#define NSRPC2COMMUNICATION_UI_SHOWRESPONSE_INCLUDE

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

    class ShowResponse : public ::RPC2Communication::RPC2Response
    {
    public:
    
      ShowResponse(const ShowResponse& c);
      ShowResponse(void);
    
      ShowResponse& operator =(const ShowResponse&);
    
      virtual ~ShowResponse(void);
    
      bool checkIntegrity(void);
    

    private:

      friend class ShowResponseMarshaller;


    };
  }
}

#endif
