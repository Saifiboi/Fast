################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Block.cpp \
../src/Complex.cpp \
../src/Holiday.cpp \
../src/main.cpp 

CPP_DEPS += \
./src/Block.d \
./src/Complex.d \
./src/Holiday.d \
./src/main.d 

OBJS += \
./src/Block.o \
./src/Complex.o \
./src/Holiday.o \
./src/main.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Block.d ./src/Block.o ./src/Complex.d ./src/Complex.o ./src/Holiday.d ./src/Holiday.o ./src/main.d ./src/main.o

.PHONY: clean-src

