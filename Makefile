program_name=day0.cpp

all:
	g++ -std=c++14 day0.cpp

run:
	./a.out

open:
	vim $(program_name)

clean:
	rm a.out
