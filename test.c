#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int	main(void)
{
	int		fd_read;
	int 	fd_write;
	char	*lecture[4];
	int		char_lus;
	int		char_ecrits;

	fd_read = open("test", O_RDONLY);
	fd_write = open("src/caca", O_WRONLY);
	char_lus = 0;
	char_ecrits = 0;

	while ((char_lus = read(fd_read, lecture, 4)) > 0)
		if ((char_ecrits = write(fd_write, lecture, char_lus)) != char_lus)
			write(1,"erreur",6);
}

void	sizexy(int *x, int *y)
{
	int		fd_read;
	int		fd_write;
	char	*lecture[4];
	int		char_lus;
	int		char_ecrits;

	fd_read = open("test", O_RDONLY);
	fd_write = open("src/caca", O_WRONLY);
	char_lus = 0;
	char_ecrits = 0;

	while ((char_lus = read(fd_read, lecture, 4)) > 0)
		if ((char_ecrits = write(fd_write, lecture, char_lus)) != char_lus)
			write(1,"erreur",6);
}
