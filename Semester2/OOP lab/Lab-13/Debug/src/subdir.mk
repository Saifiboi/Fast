################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/BankAccount.cpp \
../src/Computer.cpp \
../src/CurrentAccount.cpp \
../src/Desktop.cpp \
../src/Employee.cpp \
../src/HourlyEmployee.cpp \
../src/Lab-13.cpp \
../src/Laptop.cpp \
../src/PermanentEmployee.cpp \
../src/SavingsAccount.cpp 

CPP_DEPS += \
./src/BankAccount.d \
./src/Computer.d \
./src/CurrentAccount.d \
./src/Desktop.d \
./src/Employee.d \
./src/HourlyEmployee.d \
./src/Lab-13.d \
./src/Laptop.d \
./src/PermanentEmployee.d \
./src/SavingsAccount.d 

OBJS += \
./src/BankAccount.o \
./src/Computer.o \
./src/CurrentAccount.o \
./src/Desktop.o \
./src/Employee.o \
./src/HourlyEmployee.o \
./src/Lab-13.o \
./src/Laptop.o \
./src/PermanentEmployee.o \
./src/SavingsAccount.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/BankAccount.d ./src/BankAccount.o ./src/Computer.d ./src/Computer.o ./src/CurrentAccount.d ./src/CurrentAccount.o ./src/Desktop.d ./src/Desktop.o ./src/Employee.d ./src/Employee.o ./src/HourlyEmployee.d ./src/HourlyEmployee.o ./src/Lab-13.d ./src/Lab-13.o ./src/Laptop.d ./src/Laptop.o ./src/PermanentEmployee.d ./src/PermanentEmployee.o ./src/SavingsAccount.d ./src/SavingsAccount.o

.PHONY: clean-src

