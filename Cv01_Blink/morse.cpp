#include "mbed.h"
#include "morse.h"
#define BLINKING_RATE     300ms
// define short blink
void blinkDot() {
    DigitalOut led(LED1);
    led = 0;
    ThisThread::sleep_for(BLINKING_RATE);
    led = 1;
    ThisThread::sleep_for(BLINKING_RATE);
}
// defile long blink
void blinkDash() {
    DigitalOut led(LED1);
    led = 0;
    ThisThread::sleep_for(BLINKING_RATE * 2);
    led = 1;
    ThisThread::sleep_for(BLINKING_RATE);
}
 // morse translator
void morse(String word) {
    for (int i = 0; word[i] != NULL; i++) {
        switch (word[i]) {
        case 'A':
            blinkDot();
            blinkDash();
            break;
        case 'B':
            blinkDash();
            blinkDot();
            blinkDot();
            blinkDot();
            break;
        case 'C':
            blinkDash();
            blinkDot();
            blinkDash();
            blinkDot();
            break;
        case 'D':
            blinkDash();
            blinkDot();
            blinkDot();
            break;
        case 'E':
            blinkDot();
            break;
        case 'F':
            blinkDot();
            blinkDot();
            blinkDash();
            blinkDot();
            break;
        case 'G':
            blinkDash();
            blinkDash();
            blinkDot();
            break;
        case 'H':
            blinkDot();
            blinkDot();
            blinkDot();
            blinkDot();
            break;
        case 'I':
            blinkDot();
            blinkDot();
            break;
        case 'J':
            blinkDot();
            blinkDash();
            blinkDash();
            blinkDash();
            break;
        case 'K':
            blinkDash();
            blinkDot();
            blinkDash();
            break;
        case 'L':
            blinkDot();
            blinkDash();
            blinkDot();
            blinkDot();
            break;
        case 'M':
            blinkDash();
            blinkDash();
            break;
        case 'N':
            blinkDash();
            blinkDot();
            break;
        case 'O':
            blinkDash();
            blinkDash();
            blinkDash();
            break;
        case 'P':
            blinkDot();
            blinkDash();
            blinkDash();
            blinkDot();
            break;
        case 'Q':
            blinkDash();
            blinkDash();
            blinkDot();
            blinkDash();
            break;
        case 'R':
            blinkDot();
            blinkDash();
            blinkDot();
            break;
        case 'S':
            blinkDot();
            blinkDot();
            blinkDot();
            break;
        case 'T':
            blinkDash();
            break;
        case 'U':
            blinkDot();
            blinkDot();
            blinkDash();
            break;
        case 'V':
            blinkDot();
            blinkDot();
            blinkDot();
            blinkDash();
            break;
        case 'W':
            blinkDot();
            blinkDash();
            blinkDash();
            break;
        case 'X':
            blinkDash();
            blinkDot();
            blinkDot();
            blinkDash();
            break;
        case 'Y':
            blinkDash();
            blinkDot();
            blinkDash();
            blinkDash();
            break;
        case 'Z':
            blinkDash();
            blinkDash();
            blinkDot();
            blinkDot();
            break;
        }
        ThisThread::sleep_for(BLINKING_RATE * 4);
    }
}