/*
Interface between motor controller board and host interface
*/
#include "comm.h"

class Board2HostInterface:public Comm {
    public:
        Board2HostInterface(void);
        void run(void);
        Board2HostInterface& operator << (char*);
        Board2HostInterface& operator << (uint32_t);
        void external_interrupt_isr(void);
    private:
        void dispatch_commands(void);
        void putbyte(char c);
        char getbyte(void);
        void set_pwm(uint16_t a, uint16_t b, uint16_t c, uint16_t d);
        void stop(void);
        uint16_t read_battery_voltage(void);
        void set_led(uint8_t channel, uint8_t state);
        void reset(void);
        void read_odometer(void);
        void measure_distance(void);
        void rotate(uint8_t angle);
        void read_ultrasound_transient(void);
        void init_uart(void);
        void init_adc(void);
        void init_pwm(void);
        void init_clock(void);
        void init_microsecond_timer(void);
        void init_input_capture(void);
	uint16_t measure_pulse_width(void);
        uint32_t micros(void);
        void init_external_interrupts(void);
        uint32_t left_wheel_counter;
        uint32_t right_wheel_counter;
        uint32_t left_wheel_timestamp;
        uint32_t right_wheel_timestamp;
        uint32_t left_wheel_timestamp_prev;
        uint32_t right_wheel_timestamp_prev;
	uint32_t goto_steps;

};
