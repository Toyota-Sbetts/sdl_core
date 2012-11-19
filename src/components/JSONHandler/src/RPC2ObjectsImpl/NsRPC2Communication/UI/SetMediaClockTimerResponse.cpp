#include "../src/../include/JSONHandler/RPC2Objects/NsRPC2Communication/UI/SetMediaClockTimerResponse.h"
#include "../../../../../Marshaller.h"

/*
  interface	NsRPC2Communication::UI
  version	1.2
  generated at	Mon Nov 19 07:25:04 2012
  source stamp	Mon Nov 19 07:04:40 2012
  author	robok0der
*/

using namespace NsRPC2Communication::UI;


SetMediaClockTimerResponse& SetMediaClockTimerResponse::operator =(const SetMediaClockTimerResponse& c)
{
  return *this;
}


SetMediaClockTimerResponse::~SetMediaClockTimerResponse(void)
{
}


SetMediaClockTimerResponse::SetMediaClockTimerResponse(void) : 
  RPC2Response(Marshaller::METHOD_NSRPC2COMMUNICATION_UI__SETMEDIACLOCKTIMERRESPONSE)
{
}


SetMediaClockTimerResponse::SetMediaClockTimerResponse(const SetMediaClockTimerResponse& c) : RPC2Response(Marshaller::METHOD_NSRPC2COMMUNICATION_UI__SETMEDIACLOCKTIMERRESPONSE,c.getId(),c.getResult())
{
  *this=c;
}


bool SetMediaClockTimerResponse::checkIntegrity(void)
{
  return SetMediaClockTimerResponseMarshaller::checkIntegrity(*this);
}
