# Define the compiler to use
CC = gcc

# Define the compilation flags
CFLAGS = -Wall -g

# Define the source files
SRC = main.c function1.c function2.c function3.c function4.c function5.c

# Define the object files (to be compiled from the source files)
OBJ = $(SRC:.c=.o)

# Define the output executable name
EXEC = myprogram

# Default target to build the program
all: $(EXEC)

# Rule to link the object files into the executable
$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

# Rule to compile each source file into an object file
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files and the executable
clean:
	rm -f $(OBJ) $(EXEC)

# Rule to run the program
run: $(EXEC)
	./$(EXEC)
