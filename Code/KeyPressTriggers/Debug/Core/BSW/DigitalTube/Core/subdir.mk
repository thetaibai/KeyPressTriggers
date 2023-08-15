################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/BSW/DigitalTube/Core/DigitalTube.c 

OBJS += \
./Core/BSW/DigitalTube/Core/DigitalTube.o 

C_DEPS += \
./Core/BSW/DigitalTube/Core/DigitalTube.d 


# Each subdirectory must supply rules for building sources it contributes
Core/BSW/DigitalTube/Core/%.o Core/BSW/DigitalTube/Core/%.su Core/BSW/DigitalTube/Core/%.cyclo: ../Core/BSW/DigitalTube/Core/%.c Core/BSW/DigitalTube/Core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/BSW/Inc" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/BSW/LittleOs/Config" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/BSW/LittleOs/Core" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/BSW/InM/Config" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/BSW/InM/Core" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/BSW/DigitalTube/Config" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/BSW/DigitalTube/Core" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/APP/ModeChange/Config" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/APP/ModeChange/Core" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-BSW-2f-DigitalTube-2f-Core

clean-Core-2f-BSW-2f-DigitalTube-2f-Core:
	-$(RM) ./Core/BSW/DigitalTube/Core/DigitalTube.cyclo ./Core/BSW/DigitalTube/Core/DigitalTube.d ./Core/BSW/DigitalTube/Core/DigitalTube.o ./Core/BSW/DigitalTube/Core/DigitalTube.su

.PHONY: clean-Core-2f-BSW-2f-DigitalTube-2f-Core

