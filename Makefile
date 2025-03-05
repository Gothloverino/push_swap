# Purpose: Makefile for push_swap
SRCS = operations.c push_swap.c
CFLAGS = -Wall -Wextra -Werror -g

all:
	gcc $(SRCS) -o push_swap -g
	# gcc $(CFLAGS) $(SRCS) -o push_swap 
t:
	./push_swap 1 2 3