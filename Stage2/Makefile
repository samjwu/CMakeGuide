# Variables: set the compiler and compiler flags to use
CXX = g++
CXXFLAGS = -Iinclude

# Target: define the name of the output executable
TARGET = build/stage2

# Variable: list the source files to compile
SRCS = src/main.cpp src/math_functions/mysqrt.cpp

# Variable: define the object files
# creates a corresponding .o object file each .cpp source file
# use $() syntax for pattern substitution to use existing source file variable
# uses the % wildcard in a pattern rule to match all .o and .cpp files
OBJS = $(SRCS:src/%.cpp=build/%.o)

# Rule: default actions to run when executing make without any arguments
all: $(TARGET)

# Rule: linking object files to create the executable
$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $(TARGET)

# Rule: compile source code into object files
# uses the % wildcard in a pattern rule to match all .o and .cpp files
# uses the $< and $@ automatic variables to refer to the dependent and target of the rule
# $< is the dependency of the rule (the .cpp source file)
# $@ is the target of the rule (the .o object file)
build/%.o: src/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule: explicitly compile source code into object files
# this rule is equivalent to the compile rule above
# src/main.o: src/main.cpp
# 	$(CXX) $(CXXFLAGS) -c src/main.cpp -o src/main.o

# src/math_functions/mysqrt.o: src/math_functions/mysqrt.cpp
# 	$(CXX) $(CXXFLAGS) -c src/math_functions/mysqrt.cpp -o src/math_functions/mysqrt.o

# Rule: clean up by removing the object files and executable
clean:
	rm -rf build

# Target: declare phony targets
# indicates that all and clean are targets and not files
# to prevent name conflicts if files with these names exist
.PHONY: all clean
