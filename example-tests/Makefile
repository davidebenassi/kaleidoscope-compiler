.PHONY: clean cleanall all

all: floor rand fibonacci sqrt sqrt2 sqrt3 eqn2

floor: callfloor.o floor.o
	clang++-17 -o floor callfloor.o floor.o

callfloor.o: callfloor.cpp
	clang++-17 -c callfloor.cpp

floor.o: floor.k
	../kcomp floor.k 2> floor.ll
	../tobinary floor.ll
	
rand: callrand.o floor.o rand.o
	clang++-17 -o rand callrand.o floor.o rand.o

callrand.o: callrand.cpp
	clang++-17 -c callrand.cpp

rand.o:	rand.k
	../kcomp rand.k 2> rand.ll
	../tobinary rand.ll

fibonacci: fibonacci.o callfibo.o
	clang++-17 -o fibonacci callfibo.o fibonacci.o

callfibo.o:	callfibo.cpp
	clang++-17 -c callfibo.cpp
	
fibonacci.o:	fibonacci.k
	../kcomp fibonacci.k 2> fibonacci.ll
	../tobinary fibonacci.ll
	
sqrt: callsqrt.o sqrt.o
	clang++-17 -o sqrt callsqrt.o sqrt.o

callsqrt.o: callsqrt.cpp
	clang++-17 -c callsqrt.cpp

sqrt.o:	sqrt.k
	../kcomp sqrt.k 2> sqrt.ll
	../tobinary sqrt.ll
	
eqn2: calleqn2.o sqrt.o eqn2.o
	clang++-17 -o eqn2 calleqn2.o sqrt.o eqn2.o

calleqn2.o: calleqn2.cpp
	clang++-17 -c calleqn2.cpp

eqn2.o:	eqn2.k
	../kcomp eqn2.k 2> eqn2.ll
	../tobinary eqn2.ll
	
sqrt2: callsqrt.o sqrt2.o
	clang++-17 -o sqrt2 callsqrt.o sqrt2.o

sqrt2.o:	sqrt2.k
	../kcomp sqrt2.k 2> sqrt2.ll
	../tobinary sqrt2.ll
	
sqrt3: callsqrt.o sqrt3.o
	clang++-17 -o sqrt3 callsqrt.o sqrt3.o

sqrt3.o:	sqrt3.k
	../kcomp sqrt3.k 2> sqrt3.ll
	../tobinary sqrt3.ll

clean:
	rm -f *.o *.s *.bc *.ll

cleanall: 	
	rm -f floor rand fibonacci sqrt eqn2 sqrt2 sqrt3 *~ *.o *.s *.bc *.ll
