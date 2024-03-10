################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Course.cpp \
../src/Instructor.cpp \
../src/Lab\ 11.cpp \
../src/Line.cpp \
../src/Point.cpp \
../src/TextBook.cpp 

CPP_DEPS += \
./src/Course.d \
./src/Instructor.d \
./src/Lab\ 11.d \
./src/Line.d \
./src/Point.d \
./src/TextBook.d 

OBJS += \
./src/Course.o \
./src/Instructor.o \
./src/Lab\ 11.o \
./src/Line.o \
./src/Point.o \
./src/TextBook.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/Lab\ 11.o: ../src/Lab\ 11.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/Lab 11.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Course.d ./src/Course.o ./src/Instructor.d ./src/Instructor.o ./src/Lab\ 11.d ./src/Lab\ 11.o ./src/Line.d ./src/Line.o ./src/Point.d ./src/Point.o ./src/TextBook.d ./src/TextBook.o

.PHONY: clean-src

