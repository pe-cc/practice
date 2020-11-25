CXX			:= gcc
CXX_FLAGS	:= -ggdb

BIN			:= build
SRC			:= src
INCLUDE		:= src

LIBRARIES	:=
EXECUTABLE	:= islands

all: $(BIN)/$(EXECUTABLE)

run: clean all
	clear
	./$(BIN)/$(EXECUTABLE)

$(BIN)/$(EXECUTABLE): $(SRC)/*.c
	$(CXX) $(CXX_FLAGS) -I$(INCLUDE) $^ -o $@ $(LIBRARIES)

clean: 
	-rm $(BIN)/*
