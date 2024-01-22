/*
 * SERVOM_interface.h
 *
 *  Created on: Jan 9, 2024
 *      Author: Mohammed Nagah
 */

#ifndef HAL_SERVOM_SERVOM_INTERFACE_H_
#define HAL_SERVOM_SERVOM_INTERFACE_H_


void SERVOM_vInit();

//this functions deals with angle range from 0 : 180
void SERVOM_vStart(u8 Copy_u8Angle);
void SERVOM_vStop(void);


#endif /* HAL_SERVOM_SERVOM_INTERFACE_H_ */
