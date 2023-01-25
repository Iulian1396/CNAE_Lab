################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../board/clock_config.c \
../board/peripherals_adConv0.c \
../board/peripherals_adConv1.c \
../board/peripherals_dmaController1.c \
../board/peripherals_flexTimer_ic_1.c \
../board/peripherals_flexTimer_mc0.c \
../board/peripherals_flexTimer_pwm3.c \
../board/peripherals_lpit0.c \
../board/peripherals_lpspi_1.c \
../board/peripherals_lpuart1.c \
../board/peripherals_pdb0.c \
../board/peripherals_pdb1.c \
../board/peripherals_trgmux1.c \
../board/pin_mux.c \
../board/pwrMan1.c 

OBJS += \
./board/clock_config.o \
./board/peripherals_adConv0.o \
./board/peripherals_adConv1.o \
./board/peripherals_dmaController1.o \
./board/peripherals_flexTimer_ic_1.o \
./board/peripherals_flexTimer_mc0.o \
./board/peripherals_flexTimer_pwm3.o \
./board/peripherals_lpit0.o \
./board/peripherals_lpspi_1.o \
./board/peripherals_lpuart1.o \
./board/peripherals_pdb0.o \
./board/peripherals_pdb1.o \
./board/peripherals_trgmux1.o \
./board/pin_mux.o \
./board/pwrMan1.o 

C_DEPS += \
./board/clock_config.d \
./board/peripherals_adConv0.d \
./board/peripherals_adConv1.d \
./board/peripherals_dmaController1.d \
./board/peripherals_flexTimer_ic_1.d \
./board/peripherals_flexTimer_mc0.d \
./board/peripherals_flexTimer_pwm3.d \
./board/peripherals_lpit0.d \
./board/peripherals_lpspi_1.d \
./board/peripherals_lpuart1.d \
./board/peripherals_pdb0.d \
./board/peripherals_pdb1.d \
./board/peripherals_trgmux1.d \
./board/pin_mux.d \
./board/pwrMan1.d 


# Each subdirectory must supply rules for building sources it contributes
board/%.o: ../board/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Standard S32DS C Compiler'
	arm-none-eabi-gcc "@board/clock_config.args" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


