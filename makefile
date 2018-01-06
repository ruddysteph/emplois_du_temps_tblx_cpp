SHELL = /bin/sh
CC = g++
RM = rm -f

CPPFLAGS = -I. -std=c++14
CFLAGS = -Wall -O3
LDFLAGS = 

PROGNAME = emplois
PACKAGE=$(PROGNAME)
VERSION = 1.0
HEADERS = 
SOURCES = emplois.cpp
OBJ = $(SOURCES:.cpp=.o)


all: $(PROGNAME)

$(PROGNAME): $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS) -o $(PROGNAME)

%.o: %.c
	$(CC) -g $(CPPFLAGS) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) -r $(PROGNAME) $(OBJ)