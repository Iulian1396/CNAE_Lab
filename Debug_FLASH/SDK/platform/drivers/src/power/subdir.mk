################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../SDK/platform/drivers/src/power/power_manager.c 

OBJS += \
./SDK/platform/drivers/src/power/power_manager.o 

C_DEPS += \
./SDK/platform/drivers/src/power/power_manager.d 


# Each subdirectory must supply rules for building sources it contributes
SDK/platform/drivers/src/power/%.o: ../SDK/platform/drivers/src/power/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@SDK/platform/drivers/src/power/power_manager.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


