################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Peripherals/peripherals_config.c 

OBJS += \
./src/Peripherals/peripherals_config.o 

C_DEPS += \
./src/Peripherals/peripherals_config.d 


# Each subdirectory must supply rules for building sources it contributes
src/Peripherals/%.o: ../src/Peripherals/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/Peripherals/peripherals_config.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


