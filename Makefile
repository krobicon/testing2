# Makefile for a C++ program linked with X11 and Xtst libraries

# Compiler
CXX = g++

# Source files
SRCS = Main.cpp

# Libraries to link
LIBS = -lX11 -lXtst

# Default target
all: rebuild; 

# Clean up object files and the executable
clean:
	rm -f ksenz

# Compilation and linking
a.out: $(SRCS)
	$(CXX) $^ -o $@ $(LIBS)


# clean & build
rebuild:
	@$(MAKE) clean
	@$(MAKE) ksenz
	echo "SUCCESS!"

