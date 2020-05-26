#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr8-stub.h>
#include <app_api.h>

volatile uint8_t cnt;

int main(void)
{
    debug_init(); // init gdb server
    DDRB = 0x20;
    sei(); // enable interruptions
    breakpoint(); // hardcoded breakpoint
    while(1)
    {
        PORTB ^= 0x20;
        cnt++;        breakpoint();
    }
}
