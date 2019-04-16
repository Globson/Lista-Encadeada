all: main.c Sources/Lista_Encadeada.c
	gcc main.c -o EXEC Sources/Lista_Encadeada.c

clear: EXEC
	rm EXEC

run: EXEC
	./EXEC
