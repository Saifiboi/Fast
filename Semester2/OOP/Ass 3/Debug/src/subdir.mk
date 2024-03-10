################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/vesy\ hi\ .cpp 

CPP_DEPS += \
./src/vesy\ hi\ .d 

OBJS += \
./src/vesy\ hi\ .o 


# Each subdirectory must supply rules for building sources it contributes
src/vesy\ hi\ .o: ../src/vesy\ hi\ .cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/vesy hi .d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/vesy\ hi\ .d ./src/vesy\ hi\ .o

.PHONY: clean-src

