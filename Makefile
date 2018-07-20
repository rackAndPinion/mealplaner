all:
	gcc -Wall  -c food.c
	gcc -Wall main.c food.o -o mealplaner.exe

clean:
	rm food.o
	rm mealplaner.exe
