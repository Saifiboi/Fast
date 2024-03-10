################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../i22-1697lab04/i22-1697_lab04.cpp 

CPP_DEPS += \
./i22-1697lab04/i22-1697_lab04.d 

OBJS += \
./i22-1697lab04/i22-1697_lab04.o 


# Each subdirectory must supply rules for building sources it contributes
i22-1697lab04/%.o: ../i22-1697lab04/%.cpp i22-1697lab04/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-i22-2d-1697lab04

clean-i22-2d-1697lab04:
	-$(RM) ./i22-1697lab04/i22-1697_lab04.d ./i22-1697lab04/i22-1697_lab04.o

.PHONY: clean-i22-2d-1697lab04

