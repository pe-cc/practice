CXX			:= gcc
CXX_FLAGS	:= -ggdb

BIN			:= build
SRC			:= src
INCLUDE		:= src

LIBRARIES	:=
EXECUTABLE	:= roman_kata

all: $(BIN)/$(EXECUTABLE)

run: clean all
	clear
	./$(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): $(SRC)/*.c
	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) $^ -o $@ $(LIBRARIES)

clean: 
	-rm $(BIN)/*
