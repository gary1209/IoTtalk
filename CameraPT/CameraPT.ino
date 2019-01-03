#include <Bridge.h>

int press_delay = 800;

char pin13[2];
char valueStr[2];
int valueInt;

void setup() {
    pinMode(13,OUTPUT);
    digitalWrite(13, LOW);
    pinMode(2,OUTPUT);    
    digitalWrite(2, LOW);
    pinMode(3,OUTPUT);
    digitalWrite(3, LOW);
    pinMode(4,OUTPUT);    
    digitalWrite(4, LOW);
    pinMode(5,OUTPUT);    
    digitalWrite(5, LOW);

    Bridge.begin();   // Pins 0 and 1 should be avoided as they are used by the Bridge library.
}
 
void loop() {
    Bridge.get("Reg_done",  pin13, 2);
    digitalWrite(13, atoi(pin13));    
   
    Bridge.get("Left",  valueStr, 2);
    if (strcmp(valueStr,"") != 0){
        valueStr[1]='\0';
        valueInt = atoi(valueStr);
        if (valueInt >= 1){
            digitalWrite(2, HIGH);        
            delay(press_delay);
            digitalWrite(2, LOW);        
        }
        Bridge.put("Left", "");
    }

    Bridge.get("Right",  valueStr, 2);
    if (strcmp(valueStr,"") != 0){
        valueStr[1]='\0';
        valueInt = atoi(valueStr);
        if (valueInt >= 1){
            digitalWrite(3, HIGH);        
            delay(press_delay);
            digitalWrite(3, LOW);        
        }
        Bridge.put("Right", "");
    }

    Bridge.get("Up",  valueStr, 2);
    if (strcmp(valueStr,"") != 0){
        valueStr[1]='\0';
        valueInt = atoi(valueStr);
        if (valueInt >= 1){
            digitalWrite(4, HIGH);        
            delay(press_delay);
            digitalWrite(4, LOW);        
        }
        Bridge.put("Up", "");
    }

    Bridge.get("Down",  valueStr, 2);
    if (strcmp(valueStr,"") != 0){
        valueStr[1]='\0';
        valueInt = atoi(valueStr);
        if (valueInt >= 1){
            digitalWrite(5, HIGH);        
            delay(press_delay);
            digitalWrite(5, LOW);        
        }
        Bridge.put("Down", "");
    }
}

