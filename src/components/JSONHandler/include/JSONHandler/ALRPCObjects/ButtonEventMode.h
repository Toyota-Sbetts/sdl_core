#ifndef NSAPPLINKRPC_BUTTONEVENTMODE_INCLUDE
#define NSAPPLINKRPC_BUTTONEVENTMODE_INCLUDE


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

  class ButtonEventMode
  {
  public:
    enum ButtonEventModeInternal
    {
      INVALID_ENUM=-1,

///  A button has been released up
      BUTTONUP=0,

///  A button has been pressed down
      BUTTONDOWN=1
    };
  
    ButtonEventMode() : mInternal(INVALID_ENUM)				{}
    ButtonEventMode(ButtonEventModeInternal e) : mInternal(e)		{}
  
    ButtonEventModeInternal get(void) const	{ return mInternal; }
    void set(ButtonEventModeInternal e)		{ mInternal=e; }
  
  private:
    ButtonEventModeInternal mInternal;
    friend class ButtonEventModeMarshaller;
  };
  
}

#endif
