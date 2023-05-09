# Makefile

# Compiler settings
CXX = g++
CXXFLAGS = -std=c++14 -Wall

# Directories
SRCDIR = src
OBJDIR = obj

# Files
SRCS = $(wildcard $(SRCDIR)/**/*.cpp $(SRCDIR)/*.cpp)
OBJS = $(patsubst $(SRCDIR)/%.cpp, $(OBJDIR)/%.o, $(SRCS))
TARGET = program

# Targets
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS) $(TARGET)
