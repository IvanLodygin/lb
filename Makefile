all : menu
menu.o : menu.c
	gcc -std=gnu99 -c menu.c
index_first_zero.o : index_first_zero.с
	gcc -std=gnu99 -c index_first_zero.с
index_last_zero.o : index_last_zero.c
	gcc -std=gnu99 -c index_last_zero.c
sum_between.o : sum_between.c
	gcc -std=gnu99 -c sum_between.c
sum_before_and_after.o : sum_before_and_after.c
	gcc -std=gnu99 -c sum_before_and_after.c
menu : menu.o index_first_zero.o index_last_zero.o sum_between.o sum_before_and_after.o
	gcc -std=gnu99 menu.o index_first_zero.o index_last_zero.o sum_between.o sum_before_and_after.o -o menu
clean :
	rm menu *.o