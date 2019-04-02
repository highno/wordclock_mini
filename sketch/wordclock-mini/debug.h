#ifndef ___debug_h___
#define ___debug_h___

#include "Arduino.h"
#include <ESP8266WiFi.h>


#ifdef DEBUG    
#define DPRINT(...)    Serial.print(__VA_ARGS__)     //DPRINT is a macro, debug print
#define DPRINTLN(...)  Serial.println(__VA_ARGS__)   //DPRINTLN is a macro, debug print with new line
#else
#define DPRINT(...)     //now defines a blank line
#define DPRINTLN(...)   //now defines a blank line
#endif




#endif
