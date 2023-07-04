CC= gcc


build : main.c multiplication.c soustraction.c division.c addition.c operations.h
	$(CC)  -o build  main.c multiplication.c soustraction.c division.c addition.c operations.h 

run : 
	./build

deploy1: 
	cd deploy
	 ./build
	
test : test.c multiplication.c soustraction.c division.c addition.c operations.h
	$(CC)  -o test test.c multiplication.c soustraction.c division.c addition.c operations.h 
	 ./test


