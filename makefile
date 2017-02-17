Examen1:	Main.o Stark.o Lannister.o Targaryen.o FamiliasNobles.o Dothraki.o GuardiaReal.o
		g++ Main.o Stark.o Lannister.o Targaryen.o FamiliasNobles.o Dothraki.o GuardiaReal.o -o Examen1

Main.o:		Stark.h Lannister.h Targaryen.h FamiliasNobles.h  Dothraki.h GuardiaReal.h Main.cpp
		g++ -c Main.cpp

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

clean:		rm ".o Examen1
