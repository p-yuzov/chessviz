SOURCES = main.c
bindir = ./bin
srcdir = ./src
chessviz: $(srcdir)/$(SOURCES)
	gcc -o $@ $(srcdir)/$(SOURCES)
	cp chessviz $(bindir)/chessviz
	rm chessviz
clean:
	rm chessviz
