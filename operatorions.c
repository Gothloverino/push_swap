void    swap(int *stack)
{
	int recipient;

	recipient = stack[0];
	stack[0] = stack[1];
	stack[1] = recipient;
}
void shift(int *stack, int size, int direction)
{
	int i;
	int recipient;

	if (direction > 1)
	{
		size++;
		realloc(stack, size);
		recipient = stack[1];
		i = size;
		while (i > 0)
		{
			stack[i] = stack[i - 1];
			i--;
		}
		stack[i] = recipient;
	}
	else if (direction < 1)
	{
		size--;
		realloc(stack, size);
		recipient = stack[0];
		i = 0;
		while (i < size)
		{
			stack[i] = stack[i + 1];
			i++;
		}
		stack[i] = recipient;
	}
}

void	push_a(int *stack_a, int *stack_b,int size_a,int size_b)
{
	if (size_b != 0)
	{	
		int recipient;
		int recipient_stack;
		int i;

		shift(stack_a, size_a, 1);
		stack_a[0] = stack_b[0];
		shift(stack_a, size_b, -1);
	}
}

void	push_b(int *stack_a, int *stack_b,int size_a,int size_b)
{
	if (size_b != 0)
	{	
		int recipient;
		int recipient_stack;
		int i;

		shift(stack_b, size_b, 1);
		stack_b[0] = stack_a[0];
		shift(stack_a, size_a, -1);
	}
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