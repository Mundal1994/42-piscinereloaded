int	ft_sqrt(int nb)
{
	int	x;

	x = 1;
	if (nb > 2147395600)
		return (0);
	while (x * x < nb)
		x++;
	if (x * x != nb)
		return (0);
	return (x);
}
