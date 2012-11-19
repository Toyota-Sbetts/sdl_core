#ifndef NSAPPLINKRPC_DELETEINTERACTIONCHOICESET_REQUEST_INCLUDE
#define NSAPPLINKRPC_DELETEINTERACTIONCHOICESET_REQUEST_INCLUDE


#include "JSONHandler/ALRPCRequest.h"


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

/**
     Deletes interaction choice set that has been created with "CreateInteractionChoiceSet".
     The interaction may only be deleted when not currently in use by a "performInteraction".
*/

  class DeleteInteractionChoiceSet_request : public ALRPCRequest
  {
  public:
  
    DeleteInteractionChoiceSet_request(const DeleteInteractionChoiceSet_request& c);
    DeleteInteractionChoiceSet_request(void);
    
    virtual ~DeleteInteractionChoiceSet_request(void);
  
    bool checkIntegrity(void);

    unsigned int get_interactionChoiceSetID(void) const;

    bool set_interactionChoiceSetID(unsigned int interactionChoiceSetID_);

  private:
  
    friend class DeleteInteractionChoiceSet_requestMarshaller;


///  ID of the interaction choice set to delete.
      unsigned int interactionChoiceSetID;	//!<  (0,2000000000)
  };

}

#endif
