#include<stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*temp;

	temp = (void *)0;
	if (min >= max)
		return (NULL);
	temp = (int *)malloc(((max - min) + 1) * sizeof(int));
	i = 0;
	while (min < max)
	{
		temp[i] = min;
		i++;
		min++;
	}
	return (temp);
}
