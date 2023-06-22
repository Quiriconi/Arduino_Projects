/**
 * @brief Arduino firmware test
 * 
 * @file main.cpp
 *
 * @author Luca Quiriconi (mrquiriconi@gmail.com)
 * 
 * @version 0.1
 * @date 08-27-2022
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <Arduino.h>
#include <sct-013.h>

/*******************************************************
 * Constants
 ******************************************************/

/*******************************************************
*   Global variables
*******************************************************/

/*******************************************************
*   Extern variables
*******************************************************/

/*******************************************************
*   Implementation 
*******************************************************/

void setup() 
{
    /* Configure baud rate of the serial communication */
    Serial.begin(9600);
}

void loop() 
{
    sct_read_current();
    delay(100);
}