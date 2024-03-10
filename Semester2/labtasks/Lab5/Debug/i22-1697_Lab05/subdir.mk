################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../i22-1697_Lab05/Lab5.cpp 

CPP_DEPS += \
./i22-1697_Lab05/Lab5.d 

OBJS += \
./i22-1697_Lab05/Lab5.o 


# Each subdirectory must supply rules for building sources it contributes
i22-1697_Lab05/%.o: ../i22-1697_Lab05/%.cpp i22-1697_Lab05/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-i22-2d-1697_Lab05

clean-i22-2d-1697_Lab05:
	-$(RM) ./i22-1697_Lab05/Lab5.d ./i22-1697_Lab05/Lab5.o

.PHONY: clean-i22-2d-1697_Lab05

