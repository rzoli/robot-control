#define F_CPU 2000000UL
#define BAUD 115200
#define RED_LED 0
#define GREEN_LED 1
#define SET_GREEN_LED  PORTB.OUTSET = 1<<GREEN_LED
#define CLEAR_GREEN_LED  PORTB.OUTCLR = 1<<GREEN_LED
#define SET_RED_LED  PORTB.OUTSET = 1<<RED_LED
#define CLEAR_RED_LED  PORTB.OUTCLR = 1<<RED_LED
