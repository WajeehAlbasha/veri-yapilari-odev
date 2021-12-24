derlecalistir:program calistir

program:kova.o top.o kovaKontrol.o test.o
	g++ ./lib/kova.o ./lib/top.o ./lib/kovaKontrol.o ./lib/test.o -o ./bin/program
test.o:
	g++ -I "./include" -c ./src/test.cpp -o ./lib/test.o
kova.o:
	g++ -I "./include" -c ./src/kova.cpp -o ./lib/kova.o
top.o:
	g++ -I "./include" -c ./src/top.cpp -o ./lib/top.o
kovaKontrol.o:
	g++ -I "./include" -c ./src/kovaKontrol.cpp -o ./lib/kovaKontrol.o 
calistir:
	./bin/program.exe