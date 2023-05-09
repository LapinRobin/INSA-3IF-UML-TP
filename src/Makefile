# Compiler
CXX=g++

# Compiler flags
CXXFLAGS=-Wall -Wextra -std=c++14

# Directory of source files
SRC_DIR=./src
MODELES_DIR=$(SRC_DIR)/Modeles
ACTEURS_DIR=$(MODELES_DIR)/Acteurs
APPAREILS_DIR=$(MODELES_DIR)/Appareils
UTIL_DIR=$(SRC_DIR)/Util

# Directory for object files
OBJ_DIR=./obj

# Directory for the executable
BIN_DIR=./bin

# Executable name
EXEC=main

# List of source files
SRCS= $(wildcard $(SRC_DIR)/*.cpp $(ACTEURS_DIR)/*.cpp $(APPAREILS_DIR)/*.cpp $(UTIL_DIR)/*.cpp)

# List of object files
OBJS= $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(notdir $(SRCS)))

.PHONY: all clean

all: $(BIN_DIR)/$(EXEC)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(ACTEURS_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(APPAREILS_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR)/%.o: $(UTIL_DIR)/%.cpp | $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJ_DIR):
	mkdir $(OBJ_DIR)

$(BIN_DIR)/$(EXEC): $(OBJS) | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $^ -o $@

$(BIN_DIR):
	mkdir $(BIN_DIR)

clean:
	rm -f $(OBJ_DIR)/*.o
	rm -f $(BIN_DIR)/$(EXEC)
