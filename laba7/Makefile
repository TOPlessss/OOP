CC=g++
CFLAGS=-c -Wall
LDFLAGS=
SOURCES=realization.cpp menu.cpp graph.cpp vertex.cpp arc.cpp main.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=lab7

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
