#include "../src/../include/JSONHandler/RPC2Objects/NsRPC2Communication/UI/AddCommandResponse.h"
#include "../../../../../Marshaller.h"

/*
  interface	NsRPC2Communication::UI
  version	1.2
  generated at	Mon Nov 19 07:25:04 2012
  source stamp	Mon Nov 19 07:04:40 2012
  author	robok0der
*/

using namespace NsRPC2Communication::UI;


AddCommandResponse& AddCommandResponse::operator =(const AddCommandResponse& c)
{
  return *this;
}


AddCommandResponse::~AddCommandResponse(void)
{
}


AddCommandResponse::AddCommandResponse(void) : 
  RPC2Response(Marshaller::METHOD_NSRPC2COMMUNICATION_UI__ADDCOMMANDRESPONSE)
{
}


AddCommandResponse::AddCommandResponse(const AddCommandResponse& c) : RPC2Response(Marshaller::METHOD_NSRPC2COMMUNICATION_UI__ADDCOMMANDRESPONSE,c.getId(),c.getResult())
{
  *this=c;
}


bool AddCommandResponse::checkIntegrity(void)
{
  return AddCommandResponseMarshaller::checkIntegrity(*this);
}
