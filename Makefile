program_name=day1.cpp

all:
	g++ -std=c++14 day1.cpp

run:
	./a.out

open:
	vim $(program_name)

clean:
	rm a.out
