MAINTAINERCLEANFILES =	$(srcdir)/Makefile.in

AM_CPPFLAGS = 		-I$(srcdir)/pkcs11

dist_man_MANS =		p11speed.1

bin_PROGRAMS =		p11speed

AUTOMAKE_OPTIONS =	subdir-objects

p11speed_SOURCES =	p11speed.cpp \
			getpw.cpp \
			library.cpp
p11speed_LDADD =	-lpthread

EXTRA_DIST =		$(srcdir)/pkcs11/*.h \
			$(srcdir)/*.h \
			$(srcdir)/*.cpp
