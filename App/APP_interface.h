/*****************************************************************/
/*****************************************************************/
/*************	 Author  : Mohammed Nagah	    ******************/
/*************	 Layer   : APP					******************/
/*************	 Date    : 23 Jan 2024			******************/
/*************	 Version : V1.2					******************/
/*****************************************************************/
/*****************************************************************/




#ifndef APP_APP_INTERFACE_H_
#define APP_APP_INTERFACE_H_

void APP_voidInit(void);

void APP_voidWelcomeScreen(void);
void APP_voidUserWelcomeScreen(void);
void APP_voidInitTheSystem(void);
void APP_voidStartTheSystem(void);

void APP_voidEnterLandingState(void);
void APP_voidEnterRunningState(void);

void APP_voidOpenTheDoor(void);
void APP_voidEnterBlockedState(void);

void APP_voidEnterTerminationState(void);


#endif /* APP_APP_INTERFACE_H_ */
