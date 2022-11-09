# Logan Walsh
# 11-9-2022
# Makefile
# Makefile Test Program for compilation of multiple files simeltaniously 
# Typing "make" compiles the program

# Variables are defined for the compiler and compiler flag
# These variables can be used with $()

CC = g++
CFLAGS = -g -Wall -Wextra

# Set to compile when "Make" is called
# Set to be the default entry

default: employee

# List the object files needed to create the executable file.
# Compile with all errors and warnings
employee:		Employee.o Supervisor.o Officer.o main.o
			$(CC) $(CFlags) -o employee Employee.o Supervisor.o Officer.o main.o

# A list of object files needed to create the executable file.
Employee.o:	Employee.cpp Employee.h
# Compile Employee.o with all errors and warnings
		$(CC) $(CFLAGS) -c Employee.cpp

Supervisor.o:	Supervisor.cpp Supervisor.h
# Compile Supervisor.o with all errors and warnings
		$(CC) $(CFLAGS) -c Supervisor.cpp

Officer.o:	Officer.cpp Officer.h
# Compile Officer.o with all errors and warnings
		$(CC) $(CFLAGS) -c Officer.cpp

main.o:		main.cpp Employee.h Supervisor.h Officer.h
# Compile main.o with all errors and warnings
		$(CC) $(CFLAGS) -c main.cpp

#This names the "executable" for the program. After compiling type ./employee
clean:
	$(RM) employee *.o *~
