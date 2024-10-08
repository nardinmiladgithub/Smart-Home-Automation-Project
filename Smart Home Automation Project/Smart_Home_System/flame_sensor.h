/*
 * flame_sensor.h
 *
 *  Created on: Oct 3, 2024
 *      Author: Nardin
 */

#ifndef FLAME_SENSOR_H_
#define FLAME_SENSOR_H_
#include "std_types.h"
#include "gpio.h"
/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/
#define FLAME_SENSOR_PORT_ID   PORTD_ID
#define FLAME_SENSOR_PIN_ID    PIN2_ID

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
void FlameSensor_init(void);
uint8 FlameSensor_getValue(void);
#endif /* FLAME_SENSOR_H_ */
