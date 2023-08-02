################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL := cmd.exe
RM := rm -rf

USER_OBJS :=

LIBS := 
PROJ := 

O_SRCS := 
C_SRCS := 
S_SRCS := 
S_UPPER_SRCS := 
OBJ_SRCS := 
ASM_SRCS := 
PREPROCESSING_SRCS := 
OBJS := 
OBJS_AS_ARGS := 
C_DEPS := 
C_DEPS_AS_ARGS := 
EXECUTABLES := 
OUTPUT_FILE_PATH :=
OUTPUT_FILE_PATH_AS_ARGS :=
AVR_APP_PATH :=$$$AVR_APP_PATH$$$
QUOTE := "
ADDITIONAL_DEPENDENCIES:=
OUTPUT_FILE_DEP:=
LIB_DEP:=
LINKER_SCRIPT_DEP:=

# Every subdirectory with source files must be described here
SUBDIRS :=  \
../7Segment


# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS +=  \
../7Segment/seven-segment\ indicator.c \
../main.c


PREPROCESSING_SRCS += 


ASM_SRCS += 


OBJS +=  \
7Segment/seven-segment\ indicator.o \
main.o

OBJS_AS_ARGS +=  \
"7Segment/seven-segment indicator.o" \
main.o

C_DEPS +=  \
7Segment/seven-segment\ indicator.d \
main.d

C_DEPS_AS_ARGS +=  \
"7Segment/seven-segment indicator.d" \
main.d

OUTPUT_FILE_PATH +=CPP_Avr_Atm328.elf

OUTPUT_FILE_PATH_AS_ARGS +=CPP_Avr_Atm328.elf

ADDITIONAL_DEPENDENCIES:=

OUTPUT_FILE_DEP:= ./makedep.mk

LIB_DEP+= 

LINKER_SCRIPT_DEP+= 


# AVR32/GNU C Compiler
7Segment/seven-segment\ indicator.o: ../7Segment/seven-segment\ indicator.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)D:\AvrStudio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"D:\AvrStudio\7.0\Packs\atmel\ATmega_DFP\1.7.374\include"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega328p -B "D:\AvrStudio\7.0\Packs\atmel\ATmega_DFP\1.7.374\gcc\dev\atmega328p" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	

./main.o: .././main.c
	@echo Building file: $<
	@echo Invoking: AVR/GNU C Compiler : 5.4.0
	$(QUOTE)D:\AvrStudio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE)  -x c -funsigned-char -funsigned-bitfields -DDEBUG  -I"D:\AvrStudio\7.0\Packs\atmel\ATmega_DFP\1.7.374\include"  -Og -ffunction-sections -fdata-sections -fpack-struct -fshort-enums -g2 -Wall -mmcu=atmega328p -B "D:\AvrStudio\7.0\Packs\atmel\ATmega_DFP\1.7.374\gcc\dev\atmega328p" -c -std=gnu99 -MD -MP -MF "$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -MT"$(@:%.o=%.o)"   -o "$@" "$<" 
	@echo Finished building: $<
	




# AVR32/GNU Preprocessing Assembler



# AVR32/GNU Assembler




ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

# Add inputs and outputs from these tool invocations to the build variables 

# All Target
all: $(OUTPUT_FILE_PATH) $(ADDITIONAL_DEPENDENCIES)

$(OUTPUT_FILE_PATH): $(OBJS) $(USER_OBJS) $(OUTPUT_FILE_DEP) $(LIB_DEP) $(LINKER_SCRIPT_DEP)
	@echo Building target: $@
	@echo Invoking: AVR/GNU Linker : 5.4.0
	$(QUOTE)D:\AvrStudio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-gcc.exe$(QUOTE) -o$(OUTPUT_FILE_PATH_AS_ARGS) $(OBJS_AS_ARGS) $(USER_OBJS) $(LIBS) -Wl,-Map="CPP_Avr_Atm328.map" -Wl,--start-group -Wl,-lm  -Wl,--end-group -Wl,--gc-sections -mmcu=atmega328p -B "D:\AvrStudio\7.0\Packs\atmel\ATmega_DFP\1.7.374\gcc\dev\atmega328p"  
	@echo Finished building target: $@
	"D:\AvrStudio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O ihex -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures  "CPP_Avr_Atm328.elf" "CPP_Avr_Atm328.hex"
	"D:\AvrStudio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -j .eeprom  --set-section-flags=.eeprom=alloc,load --change-section-lma .eeprom=0  --no-change-warnings -O ihex "CPP_Avr_Atm328.elf" "CPP_Avr_Atm328.eep" || exit 0
	"D:\AvrStudio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objdump.exe" -h -S "CPP_Avr_Atm328.elf" > "CPP_Avr_Atm328.lss"
	"D:\AvrStudio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-objcopy.exe" -O srec -R .eeprom -R .fuse -R .lock -R .signature -R .user_signatures "CPP_Avr_Atm328.elf" "CPP_Avr_Atm328.srec"
	"D:\AvrStudio\7.0\toolchain\avr8\avr8-gnu-toolchain\bin\avr-size.exe" "CPP_Avr_Atm328.elf"
	
	





# Other Targets
clean:
	-$(RM) $(OBJS_AS_ARGS) $(EXECUTABLES)  
	-$(RM) $(C_DEPS_AS_ARGS)   
	rm -rf "CPP_Avr_Atm328.elf" "CPP_Avr_Atm328.a" "CPP_Avr_Atm328.hex" "CPP_Avr_Atm328.lss" "CPP_Avr_Atm328.eep" "CPP_Avr_Atm328.map" "CPP_Avr_Atm328.srec" "CPP_Avr_Atm328.usersignatures"
	