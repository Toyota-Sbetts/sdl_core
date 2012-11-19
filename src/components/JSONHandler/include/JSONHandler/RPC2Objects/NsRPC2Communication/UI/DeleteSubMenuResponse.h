#ifndef NSRPC2COMMUNICATION_UI_DELETESUBMENURESPONSE_INCLUDE
#define NSRPC2COMMUNICATION_UI_DELETESUBMENURESPONSE_INCLUDE

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

    class DeleteSubMenuResponse : public ::RPC2Communication::RPC2Response
    {
    public:
    
      DeleteSubMenuResponse(const DeleteSubMenuResponse& c);
      DeleteSubMenuResponse(void);
    
      DeleteSubMenuResponse& operator =(const DeleteSubMenuResponse&);
    
      virtual ~DeleteSubMenuResponse(void);
    
      bool checkIntegrity(void);
    

    private:

      friend class DeleteSubMenuResponseMarshaller;


    };
  }
}

#endif
