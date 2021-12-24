derlecalistir:program calistir

program:DoublyLinkedList.o Dugum.o Iterator.o test.o
	g++ ./lib/DoublyLinkedList.o ./lib/Dugum.o ./lib/Iterator.o ./lib/test.o -o ./bin/program
DoublyLinkedList.o:
	g++ -I "./include" -c ./src/DoublyLinkedList.cpp -o ./lib/DoublyLinkedList.o
Dugum.o:
	g++ -I "./include" -c ./src/Dugum.cpp -o ./lib/Dugum.o
Iterator.o:
	g++ -I "./include" -c ./src/Iterator.cpp -o ./lib/Iterator.o
test.o:
	g++ -I "./include" -c ./src/test.cpp -o ./lib/test.o
calistir:
	./bin/program.exe