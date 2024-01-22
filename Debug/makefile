################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/TIMER/subdir.mk
-include MCAL/I2C/subdir.mk
-include MCAL/GPIO/subdir.mk
-include MCAL/GIE/subdir.mk
-include MCAL/EXTI/subdir.mk
-include MCAL/ADC/subdir.mk
-include HAL/SERVOM/subdir.mk
-include HAL/LCD_I2C/subdir.mk
-include HAL/LCD/subdir.mk
-include HAL/KEYPAD/subdir.mk
-include App/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
WT_SMART_HOME.lss \

FLASH_IMAGE += \
WT_SMART_HOME.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: WT_SMART_HOME.elf secondary-outputs

# Tool invocations
WT_SMART_HOME.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,WT_SMART_HOME.map -mmcu=atmega32 -o "WT_SMART_HOME.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

WT_SMART_HOME.lss: WT_SMART_HOME.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S WT_SMART_HOME.elf  >"WT_SMART_HOME.lss"
	@echo 'Finished building: $@'
	@echo ' '

WT_SMART_HOME.hex: WT_SMART_HOME.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex WT_SMART_HOME.elf  "WT_SMART_HOME.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: WT_SMART_HOME.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 WT_SMART_HOME.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) WT_SMART_HOME.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
