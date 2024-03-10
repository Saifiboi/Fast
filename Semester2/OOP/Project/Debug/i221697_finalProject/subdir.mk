################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../i221697_finalProject/Call.cpp \
../i221697_finalProject/Doctor.cpp \
../i221697_finalProject/EHR.cpp \
../i221697_finalProject/IOT.cpp \
../i221697_finalProject/Patient.cpp \
../i221697_finalProject/driver.cpp 

CPP_DEPS += \
./i221697_finalProject/Call.d \
./i221697_finalProject/Doctor.d \
./i221697_finalProject/EHR.d \
./i221697_finalProject/IOT.d \
./i221697_finalProject/Patient.d \
./i221697_finalProject/driver.d 

OBJS += \
./i221697_finalProject/Call.o \
./i221697_finalProject/Doctor.o \
./i221697_finalProject/EHR.o \
./i221697_finalProject/IOT.o \
./i221697_finalProject/Patient.o \
./i221697_finalProject/driver.o 


# Each subdirectory must supply rules for building sources it contributes
i221697_finalProject/%.o: ../i221697_finalProject/%.cpp i221697_finalProject/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-i221697_finalProject

clean-i221697_finalProject:
	-$(RM) ./i221697_finalProject/Call.d ./i221697_finalProject/Call.o ./i221697_finalProject/Doctor.d ./i221697_finalProject/Doctor.o ./i221697_finalProject/EHR.d ./i221697_finalProject/EHR.o ./i221697_finalProject/IOT.d ./i221697_finalProject/IOT.o ./i221697_finalProject/Patient.d ./i221697_finalProject/Patient.o ./i221697_finalProject/driver.d ./i221697_finalProject/driver.o

.PHONY: clean-i221697_finalProject

