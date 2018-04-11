CC=g++ -std=c++14
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=main.cpp circle.cpp triangle.cpp quadrangle.cpp func.cpp polygon.cpp figure.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=laba6

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

%.o: %.cpp circle.h figure.h func.h polygon.h quadrangle.h triangle.h
	$(CC) $(CFLAGS) $< -o $@

clean:
	del *.o
