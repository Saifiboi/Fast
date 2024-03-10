################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../i22-1697\ lab\ 07/Block.cpp \
../i22-1697\ lab\ 07/Complex.cpp \
../i22-1697\ lab\ 07/Holiday.cpp \
../i22-1697\ lab\ 07/i221697_lab\ 07.cpp 

CPP_DEPS += \
./i22-1697\ lab\ 07/Block.d \
./i22-1697\ lab\ 07/Complex.d \
./i22-1697\ lab\ 07/Holiday.d \
./i22-1697\ lab\ 07/i221697_lab\ 07.d 

OBJS += \
./i22-1697\ lab\ 07/Block.o \
./i22-1697\ lab\ 07/Complex.o \
./i22-1697\ lab\ 07/Holiday.o \
./i22-1697\ lab\ 07/i221697_lab\ 07.o 


# Each subdirectory must supply rules for building sources it contributes
i22-1697\ lab\ 07/Block.o: ../i22-1697\ lab\ 07/Block.cpp i22-1697\ lab\ 07/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"i22-1697 lab 07/Block.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

i22-1697\ lab\ 07/Complex.o: ../i22-1697\ lab\ 07/Complex.cpp i22-1697\ lab\ 07/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"i22-1697 lab 07/Complex.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

i22-1697\ lab\ 07/Holiday.o: ../i22-1697\ lab\ 07/Holiday.cpp i22-1697\ lab\ 07/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"i22-1697 lab 07/Holiday.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

i22-1697\ lab\ 07/i221697_lab\ 07.o: ../i22-1697\ lab\ 07/i221697_lab\ 07.cpp i22-1697\ lab\ 07/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"i22-1697 lab 07/i221697_lab 07.d" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-i22-2d-1697-20-lab-20-07

clean-i22-2d-1697-20-lab-20-07:
	-$(RM) ./i22-1697\ lab\ 07/Block.d ./i22-1697\ lab\ 07/Block.o ./i22-1697\ lab\ 07/Complex.d ./i22-1697\ lab\ 07/Complex.o ./i22-1697\ lab\ 07/Holiday.d ./i22-1697\ lab\ 07/Holiday.o ./i22-1697\ lab\ 07/i221697_lab\ 07.d ./i22-1697\ lab\ 07/i221697_lab\ 07.o

.PHONY: clean-i22-2d-1697-20-lab-20-07

