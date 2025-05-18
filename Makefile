CXX = g++

CXXFLAGS = -Wall -Wextra -pedantic -std=c++17 -O2

SRC = x.cpp

TARGET = x

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

cleanall:
	find . -type f ! \( -name "*.cpp" -o -name "Makefile" \) -delete
