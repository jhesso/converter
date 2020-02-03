SRC = *.cpp

OBJ = *.o

CMP = g++

all: objects program

program:
	$(CMP) $(OBJ)

objects:
	$(CMP) -c $(SRC)

clean:
	rm -f a.out

fclean: clean
	rm -f $(OBJ)
