program_name=day4.cpp

all:
	g++ -std=c++14 $(program_name)

run:
	./a.out

open:
	vim $(program_name)

clean:
	rm a.out
