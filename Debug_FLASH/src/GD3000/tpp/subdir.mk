################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/GD3000/tpp/tpp.c 

OBJS += \
./src/GD3000/tpp/tpp.o 

C_DEPS += \
./src/GD3000/tpp/tpp.d 


# Each subdirectory must supply rules for building sources it contributes
src/GD3000/tpp/%.o: ../src/GD3000/tpp/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@src/GD3000/tpp/tpp.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


