/*
 * ldr_sensor.h
 *
 *  Created on: Oct 3, 2024
 *      Author: Nardin
 */

#ifndef LDR_SENSOR_H_
#define LDR_SENSOR_H_
#include "std_types.h"


/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/
#define LDR_SENSOR_CHANNEL_ID            0
#define LDR_SENSOR_MAX_VOLT_VALUE        2.56
#define LDR_SENSOR_MAX_LIGHT_INTENSITY   100

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
uint16 LDR_getLightIntensity(void);

#endif /* LDR_SENSOR_H_ */
