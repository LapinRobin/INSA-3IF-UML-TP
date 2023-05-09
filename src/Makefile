# Makefile

# Compiler settings
CXX = g++
CXXFLAGS = -std=c++14 -Wall

SRC_DIR = src
UTIL_DIR = $(SRC_DIR)/Util

UTIL_SRCS = $(wildcard $(UTIL_DIR)/*.cpp)
UTIL_OBJS = $(UTIL_SRCS:.cpp=.o)

all: main

main: $(UTIL_OBJS) $(SRC_DIR)/main.cpp
	$(CC) $(CFLAGS) $^ -o $@

$(UTIL_DIR)/%.o: $(UTIL_DIR)/%.cpp $(UTIL_DIR)/%.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f main $(UTIL_OBJS)
