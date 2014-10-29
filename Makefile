CC=g++
OBJ=obj
BIN=bin
SRC=src

OBJs+=$(OBJ)/testmain.o

all: folder $(OBJs)
	g++ $(OBJs) -o $(BIN)/bin.bin

folder:
	mkdir  -p $(OBJ)
	mkdir  -p $(BIN)

$(OBJ)/%.o:$(SRC)/%.cc 
	g++ -c -o $@ $<

clean:
	rm -rf $(OBJ)
	rm -rf $(BIN)
