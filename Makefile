CXX = clang++

FILES = files/main.cpp

OUTPUT = bin/out.exe

CFLAGS = -o $(OUTPUT)

build:
	$(CXX) $(FILES) $(CFLAGS)