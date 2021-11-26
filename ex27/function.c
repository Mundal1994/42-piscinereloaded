#include<unistd.h>

void	ft_putchar(int nb, char c)
{
	write(nb, &c, 1);
}

void	ft_putstr(int nb, char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(nb, str[index]);
		index++;
	}
}
