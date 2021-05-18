final:	main.o Control.o View.o Hollow.o Character.o Hero.o Orc.o Dragon.o Dorc.o Borc.o Porc.o Timothy.o Harold.o
	g++ -o final main.o Control.o View.o Hollow.o Character.o Hero.o Orc.o Dragon.o Dorc.o Borc.o Porc.o Timothy.o Harold.o

main.o:	main.cc Control.h
	g++ -c main.cc

Control.o:	Control.cc Control.h Hollow.h View.h
	g++ -c Control.cc

View.o:	View.cc View.h
	g++ -c View.cc

Hollow.o:	Hollow.cc Hollow.h Array2D.h Dorc.h Borc.h Porc.h Harold.h Timothy.h Dragon.h
	g++ -c Hollow.cc

Character.o:	Character.cc Character.h
	g++ -c Character.cc

Hero.o:	Hero.cc Hero.h Character.h
	g++ -c Hero.cc

Orc.o:	Orc.cc Orc.h Character.h
	g++ -c Orc.cc

Dragon.o:	Dragon.cc Dragon.h Character.h
	g++ -c Dragon.cc

Dorc.o:	Dorc.cc Dorc.h Orc.h Character.h
	g++ -c Dorc.cc

Borc.o:	Borc.cc Borc.h Orc.h Character.h
	g++ -c Borc.cc

Porc.o:	Porc.cc Porc.h Orc.h Character.h
	g++ -c Porc.cc

Timothy.o:	Timothy.cc Timothy.h Hero.h Character.h
	g++ -c Timothy.cc

Harold.o:	Harold.cc Harold.h Hero.h Character.h
	g++ -c Harold.cc
clean:
	rm -f *.o final
