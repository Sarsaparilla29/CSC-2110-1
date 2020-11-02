output: main.o box.o rectangle.o
	g++ main.o box.o rectangle.o -o output
main.o: main.cpp
	g++ -c main.cpp
box.o: box.cpp
	g++ -c box.cpp
rectangle.o: rectangle.cpp
	g++ -c rectangle.cpp
clean:
	rm *.o output

