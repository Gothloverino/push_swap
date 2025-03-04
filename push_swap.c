#include <stdio.h>
#include <stdlib.h>

void    swap(int *stack);
void	rotate(int *stack, int argc);
void	reverse_rotate(int *stack, int argc);

void init_stack_a(int argc, char **argv, int *stack_a)
{
	int i;

	i = 0;
	while(i < argc - 1)
	{
		stack_a[i] = atoi(argv[i + 1]);
		i++;
	}
	stack_a[i] = 0;
}

void print_stack(int argc, int *stack_a)
{
	int i;

	i = 0;
	while (i < argc - 1)
	{
		printf("%d\n", stack_a[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	int stack_a[100];
	//int stack_b[100];

	init_stack_a(argc, argv, stack_a);
	print_stack(argc, stack_a);
	reverse_rotate(stack_a, argc);
	print_stack(argc, stack_a);
}
