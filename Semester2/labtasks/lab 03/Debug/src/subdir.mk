################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/lab\ 03.cpp \
../src/test.cpp 

CPP_DEPS += \
./src/lab\ 03.d \
./src/test.d 

OBJS += \
./src/lab\ 03.o \
./src/test.o 


# Each subdirectory must supply rules for building sources it contributes
src/lab\ 03.o: ../src/lab\ 03.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/lab 03.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/lab\ 03.d ./src/lab\ 03.o ./src/test.d ./src/test.o

.PHONY: clean-src

