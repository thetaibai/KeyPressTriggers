################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/BSW/Src/gpio.c \
../Core/BSW/Src/iwdg.c \
../Core/BSW/Src/main.c \
../Core/BSW/Src/stm32f1xx_hal_msp.c \
../Core/BSW/Src/stm32f1xx_it.c \
../Core/BSW/Src/syscalls.c \
../Core/BSW/Src/sysmem.c \
../Core/BSW/Src/system_stm32f1xx.c \
../Core/BSW/Src/tim.c 

OBJS += \
./Core/BSW/Src/gpio.o \
./Core/BSW/Src/iwdg.o \
./Core/BSW/Src/main.o \
./Core/BSW/Src/stm32f1xx_hal_msp.o \
./Core/BSW/Src/stm32f1xx_it.o \
./Core/BSW/Src/syscalls.o \
./Core/BSW/Src/sysmem.o \
./Core/BSW/Src/system_stm32f1xx.o \
./Core/BSW/Src/tim.o 

C_DEPS += \
./Core/BSW/Src/gpio.d \
./Core/BSW/Src/iwdg.d \
./Core/BSW/Src/main.d \
./Core/BSW/Src/stm32f1xx_hal_msp.d \
./Core/BSW/Src/stm32f1xx_it.d \
./Core/BSW/Src/syscalls.d \
./Core/BSW/Src/sysmem.d \
./Core/BSW/Src/system_stm32f1xx.d \
./Core/BSW/Src/tim.d 


# Each subdirectory must supply rules for building sources it contributes
Core/BSW/Src/%.o Core/BSW/Src/%.su Core/BSW/Src/%.cyclo: ../Core/BSW/Src/%.c Core/BSW/Src/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/BSW/Inc" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/BSW/LittleOs/Config" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/BSW/LittleOs/Core" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/BSW/InM/Config" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/BSW/InM/Core" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/BSW/DigitalTube/Config" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/BSW/DigitalTube/Core" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/APP/ModeChange/Config" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/APP/ModeChange/Core" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/APP/Display/Config" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/APP/Display/Core" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/APP/Trigger/Config" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/APP/Trigger/Core" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-BSW-2f-Src

clean-Core-2f-BSW-2f-Src:
	-$(RM) ./Core/BSW/Src/gpio.cyclo ./Core/BSW/Src/gpio.d ./Core/BSW/Src/gpio.o ./Core/BSW/Src/gpio.su ./Core/BSW/Src/iwdg.cyclo ./Core/BSW/Src/iwdg.d ./Core/BSW/Src/iwdg.o ./Core/BSW/Src/iwdg.su ./Core/BSW/Src/main.cyclo ./Core/BSW/Src/main.d ./Core/BSW/Src/main.o ./Core/BSW/Src/main.su ./Core/BSW/Src/stm32f1xx_hal_msp.cyclo ./Core/BSW/Src/stm32f1xx_hal_msp.d ./Core/BSW/Src/stm32f1xx_hal_msp.o ./Core/BSW/Src/stm32f1xx_hal_msp.su ./Core/BSW/Src/stm32f1xx_it.cyclo ./Core/BSW/Src/stm32f1xx_it.d ./Core/BSW/Src/stm32f1xx_it.o ./Core/BSW/Src/stm32f1xx_it.su ./Core/BSW/Src/syscalls.cyclo ./Core/BSW/Src/syscalls.d ./Core/BSW/Src/syscalls.o ./Core/BSW/Src/syscalls.su ./Core/BSW/Src/sysmem.cyclo ./Core/BSW/Src/sysmem.d ./Core/BSW/Src/sysmem.o ./Core/BSW/Src/sysmem.su ./Core/BSW/Src/system_stm32f1xx.cyclo ./Core/BSW/Src/system_stm32f1xx.d ./Core/BSW/Src/system_stm32f1xx.o ./Core/BSW/Src/system_stm32f1xx.su ./Core/BSW/Src/tim.cyclo ./Core/BSW/Src/tim.d ./Core/BSW/Src/tim.o ./Core/BSW/Src/tim.su

.PHONY: clean-Core-2f-BSW-2f-Src

