################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Assignment.cpp \
../src/quiz\ Q2.cpp \
../src/stl.cpp 

CPP_DEPS += \
./src/Assignment.d \
./src/quiz\ Q2.d \
./src/stl.d 

OBJS += \
./src/Assignment.o \
./src/quiz\ Q2.o \
./src/stl.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/quiz\ Q2.o: ../src/quiz\ Q2.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/quiz Q2.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Assignment.d ./src/Assignment.o ./src/quiz\ Q2.d ./src/quiz\ Q2.o ./src/stl.d ./src/stl.o

.PHONY: clean-src

