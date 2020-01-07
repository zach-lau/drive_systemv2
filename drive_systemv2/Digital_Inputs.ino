#include "Digital_Inputs.h"
#include <XInput.h>

  void Digital_inputs_::add_input(int input_pin, XInputControl output_channel, int status_led){
    //TODO
    //make a new button 
    //add this button to the inputs vector
    //this->buttons.push_back(Digital_input(input_pin, output_channel, status_led));
   
  }

  void Digital_inputs_::refresh(){
    //refersh every button
    //     this->buttons.at(0)->refresh();
    //    for(int i = 0; i < this->buttons.size(); i++){
    //      this->buttons.at(i).refresh();
    //      }
    //TODO
  }

  Digital_input::Digital_input(int input_pin, XInputControl output_channel, int status_led){
    //constructor
    //this->_input_pin = input_pin; this->_output_chan
    this->_input_pin = input_pin;
    this->_output_channel = output_channel;
    this->_status_led = status_led;
    
    pinMode(input_pin, INPUT);
    if(status_led >= 0){pinMode(status_led, OUTPUT);}
    }
    
  void Digital_input::refresh(){
    //read the input pin and output the value tot he status led and the output channe,LOW);
    
    
    int val = digitalRead(this->_input_pin);
    
    if(val){
      XInput.press(this->_output_channel); 
      digitalWrite(this->_status_led, HIGH); 
    }
    else{
      XInput.release(this->_output_channel);
      digitalWrite(this->_status_led, LOW);
      }
      
    }
