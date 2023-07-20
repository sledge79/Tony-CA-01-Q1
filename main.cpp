#include "mbed.h"


DigitalOut led1(LED1);
DigitalOut led2(LED2);


const int LED1_TOGGLE_INTERVAL_MS = 2000;
const int LED2_TOGGLE_INTERVAL_MS = 5000;


void toggleLED1() {
    static bool state = false;
    led1 = state;
    state = !state;
}


void toggleLED2() {
    static bool state = false;
    led2 = state;
    state = !state;
}

int main() {
   
    Ticker ticker1;
    Ticker ticker2;

     ticker1.attach(toggleLED1, std::chrono::milliseconds(LED1_TOGGLE_INTERVAL_MS));
    ticker2.attach(toggleLED2, std::chrono::milliseconds(LED2_TOGGLE_INTERVAL_MS));

    
    while (1) {
      
    }
}