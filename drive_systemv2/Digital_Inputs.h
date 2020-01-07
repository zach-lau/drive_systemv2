#include <XInput.h>
#include <Vector.h>
#ifndef _digital_input_h_
#define _digital_input_h_


//A single digital input
class Digital_input{
  private:
    int _input_pin;
    XInputControl _output_channel; 
    int _status_led;
  public: 
    Digital_input(int input_pin, XInputControl output_channel, int status_led);
    void refresh();
  };

//The libraries class intended to make it easier to add digital inputs
//Does not currently work
class Digital_inputs_ {
  private:
    Vector<Digital_input*> buttons;
  public:
    void add_input(int input_pin, XInputControl output_channel, int status_led);
    void refresh();
  };


Digital_inputs_ Digital_inputs;
#endif
