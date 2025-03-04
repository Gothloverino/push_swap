void    swap(int *stack)
{
	int recipient;

	recipient = stack[0];
	stack[0] = stack[1];
	stack[1] = recipient;
}

void	rotate(int *stack, int argc)
{
	int max_i;
	int recipient;
	int i;

	max_i = argc - 2;
	recipient = stack[0];
	i = 0;
	while (i < max_i)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[i] = recipient;
}

void	reverse_rotate(int *stack, int argc)
{
	int max_i;
	int recipient;
	int i;

	max_i = argc - 2;
	recipient = stack[max_i];
	i = max_i;
	while (i > 0)
	{
		stack[i] = stack[i - 1];
		i--;
	}
	stack[i] = recipient;
}