INC = $(wildcard *.h)
SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)
EXE = run

CXX = g++
LDFLAGS = -o $(EXE)
CPPFLAGS = -Wall

$(EXE): $(OBJ)
	$(CXX) $(LDFLAGS) $(OBJ)
$(OBJ): $(SRC)


out:
	./$(EXE)

.PHONY: clean run

clean:
	rm $(OBJ) $(EXE)
