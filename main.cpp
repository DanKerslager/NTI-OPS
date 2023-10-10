#include "morse.h"

void init() {
    DigitalOut led(LED1);
    led = 1;
}
void exit() {
    DigitalOut led(LED1);
    led = 1;
}
int main()
{
    init();
    //Set word to translate to morse (PLEASE USE CAPITAL LETTERS ;)
    char word[] = "SOS";
    morse(word);
    exit();
    return 0;
}