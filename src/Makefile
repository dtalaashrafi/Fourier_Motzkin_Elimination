COMPILER_PRE_OPTIONS=-DGMPRATIONAL #-DLINUXINTEL64
LIBS=-lflint -lmpfr -lcddgmp -lgmp -lm
#FLAGS=-O3 -flto -w
COMPILER_OPTIONS=$(LIBS)
CC=gcc -O3 -flto -w
#######################################

SRC=FME_Support_inequality FME_Support_inequalityOperations FME_Support_linAlg FME_Support_fme FME_Support_projection FME_Support_unrolledll FME_Support_redundancyTest FME_Support_extreme FME_Support_fmeDS main
OBJ=$(SRC:%=%.o)
TARGET=minimal
TEST=main

#######################################
all: $(OBJ)
	@echo $(OBJ)
	@$(CC) $(COMPILER_PRE_OPTIONS) -Wall $(OBJ) $(COMPILER_OPTIONS) -o $(TARGET).bin
#	./$(TARGET).bin test1.txt 5 10

#######################################
%.o: %.c
	@echo "compiling [$@] from [$<]"
	@$(CC) $(COMPILER_PRE_OPTIONS) -Wall $< -c $(COMPILER_OPTIONS)

#######################################
check: $(OBJ)
	./$(TARGET).bin test1.txt 5 10

#	 $(CC) $(COMPILER_PRE_OPTIONS) -Wall $(OBJ) $(COMPILER_OPTIONS) -o $(TEST).bin
	

clean: 
	rm -rf *.o

