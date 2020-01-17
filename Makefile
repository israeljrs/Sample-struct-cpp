CC=g++
SOURCE=main.cpp
EXE=sample

all:
	$(CC) $(SOURCE) -o $(EXE)

clean:
	rm -f $(EXE)
