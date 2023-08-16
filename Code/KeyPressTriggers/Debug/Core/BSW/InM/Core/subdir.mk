################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Core/BSW/InM/Core/InM.c 

OBJS += \
./Core/BSW/InM/Core/InM.o 

C_DEPS += \
./Core/BSW/InM/Core/InM.d 


# Each subdirectory must supply rules for building sources it contributes
Core/BSW/InM/Core/%.o Core/BSW/InM/Core/%.su Core/BSW/InM/Core/%.cyclo: ../Core/BSW/InM/Core/%.c Core/BSW/InM/Core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103x6 -c -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/BSW/Inc" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/BSW/LittleOs/Config" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/BSW/LittleOs/Core" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/BSW/InM/Config" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/BSW/InM/Core" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/BSW/DigitalTube/Config" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/BSW/DigitalTube/Core" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/APP/ModeChange/Config" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/APP/ModeChange/Core" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/APP/Display/Config" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/APP/Display/Core" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/APP/Trigger/Config" -I"C:/Users/a9077/Desktop/learn/Project/KeyPressTriggers/Code/KeyPressTriggers/Core/APP/Trigger/Core" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Core-2f-BSW-2f-InM-2f-Core

clean-Core-2f-BSW-2f-InM-2f-Core:
	-$(RM) ./Core/BSW/InM/Core/InM.cyclo ./Core/BSW/InM/Core/InM.d ./Core/BSW/InM/Core/InM.o ./Core/BSW/InM/Core/InM.su

.PHONY: clean-Core-2f-BSW-2f-InM-2f-Core

