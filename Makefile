
bindir = ./bin
srcdir = ./src
testDir = ./test
builddir = ./build/src
testBuilddir = ./build/test
COMPILER = gcc
all: main test

main: $(srcdir)/main.c board.o board_read.o board_print_plain.o 
	$(COMPILER)  -Wall -std=c99 -o $(bindir)/chessviz $(srcdir)/main.c $(builddir)/board.o $(builddir)/board_read.o $(builddir)/board_print_plain.o 
board.o: $(srcdir)/board.c $(srcdir)/board.h
	$(COMPILER) -Wall -std=c99 -o $(builddir)/$@ -c $(srcdir)/board.c
board_print_plain.o: $(srcdir)/board_print_plain.c $(srcdir)/board_print_plain.h
	$(COMPILER) -Wall -std=c99 -o $(builddir)/$@ -c $(srcdir)/board_print_plain.c 
board_read.o: $(srcdir)/board_read.c $(srcdir)/board_read.h 
	$(COMPILER) -Wall -std=c99 -o $(builddir)/$@ -c $(srcdir)/board_read.c 
test: $(testDir)/main.c ./thirdparty/ctest.h
	$(COMPILER) -Wall -std=c99  -I thirdparty -o $(testBuilddir)/test_board.o -c $(testDir)/main.c
clean:
	rm $(builddir)/*.*
	rm $(testBuilddir)/*.*