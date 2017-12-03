SOURCES = Hex.cpp Graph.cpp
OBJECTS = Hex.o Graph.o
EXEBIN  = Hex

all: $(EXEBIN)
	@echo See the README file for a guide to program operation and command line arguments.

$(EXEBIN) : $(OBJECTS)
		g++ -o $(EXEBIN) $(OBJECTS)

$(OBJECTS) : $(SOURCES)
		g++ -c -std=c++11 $(SOURCES)

clean :
		rm -f $(EXEBIN) $(OBJECTS)
