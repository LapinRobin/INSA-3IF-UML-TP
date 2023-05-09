# Compiler
CXX=g++

# Compiler flags
CXXFLAGS=-Wall -Wextra -std=c++14

# Directory of source files
SRC_DIR=./src

ACTEUR_DIR=./src/Modeles/Acteurs
APPAREIL_DIR=./src/Modeles/Appareils
SERVICES_DIR=./src/Services
UTIL_DIR=./src/Util


# Directory for object files
OBJ_DIR=./obj

# Directory for the executable
BIN_DIR=./bin

# Executable name
EXEC=main

all:
	$(CXX) $(CXXFLAGS) -o $(BIN_DIR)/$(EXEC) $(SRC_DIR)/*.cpp $(ACTEUR_DIR)/*.cpp $(APPAREIL_DIR)/*.cpp $(SERVICES_DIR)/*.cpp $(UTIL_DIR)/*.cpp



clean:
	rm -f $(OBJ_DIR)/*.o
	rm -f $(BIN_DIR)/$(EXEC)

