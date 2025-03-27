lab3: main.o
	g++ -o lab3.exe lab3.o

main.o: lab3.cpp
	g++ -c lab3.cpp

clean:
	rm lab3.exe *.o
