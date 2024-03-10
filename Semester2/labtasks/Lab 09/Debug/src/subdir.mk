################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Distance.cpp \
../src/Lab\ 09.cpp \
../src/Matrix.cpp 

CPP_DEPS += \
./src/Distance.d \
./src/Lab\ 09.d \
./src/Matrix.d 

OBJS += \
./src/Distance.o \
./src/Lab\ 09.o \
./src/Matrix.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Lab\ 09.o: ../src/Lab\ 09.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Lab 09.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Distance.d ./src/Distance.o ./src/Lab\ 09.d ./src/Lab\ 09.o ./src/Matrix.d ./src/Matrix.o

.PHONY: clean-src

