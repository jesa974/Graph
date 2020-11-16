graph: graph.o affichage.o gereClic.o calcul.o libisentlib.a
	gcc -Wall graph.o affichage.o gereClic.o calcul.o -o graph libisentlib.a -lm -lglut -lGL -lX11
# Sous MacOSX, commenter la ligne de commande ci-dessus (en mettant un # au debut)
# et de-commenter la ligne de commande ci-apres :
#	gcc -Wall exemple.o -o exemple libisentlib.a -lm -framework OpenGL -framework GLUT

graph.o: graph.c affichage.h gereClic.h calcul.h GfxLib.h BmpLib.h ESLib.h
	gcc -Wall -c graph.c

libisentlib.a: BmpLib.o ErreurLib.o ESLib.o GfxLib.o OutilsLib.o SocketLib.o ThreadLib.o TortueLib.o VectorLib.o WavLib.o
	ar r libisentlib.a BmpLib.o ErreurLib.o ESLib.o GfxLib.o OutilsLib.o SocketLib.o ThreadLib.o TortueLib.o VectorLib.o WavLib.o
	ranlib libisentlib.a

affichage.o: affichage.c affichage.h GfxLib.h BmpLib.h ESLib.h
	gcc -Wall -c affichage.c

gereClic.o: gereClic.c gereClic.h GfxLib.h BmpLib.h ESLib.h
	gcc -Wall -c gereClic.c

calcul.o: calcul.c calcul.h GfxLib.h BmpLib.h ESLib.h
	gcc -Wall -c calcul.c

BmpLib.o: BmpLib.c BmpLib.h OutilsLib.h
	gcc -Wall -O2 -c BmpLib.c

ESLib.o: ESLib.c ESLib.h ErreurLib.h
	gcc -Wall -O2 -c ESLib.c

ErreurLib.o: ErreurLib.c ErreurLib.h
	gcc -Wall -O2 -c ErreurLib.c

GfxLib.o: GfxLib.c GfxLib.h ESLib.h
	gcc -Wall -O2 -c GfxLib.c -I/usr/include/GL
# Sous MacOSX, commenter la ligne de commande ci-dessus (en mettant un # au debut)
# et de-commenter la ligne de commande ci-apres :
#	gcc -Wall -O2 -c GfxLib.c -Wno-deprecated-declarations

OutilsLib.o: OutilsLib.c OutilsLib.h
	gcc -Wall -O2 -c OutilsLib.c

SocketLib.o: SocketLib.c SocketLib.h
	gcc -Wall -O2 -c SocketLib.c

ThreadLib.o: ThreadLib.c ThreadLib.h
	gcc -Wall -O2 -c ThreadLib.c

TortueLib.o: TortueLib.c TortueLib.h GfxLib.h
	gcc -Wall -O2 -c TortueLib.c

VectorLib.o: VectorLib.c VectorLib.h
	gcc -Wall -O2 -c VectorLib.c -msse3

WavLib.o: WavLib.c WavLib.h OutilsLib.h
	gcc -Wall -O2 -c WavLib.c -Wno-unused-result
# Sous MacOSX, commenter la ligne de commande ci-dessus (en mettant un # au debut)
# et de-commenter la ligne de commande ci-apres :
#	gcc -Wall -O2 -c WavLib.c

zip:
	tar -cvzf libisentlib.tgz *.[ch] *.bmp *.pdf makefile

clean:
	rm -f *~ *.o

deepclean: clean
	rm -f exemple exempleTortue libisentlib.a

