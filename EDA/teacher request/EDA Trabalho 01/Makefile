BINFOLDER := ./bin/
INCFOLDER := ./include/
SRCFOLDER := ./src/
OBJFOLDER := ./obj/

COMPILER := gcc
FLAGS := -Wall -w -ansi -I$(INCFOLDER)

SRCFILES := $(wildcard src/*.c)

all:	 $(SRCFILES:src/%.c=obj/%.o)
		$(COMPILER) $(FLAGS) $(OBJFOLDER)*.o -o $(BINFOLDER)ED1

obj/%.o:	src/%.c
				$(COMPILER) $(FLAGS) -c $< -o $@

.PHONY: clean
clean:
	rm -rf $(OBJFOLDER)*.o
	rm -rf $(BINFOLDER)ED1

run:
	$(BINFOLDER)ED1
