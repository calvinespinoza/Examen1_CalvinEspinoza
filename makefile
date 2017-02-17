Examen1:	Main.o Stark.o Lannister.o Targaryen.o FamiliasNobles.o Dothraki.o GuardiaReal.o
		g++ Stark.o Lannister.o Targaryen.o FamiliasNobles.o Dothraki.o GuardiaReal.o -o Examen1

Main.o:		Stark.cpp Stark.h Lannister.cpp Lannister.h Targaryen.cpp Targaryen.h FamiliasNobles.cpp FamiliasNobles.h Dothraki.cpp Dothraki.h GuardiaReal.cpp GuardiaReal.h
		g++ -c Stark.cpp Lannister.cpp Targaryen.cpp FamiliasNobles.cpp Dothraki.cpp GuardiaReal.cpp

Stark.o:	Stark.cpp Stark.h FamiliasNobles.h
		g++ -c Stark.cpp

FamiliasNobles.o:	FamiliasNobles.cpp FamiliasNobles.h
			g++ -c FamiliasNobles.cpp

Lannister.o:	Lannister.cpp Lannister.h GuardiaReal.h
		g++ -c Lannister.cpp

GuardiaReal.o:		GuardiaReal.cpp GuardiaReal.h
			g++ -c GuardiaReal.cpp


Targaryen.o:	Targaryen.cpp Targaryen.h Dothraki.h
		g++ -c Targaryen.cpp

Dothraki.o:		Dothraki.cpp Dothraki.h
			g++ -c Dothraki.cpp

clean:		rm ".o Main




