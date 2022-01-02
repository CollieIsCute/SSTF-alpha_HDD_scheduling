all:
	@g++ -std=c++20 programs/*.cpp -o main.elf
test:
	@./main.elf testingData/prog4data
format:
	@clang-format -style=file -i programs/*pp
help:
	@echo General usage:
	@echo -e '\n\tmake clean all test\n'
	@echo Makefile Commands:
	@echo -e "\nall:"
	@echo -e '\tCompile code and generate executable named "main.elf"'
	@echo test:
	@echo -e '\tTest data and output result'
	@echo format:
	@echo -e '\tFormat program files automatically'
	@echo clean:
	@echo -e '\tClean the executable "main.elf"'
clean:
	@rm -f main.elf