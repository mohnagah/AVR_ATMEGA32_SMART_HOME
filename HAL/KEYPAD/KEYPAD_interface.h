/*****************************************************************/
/*****************************************************************/
/*************	 Author  : Mohammed Nagah 	    ******************/
/*************	 Layer   : HAL					******************/
/*************	 SWC   	 : KEYPAD  				******************/
/*************	 Date    : 9 Jan 2024			******************/
/*************	 Version : V1.0					******************/
/*****************************************************************/
/*****************************************************************/


#ifndef KEYPAD_KEYPAD_INTERFACE_H_
#define KEYPAD_KEYPAD_INTERFACE_H_

#include "../../HAL/KEYPAD/KEYPAD_config.h"
#include "../../LIB/STD_TYPES.h"






void KEYPAD_vInit(void);
u8   KEYPAD_u8GetPressed(void);

#endif /* KEYPAD_KEYPAD_INTERFACE_H_ */
