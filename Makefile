CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++98

TARGETS = ex00/program_ex00 ex01/phonebook

SRCS_EX00 = ex00/main.cpp
OBJS_EX00 = ex00/main.o 

SRCS_EX01 = ex01/phonebook.cpp ex01/contact.cpp
OBJS_EX01 = ex01/phonebook.o ex01/contact.o

all: $(TARGETS)
ex00/program_ex00: $(OBJS_EX00)
    $(CXX) $(CXXFLAGS) -o $@ $(OBJS_EX00)

ex01/phonebook: $(OBJS_EX01)
    $(CXX) $(CXXFLAGS) -o $@ $(OBJS_EX01)

ex00/%.o: ex00/%.cpp
    $(CXX) $(CXXFLAGS) -c $< -o $@
# Compile source files into object files for ex01
ex01/%.o: ex01/%.cpp
    $(CXX) $(CXXFLAGS) -c $< -o $@

clean:
    rm -f $(OBJS_EX00) $(OBJS_EX01) $(TARGETS)

run_ex01: ex01/phonebook
    ./ex01/phonebook

run_ex00: ex00/program_ex00
    ./ex00/program_ex00