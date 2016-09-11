BINFOLDER := ./bin/
SRCFOLDER := ./src/
OBJFOLDER := ./obj/

COMPILER := gcc

FLAGS := -g -Wall -pedantic -ansi -std=c89

SRCFILE :=  $(wildcard src/*.c)

all: $(SRCFILE:src/%.c=obj/%.o)
	$(COMPILER) $(FLAGS) $(OBJFOLDER)*.o -o $(BINFOLDER)EDA01

obj/%.o: src/%.c
	$(COMPILER) $(FLAGS) -c $< -o $@

run:
	$(BINFOLDER)EDA01

.PHONY: clean
clean:
	rm -rf $(OBJFOLDER)*.o
	rm -rf ./bin/EDA01
