################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include src/Peripherals/subdir.mk
-include src/GD3000/tpp/subdir.mk
-include src/GD3000/aml/wait_aml/subdir.mk
-include src/GD3000/aml/spi_aml/subdir.mk
-include src/GD3000/subdir.mk
-include src/subdir.mk
-include board/subdir.mk
-include SDK/rtos/osif/subdir.mk
-include SDK/platform/drivers/src/trgmux/subdir.mk
-include SDK/platform/drivers/src/power/S32K1xx/subdir.mk
-include SDK/platform/drivers/src/power/subdir.mk
-include SDK/platform/drivers/src/pins/subdir.mk
-include SDK/platform/drivers/src/pdb/subdir.mk
-include SDK/platform/drivers/src/lpuart/subdir.mk
-include SDK/platform/drivers/src/lpspi/subdir.mk
-include SDK/platform/drivers/src/lpit/subdir.mk
-include SDK/platform/drivers/src/interrupt/subdir.mk
-include SDK/platform/drivers/src/ftm/subdir.mk
-include SDK/platform/drivers/src/edma/subdir.mk
-include SDK/platform/drivers/src/clock/S32K1xx/subdir.mk
-include SDK/platform/drivers/src/adc/subdir.mk
-include SDK/S32K144_SDK_4.0.1/platform/drivers/src/pins/subdir.mk
-include SDK/S32K144_SDK_4.0.1/platform/drivers/src/interrupt/subdir.mk
-include SDK/S32K144_SDK_4.0.1/platform/drivers/src/clock/S32K1xx/subdir.mk
-include SDK/S32K144_SDK_4.0.1/platform/devices/S32K144/startup/subdir.mk
-include SDK/S32K144_SDK_4.0.1/platform/devices/subdir.mk
-include Project_Settings/Startup_Code/subdir.mk
-include FreeMaster_S32K144_2.0.0/src_platforms/S32xx/subdir.mk
-include FreeMaster_S32K144_2.0.0/src_common/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
SECONDARY_SIZE += \
bldc_moc.siz \


# All Target
all: bldc_moc.elf secondary-outputs

# Tool invocations
bldc_moc.elf: $(OBJS) E:/WorkSpace_NXP/ws_3.5/bldc_moc/Project_Settings/Linker_Files/S32K144_64_flash.ld $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: Standard S32DS C Linker'
	arm-none-eabi-gcc -o "bldc_moc.elf" "@bldc_moc.args"  $(USER_OBJS)
	@echo 'Finished building target: $@'
	@echo ' '

bldc_moc.siz: bldc_moc.elf
	@echo 'Invoking: Standard S32DS Print Size'
	arm-none-eabi-size --format=berkeley bldc_moc.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) ./*
	-@echo ' '

secondary-outputs: $(SECONDARY_SIZE)

.PHONY: all clean dependents

-include ../makefile.targets
