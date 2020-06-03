SOURCES = main.c
prefix = /home/pavel/chessviz
bindir = $(prefix)/bin
srcdir = $(prefix)/src
sysconfdir = $(prefix)/etc
sharedstatedir = $(prefix)/var
CFLAGS = -DCONFDIR='"$(sysconfdir)"' -DLOCALSTATEDIR='"$(sharedstatedir)"'
chessviz: $(srcdir)/$(SOURCES)
	gcc -o $@ ./src/main.c 
	cp chessviz ./bin/chessviz
clean:
	rm chessviz
install:
	install chessviz $(DESTDIR)$(bindir)/chessviz
uninstall:
	rm $(DESTDIR)$(bindir)/chessviz
