all:
	g++ -std=c++20 main.cpp -o main.elf
test:
	./main.elf prog4data
format:
	clang-format -style=file -i *pp
clean:
	@rm -f main.elf