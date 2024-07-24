
CXX:=g++
CXXFLAGS:=-std=c++20
SRC:=src/
SRCS:=$(wildcard $(SRC)*.cpp)
BIN:=bin/
OBJ:=$(BIN)obj/
OBJS:=$(wildcard $(OBJ)*.o)
FILE:=pixadventure

.PHONY: all
all: $(FILE)
	
$(FILE): platform.o core.o main.o
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(BIN)$@ -lSDL2

main.o:
	$(CXX) $(CXXFLAGS) -c main.cpp -o $(OBJ)$@ -lSDL2

core.o:
	$(CXX) $(CXXFLAGS) -c src/core.cpp -o $(OBJ)$@ -lSDL2

platform.o:
	$(CXX) $(CXXFLAGS) -c src/platform.cpp -o $(OBJ)$@ -lSDL2

.PHONY: clean
clean:
	@rm -rf $(BIN)$(FILE) $(OBJS)