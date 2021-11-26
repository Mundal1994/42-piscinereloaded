#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}

void	ft_memcpy(char *temp, char *src, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		temp[i] = src[i];
		i++;
	}
	temp[i] = '\0';
}

char	*ft_strdup(char *src)
{
	char	*temp;
	int		length;

	length = ft_strlen(src) + 1;
	temp = (char *)malloc(length * sizeof(char));
	if (temp == NULL)
		return (NULL);
	ft_memcpy(temp, src, length);
	return (temp);
}
