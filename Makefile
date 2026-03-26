TARGET = elsys_app
LIB = libmathlib.a
CC = gcc
CFLAGS = -Wall
AR = ar
ARFLAGS = rcs

all: $(TARGET)

# Compilar o objeto da biblioteca
mathlib.o: mathlib.c mathlib.h
	$(CC) $(CFLAGS) -c mathlib.c -o mathlib.o

# Criar a biblioteca estática a partir do objeto
$(LIB): mathlib.o
	$(AR) $(ARFLAGS) $(LIB) mathlib.o

# Compilar e linkar o executável com a biblioteca estática
$(TARGET): main.c $(LIB)
	$(CC) $(CFLAGS) main.c -o $(TARGET) -L. -lmathlib

clean:
	rm -f *.o $(LIB) $(TARGET)

install:
	install -d $(DESTDIR)/usr/bin
	install -m 0755 $(TARGET) $(DESTDIR)/usr/bin
