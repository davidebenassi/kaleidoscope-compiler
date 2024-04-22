.PHONY: clean all

# You can add your functions rules to "all" and ".PHONY"  to compile all functions

all: floor

floor: callfloor.o floor.o
	clang++-17 -o floor callfloor.o floor.o

callfloor.o: callfloor.cpp
	clang++-17 -c callfloor.cpp

floor.o: floor.k
	../kcomp floor.k 2> floor.ll
	../tobinary floor.ll

### Insert here your rules ###

clean:
	rm -f *.o *.s *.bc *.ll
