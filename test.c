#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int ft_strlen(int *x, int *y,char *fichier,int fd_read,int fd_write)
{
	int		char_lus;
	int		char_ecrits;
	char	readon;
	int     i;
	int     temp;
	int		firsttry;

	firsttry = 1;
	i = 1;
	while ((char_lus = read(fd_read, &readon, 1)) > 0)
	{
		i += 1;
		*x += 1;
		if (readon == '\n')
		{
			*y += 1;
			if (!firsttry)
				if (*x != temp)
					return (-1);
			firsttry = 0;
			temp = *x;
			*x = 0;
		}
	}
	return (i);
}
void	creatMap(int *x, int *y,char *fichier)
{
	int		fd_read;
	int		fd_write;
	char	readon;
	int		char_lus;
	int		char_ecrits;
	char    **map;
	int 	i;
	int		j;

	fd_read = open(fichier, O_RDONLY);
	fd_write = open("src/caca", O_WRONLY);
	char_lus = 0;
	char_ecrits = 0;
	i = 0;
	j = 0;
	map = (char *)malloc(sizeof(char) * 
			ft_strlen(&x,&y,fichier,fd_read,fd_write));
	map[0]  = (char *)malloc(sizeof(char) * );
	while ((char_lus = read(fd_read, &readon, 1)) > 0)
	{
		i++;
		if (readon == '\n')
		{
			j++;
		}
		if ((char_ecrits = write(fd_write, &readon, char_lus)) != char_lus)
			write(1,"erreur\n",6);
	}
}

int	main(void)
{
	int	x = 1;
	int	y = 1;

	sizexy(&x,&y,"test");
	printf("%d\n",x);
	printf("%d\n",y);
}

