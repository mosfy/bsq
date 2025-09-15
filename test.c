#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

void	sizexy(int *x, int *y,char *fichier)
{
	int		fd_read;
	int		fd_write;
	char	*readon[1];
	int		char_lus;
	int		char_ecrits;

	fd_read = open(fichier, O_RDONLY);
	fd_write = open("src/cac", O_WRONLY);
	char_lus = 0;
	char_ecrits = 0;

	while ((char_lus = read(fd_read, readon, 1)) > 0)
	{
		if (&readon == "a")
			write(1,"ok",6);
		*x += 1;
		if ((char_ecrits = write(fd_write, readon, char_lus)) != char_lus)
			write(1,"erreur",6);
	}
}

int	main(void)
{
	int x = 1;
	int y = 1;

	sizexy(&x,&y,"test");
	printf("%d\n",x);
	printf("%d\n",y);

}

