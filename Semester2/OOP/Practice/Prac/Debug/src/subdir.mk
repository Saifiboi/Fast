################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/inheritanceTypes.cpp \
../src/k.cpp \
../src/main.cpp \
../src/pract.cpp 

CPP_DEPS += \
./src/inheritanceTypes.d \
./src/k.d \
./src/main.d \
./src/pract.d 

OBJS += \
./src/inheritanceTypes.o \
./src/k.o \
./src/main.o \
./src/pract.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/inheritanceTypes.d ./src/inheritanceTypes.o ./src/k.d ./src/k.o ./src/main.d ./src/main.o ./src/pract.d ./src/pract.o

.PHONY: clean-src

