/**
 * @brief Source file for current sensor SCT-013.
 * 
 * @file sct-013
 *
 * @author Luca Quiriconi (mrquiriconi@gmail.com)
 * 
 * @version 0.1
 * 
 * @date 06-17-2023
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <Arduino.h>
#include <EmonLib.h>
#include "sct-013.h"

EnergyMonitor sct;

void sct_013_begin() 
{
    sct.current(CURRENT_SENSOR, ICAL);
}

double sct_read_current()
{
    double current = 0;
    double value = 0;
    double sum = 0;
    int count = 10;

    for (int i = 0; i < count; i++)
    {
        Serial.print("Current: ");
        value = sct.calcIrms(NUMBER_OF_SAMPLES);
        Serial.print(current);
        Serial.println("A");
        Serial.println();
        sum += value;
        delay(50);
    }

    Serial.print("Avarange: ");
    current = sum / count;
    Serial.print(current);
    Serial.println("A");
    delay(50);

    return current;
}