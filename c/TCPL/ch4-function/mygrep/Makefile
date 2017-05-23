CC=g++
CCFLAGS=-g -Wall -Wextra -Wc++11-compat-deprecated-writable-strings
LDFLAGS=
SOURCES=$(wildcard *.cpp)
OBJECTS=$(SOURCES:.cpp=.o)
TARGET=a.out

all: $(TARGET)
	./$(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) -o $@ $^ $(LDFLAGS)

%.o: %.cpp %.h
	$(CC) $(CCFLAGS) -c $<

%.o: %.cpp
	$(CC) $(CCFLAGS) -c $<

clean:
	rm -f *.o $(TARGET)
