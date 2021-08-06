derleVeCalistir:program calistir

program:kutuphane main
	g++ ./lib/kutuphane.o ./lib/main.o -o ./bin/program

kutuphane:
	g++ -I "./include" -c ./src/kutuphane.cpp -o ./lib/kutuphane.o
	
main:
	g++ -I "./include" -c ./src/main.cpp -o ./lib/main.o
	
calistir:
	./bin/program.exe