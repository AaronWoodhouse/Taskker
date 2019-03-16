all: task

task: main.cpp tasks.cpp tasks.h
	g++ -c main.cpp
	g++ -c tasks.cpp
	g++ main.o tasks.o -o tasks
	./tasks
