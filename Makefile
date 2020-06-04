SOURCES = main.c
bindir = ./bin
srcdir = ./src
bulddir = ./build
COMPILER = gcc
chessviz: $(srcdir)/$(SOURCES) $(srcdir)/board.o $(srcdir)/board_read.o $(srcdir)/board_print_plain.o 
	$(COMPILER)  -Wall -o $(bindir)/$@ $(srcdir)/$(SOURCES) $(srcdir)/board.o $(srcdir)/board_read.o $(srcdir)/board_print_plain.o 
board.o: $(srcdir)/board.c $(srcdir)/board.h
	$(COMPILER) -Wall -o $(builddir)/$@ -c $(srcdir)/board.c $(srcdir)/board.h
board_print_plain.o: $(srcdir)/board_print_plain.c $(srcdir)/board_print_plain.h
	$(COMPILER) -Wall -o $(builddir)/$@-c $(srcdir)/board_print_plain.c $(srcdir)/board_print_plain.h
board_read.o: $(srcdir)/board_read.c $(srcdir)/board_read.h 
	$(COMPILER) -Wall -o $(builddir)/$@ -c $(srcdir)/board_read.c $(srcdir)/board_read.h
clean:
	rm bin/.
