################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Customers.cpp \
../src/Flight.cpp \
../src/Reservation.cpp \
../src/Sessional.cpp 

CPP_DEPS += \
./src/Customers.d \
./src/Flight.d \
./src/Reservation.d \
./src/Sessional.d 

OBJS += \
./src/Customers.o \
./src/Flight.o \
./src/Reservation.o \
./src/Sessional.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Customers.d ./src/Customers.o ./src/Flight.d ./src/Flight.o ./src/Reservation.d ./src/Reservation.o ./src/Sessional.d ./src/Sessional.o

.PHONY: clean-src

