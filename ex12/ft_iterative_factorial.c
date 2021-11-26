int	ft_iterative_factorial(int nb)
{
	int	total;
	int	multiply;

	total = 1;
	multiply = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (multiply <= nb)
	{
		total *= multiply;
		multiply++;
	}
	return (total);
}
