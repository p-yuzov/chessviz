
bindir = ./bin
srcdir = ./src
builddir = ./build
COMPILER = gcc
main: $(srcdir)/main.c board.o board_read.o board_print_plain.o 
	$(COMPILER)  -Wall -o $(bindir)/chessviz $(srcdir)/main.c $(builddir)/board.o $(builddir)/board_read.o $(builddir)/board_print_plain.o 
board.o: $(srcdir)/board.c $(srcdir)/board.h
	$(COMPILER) -Wall -o $(builddir)/$@ -c $(srcdir)/board.c
board_print_plain.o: $(srcdir)/board_print_plain.c $(srcdir)/board_print_plain.h
	$(COMPILER) -Wall -o $(builddir)/$@ -c $(srcdir)/board_print_plain.c 
board_read.o: $(srcdir)/board_read.c $(srcdir)/board_read.h 
	$(COMPILER) -Wall -o $(builddir)/$@ -c $(srcdir)/board_read.c 
clean:
	rm $(builddir)/*.*
