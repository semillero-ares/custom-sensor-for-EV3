#include "EV3-UART-EmulationHard.h"
#define SENSOR A0
#define VALA  0.790373361
#define VALB 132223.008
#define VALC 1.159600909

EV3UARTEmulation sensor(&Serial, 91, 38400);

void setup()
{
  while (!Serial);
  //Setup EV3 Protocol
  //Name Length Max 10
  /* init uart  emulation
    mode->name = name
    mode->view = view
    mode->data_type = data_type
    mode->sample_size = sample_size
    mode->figures = figures or (inclusive decimal point and decimals)
    mode->decimals = decimals Number of decimal places
  */
  sensor.create_mode("Distance", true, DATA16, 1, 3, 0);
  sensor.reset();
}

unsigned long last_reading = 0;
unsigned long new_reading = 0;

void loop()
{
  sensor.heart_beat(); 
  // Maximum time compare is    150 milisec
  new_reading = millis();
  if (new_reading - last_reading > 150) {
    int r = analogRead(SENSOR);
    int distancemm = constrain(VALB/pow(r+VALA,VALC),80,800);
    sensor.send_data16(distancemm);
    last_reading = new_reading;
  }
}
