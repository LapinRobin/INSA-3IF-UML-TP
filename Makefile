# Define directories
SRC_DIR := src
ACTEUR_DIR := $(SRC_DIR)/Modeles/Acteurs
APPAREIL_DIR := $(SRC_DIR)/Modeles/Appareils
SERVICES_DIR := $(SRC_DIR)/Services
UTIL_DIR := $(SRC_DIR)/Util
VUES_DIR := $(SRC_DIR)/Vues
TESTS_DIR := $(SRC_DIR)/Tests
OBJ_DIR := obj
BIN_DIR := bin

# Define executable name
EXEC := main

# Define the source and object files
SRCS := $(wildcard $(SRC_DIR)/*.cpp $(ACTEUR_DIR)/*.cpp $(APPAREIL_DIR)/*.cpp $(SERVICES_DIR)/*.cpp $(UTIL_DIR)/*.cpp $(VUES_DIR)/*.cpp $(TESTS_DIR)/*.cpp)
OBJS := $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(SRCS))

# Define compiler and flags
CXX := g++
CXXFLAGS := -Wall -Wextra -std=c++17

all : cleanMain $(BIN_DIR)/$(EXEC)

test: dtest all

dtest :
	$(eval DTEST=-DTEST) 

# Rule to link the final executable
$(BIN_DIR)/$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJ_DIR)/$(SRC_DIR)/main.o : $(SRC_DIR)/main.cpp
	$(CXX) $(CXXFLAGS) $(DTEST) -c -o $@ $<

# Rule to compile source files into object files
$(OBJ_DIR)/%.o: %.cpp
	mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# Clean rule
clean:
	rm -rf $(OBJ_DIR)/* $(BIN_DIR)/$(EXEC)

cleanMain:
	rm -rf $(OBJ_DIR)/$(SRC_DIR)/main.o $(BIN_DIR)/$(EXEC)
