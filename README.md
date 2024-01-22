## Table of Contents
* [General Info](#general-information)
* [Technologies Used](#technologies-used)
* [Usage](#usage)
* [schematic](#schematic)

### General Information
- Enter your password to enter the house.
- If successful, the message "Access is Authorized ^_^, Welcome to your Smart Home" will appear on the LCD and the door will open.
-If wrong, try again (only three attempts are permitted). After that, the buzzer will beep, and the LCD will display "Access is denied!"
- After entering the correct password, the user can accomplish the following:
    * Turn the air conditioner on and off.
    * Monitor the house's temperature (visible on LCD).
    * The air conditioner will automatically turn on if the temperature exceeds or equals 35°C.

### Technologies Used

- C Language.
- Microcontroller: Atmega32.
- IDE: Eclipse.
- Simulation IDE: proteus.
- The MCAL drivers of the Atmega32 are written for clean and Extensible Code.
- All sensors have their drivers written and implemented in the HAL layer.
  


### Usage

- You can start from the APP_config.h file to configure your app.

### schematic 
![image](https://github.com/mohnagah/AVR_ATMEGA32_SMART_HOME/assets/157398651/a6460d34-b495-48c9-b2b4-08b1c17f631c)

  
