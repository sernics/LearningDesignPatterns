CC=g++
CXXFLAGS=-std=c++11 -g -Wall
PROGNAME=factory

OBJS=$(patsubst %.cc,%.o,$(wildcard *.cc))
all: ${OBJS}
	$(CC) $(CXXFLAGS) -o $(PROGNAME) ${OBJS}

clean:
	rm -rf *.o $(PROGNAME)