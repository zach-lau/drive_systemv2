#include <XInput.h>
#include "Digital_Inputs.h"

Digital_input green_button  = Digital_input(4,1,3);
Digital_input yellow_button  = Digital_input(A2,2,A3);
Digital_input blue_button  = Digital_input(12,3,10);
Digital_input red_button  = Digital_input(9,4,8);
Digital_input white_button  = Digital_input(A4,9,A5);

Digital_input key = Digital_input(0,10,-1);

Digital_input left_joystick_right = Digital_input(13,11,-1);
Digital_input left_joystick_left = Digital_input(A1,12,-1);
Digital_input left_joystick_up = Digital_input(A0,13,-1);
Digital_input left_joystick_down = Digital_input(11,14,-1);

Digital_input right_joystick_left = Digital_input(1,5,-1);
Digital_input right_joystick_right = Digital_input(6,6,-1);
Digital_input right_joystick_up = Digital_input(2,7,-1);
Digital_input right_joystick_down = Digital_input(A1,8,-1);


static const int refresh_rate = 120;

void setup() {
  XInput.begin(); 
  //input pin for the button, output channel, status led 
}

void loop() {

  key.refresh();
  
  red_button.refresh();
  yellow_button.refresh();
  blue_button.refresh();
  green_button.refresh();
  white_button.refresh();

  left_joystick_left.refresh();
  left_joystick_right.refresh();
  left_joystick_up.refresh();
  left_joystick_down.refresh();

  right_joystick_left.refresh();
  right_joystick_right.refresh();
  right_joystick_up.refresh();
  right_joystick_down.refresh();
  delay(10);

}
