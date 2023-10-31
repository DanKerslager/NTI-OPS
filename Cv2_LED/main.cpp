#include "mbed.h"
#include "LCD_DISCO_F469NI.h"
#include "stm32469i_discovery.h"
#include "stm32469i_discovery_lcd.h"
#define BLINKRATE 1000ms
#define TEXTLINE 10
Thread thread1;
Thread thread2;
Thread thread3;

DigitalOut led1(LED1);
DigitalIn userButton(PA_0);
LCD_DISCO_F469NI lcd;

void led_thread(){
    DigitalOut led1(LED1);
    while (1){
        led1=!led1;
        ThisThread::sleep_for(BLINKRATE);
    }

}
void disp_thread(){
    while(1){
        while(!userButton){
        lcd.Clear(LCD_COLOR_BLUE);
        lcd.SetBackColor(LCD_COLOR_BLUE);
        lcd.SetTextColor(LCD_COLOR_LIGHTGRAY);     
        lcd.DisplayStringAt(0, LINE(TEXTLINE), (uint8_t *)"FUNGUJE TO KEq", CENTER_MODE);
        ThisThread::sleep_for(BLINKRATE);
        lcd.Clear(LCD_COLOR_BLUE);
        ThisThread::sleep_for(BLINKRATE);
        }
    }
}
void button_thread(){
    while(1){
        if(userButton){
        lcd.Clear(LCD_COLOR_BLUE);
        lcd.SetBackColor(LCD_COLOR_BLUE);
        lcd.SetTextColor(LCD_COLOR_LIGHTGRAY);     
        lcd.DisplayStringAt(0, LINE(TEXTLINE), (uint8_t *)"NESAHEJ NA ME", CENTER_MODE);
        }
    }
}
// main() runs in its own thread in the OS
int main()
{
    thread1.start(led_thread);
    thread3.start(button_thread);
    thread2.start(disp_thread);    
}