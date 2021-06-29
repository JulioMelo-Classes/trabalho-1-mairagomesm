all: main.cpp
				g++ main.cpp -g -Wall -fsanitize=address -o keno 
