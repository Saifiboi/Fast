################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Call.cpp \
../src/Doctor.cpp \
../src/EHR.cpp \
../src/IOT.cpp \
../src/Patient.cpp \
../src/driver.cpp 

CPP_DEPS += \
./src/Call.d \
./src/Doctor.d \
./src/EHR.d \
./src/IOT.d \
./src/Patient.d \
./src/driver.d 

OBJS += \
./src/Call.o \
./src/Doctor.o \
./src/EHR.o \
./src/IOT.o \
./src/Patient.o \
./src/driver.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Call.d ./src/Call.o ./src/Doctor.d ./src/Doctor.o ./src/EHR.d ./src/EHR.o ./src/IOT.d ./src/IOT.o ./src/Patient.d ./src/Patient.o ./src/driver.d ./src/driver.o

.PHONY: clean-src

