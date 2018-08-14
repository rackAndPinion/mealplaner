all:
	gcc -Wall  -c food.c
	gcc -Wall  -c list.c
	gcc -Wall main.c food.o list.o -o mealplaner.exe

clean:
	rm food.o
	rm list.o
	rm mealplaner.exe
