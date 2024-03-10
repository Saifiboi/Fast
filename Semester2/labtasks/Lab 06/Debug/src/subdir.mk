################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Student.cpp \
../src/park.cpp \
../src/point.cpp \
../src/rectangle.cpp 

CPP_DEPS += \
./src/Student.d \
./src/park.d \
./src/point.d \
./src/rectangle.d 

OBJS += \
./src/Student.o \
./src/park.o \
./src/point.o \
./src/rectangle.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Student.d ./src/Student.o ./src/park.d ./src/park.o ./src/point.d ./src/point.o ./src/rectangle.d ./src/rectangle.o

.PHONY: clean-src

