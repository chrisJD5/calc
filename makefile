CC= gcc


build : main.c multiplication.c soustraction.c division.c addition.c operations.h
	$(CC)  -o build  main.c multiplication.c soustraction.c division.c addition.c operations.h 

run : 
	./build

deploy: 
	mkdir deploy
	$(CC)  -o deploy/build  main.c multiplication.c soustraction.c division.c addition.c operations.h
	
test : test.c multiplication.c soustraction.c division.c addition.c operations.h
	$(CC)  -o test test.c multiplication.c soustraction.c division.c addition.c operations.h 
	 ./test


