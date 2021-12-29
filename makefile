all:
	g++ -std=c++20 main.cpp -o main.elf
clean:
	@rm -f main.elf