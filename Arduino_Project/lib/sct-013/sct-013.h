/**
 * @brief Header file for current sensor SCT-013.
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

#ifndef SCT_SENSOR

#define CURRENT_SENSOR A0 // Set the analog pin for sensor
#define ICAL 60 // Calibration constant = Ratio number of turns in the CT / BurdenResistor = 2000/33
#define NUMBER_OF_SAMPLES 1480

#include <Arduino.h>

void sct_013_begin();

double sct_read_current();

#endif
