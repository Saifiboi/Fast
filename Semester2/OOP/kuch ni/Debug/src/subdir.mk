################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/kuch\ ni.cpp 

CPP_DEPS += \
./src/kuch\ ni.d 

OBJS += \
./src/kuch\ ni.o 


# Each subdirectory must supply rules for building sources it contributes
src/kuch\ ni.o: ../src/kuch\ ni.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/kuch ni.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/kuch\ ni.d ./src/kuch\ ni.o

.PHONY: clean-src

