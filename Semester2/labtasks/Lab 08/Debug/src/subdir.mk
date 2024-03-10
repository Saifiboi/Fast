################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Complex.cpp \
../src/FaceBook.cpp \
../src/IntegerList.cpp \
../src/i22-1697_lab08.cpp 

CPP_DEPS += \
./src/Complex.d \
./src/FaceBook.d \
./src/IntegerList.d \
./src/i22-1697_lab08.d 

OBJS += \
./src/Complex.o \
./src/FaceBook.o \
./src/IntegerList.o \
./src/i22-1697_lab08.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Complex.d ./src/Complex.o ./src/FaceBook.d ./src/FaceBook.o ./src/IntegerList.d ./src/IntegerList.o ./src/i22-1697_lab08.d ./src/i22-1697_lab08.o

.PHONY: clean-src

