CC=gcc
all: parallel_min_max zombie_process process_memory

parallel_min_max : utils.o find_min_max.o utils.h find_min_max.h
	$(CC) -o parallel_min_max.o parallel_min_max.c utils.c find_min_max.c
zombie_process : zombie_process.c
	$(CC) -o zombie_process.o zombie_process.c
process_memory : process_memory.c
	$(CC) -o process_memory.o process_memory.c
parallel_sum : utils.o utils.h
	$(CC) -o parallel_sum.o -g -pthread parallel_sum.c utils.c

clean:
	rm parallel_min_max.o utils.o find_min_max.o zombie_process.o process_memory.o parallel_sum.o