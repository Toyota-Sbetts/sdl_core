#include "../src/../include/JSONHandler/RPC2Objects/NsRPC2Communication/UI/OnAppActivated.h"
#include "../../../../../Marshaller.h"

/*
  interface	NsRPC2Communication::UI
  version	1.2
  generated at	Mon Nov 19 07:25:04 2012
  source stamp	Mon Nov 19 07:04:40 2012
  author	robok0der
*/

using namespace NsRPC2Communication::UI;


OnAppActivated& OnAppActivated::operator =(const OnAppActivated& c)
{
  appName=c.appName;
  return *this;
}


OnAppActivated::~OnAppActivated(void)
{
}


OnAppActivated::OnAppActivated(void) : 
  RPC2Notification(Marshaller::METHOD_NSRPC2COMMUNICATION_UI__ONAPPACTIVATED)
{
}


OnAppActivated::OnAppActivated(const OnAppActivated& c) : RPC2Notification(Marshaller::METHOD_NSRPC2COMMUNICATION_UI__ONAPPACTIVATED)
{
  *this=c;
}


const std::string& OnAppActivated::get_appName(void)
{
  return appName;
}

bool OnAppActivated::set_appName(const std::string& appName_)
{
  appName=appName_;
  return true;
}

bool OnAppActivated::checkIntegrity(void)
{
  return OnAppActivatedMarshaller::checkIntegrity(*this);
}
