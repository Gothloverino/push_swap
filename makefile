# Purpose: Makefile for push_swap
SRCS = operatorions.c push_swap.c

all:
	gcc $(SRCS) -o push_swap 
	# gcc -Wall -Wextra -Werror $(SRCS) -o push_swap 
t:
	./push_swap 2 1