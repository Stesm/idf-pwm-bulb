#pragma once

#include <stdio.h>
#include <driver/gpio.h>

typedef struct {
    gpio_num_t led_gipo;
} bulb_pwm_config;

void xBulbInit(bulb_pwm_config *config);
void xBulbSetBttightness(uint8_t percent);
void xBulbSwitch(bool state);
uint8_t iCurrentBrightnes();