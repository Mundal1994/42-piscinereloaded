#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 4096

void	ft_putchar(int nb, char c);

void	ft_putstr(int nb, char *str);

int	ft_open_read_close(char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr(2, "No such file.\n");
		return (1);
	}
	ret = read(fd, buf, BUF_SIZE);
	while (ret)
	{
		buf[ret] = '\0';
		ft_putstr(1, buf);
		ret = read(fd, buf, BUF_SIZE);
	}
	if (close(fd) == -1)
	{
		ft_putstr(2, "close() error\n");
		return (1);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_open_read_close(argv);
	else if (argc > 2)
		ft_putstr(2, "Too many arguments.\n");
	else
		ft_putstr(2, "File name missing.\n");
	return (0);
}
