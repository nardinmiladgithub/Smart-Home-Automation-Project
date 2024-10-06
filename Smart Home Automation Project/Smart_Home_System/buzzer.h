/*
 * buzzer.h
 *
 *  Created on: Oct 3, 2024
 *      Author: Nardin
 */

#ifndef BUZZER_H_
#define BUZZER_H_
#include "std_types.h"
#include "gpio.h"
/*******************************************************************************
 *                                Definitions                                  *
 *******************************************************************************/
#define BUZZER_PORT_ID   PORTD_ID
#define BUZZER_PIN_ID    PIN3_ID

/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/
void Buzzer_init(void);
void Buzzer_on(void);
void Buzzer_off(void);
#endif /* BUZZER_H_ */
