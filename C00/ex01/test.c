#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct	s_ops
{
	char	op;
	float	x;
	float	y;
	float	hidth;
	float	weight;
	char	fill;

}	t_ops;

char	**ft_create_background(t_ops *dta)
{
	char	**matrix;
	int		row;
	int		wrt;

	matrix = malloc(sizeof(char *) * dta->x + 1);
	row = 0;
	while (row != dta->x)
	{
		wrt = 0;
		matrix[row] = malloc(sizeof(char *) * dta->y + 1);
		while (wrt != dta->y)
		{
			matrix[row][wrt] = dta->fill;
			wrt++;
		}
		matrix[row][wrt] = '\0';
		row++;
	}
	matrix[row] = NULL;
	return (matrix);
}

void	ft_create_image(char **matrix, t_ops *dta)
{
	int	row;
	int	wrt;
	int	

	row = 0;
	while (matrix[row])
	{
		wrt = 0;
		while (matrix[row][wrt]);
		{

			wrt++;
		}
		row++;
	}
}

void ft_create_matrix(FILE *fd)
{
	char	**matrix;
	char	n;
	t_ops	dta;
	int		ret;

	fscanf(fd, "%f %f %c", dta.x, dta.y, dta.fill);
	//Check if correct
	matrix = ft_create_background(&dta);
	while ((ret = fscanf(fd, "%c %c %f %f %f %f %c", &n, &dta.y, &dta.x, &dta.hidth, &dta.weight, &dta.fill)))
	{
		//Check every stuff
		ft_create_image(matrix, &dta);
	}
}

int main (int argc, char **argv)
{

	FILE *fd;

	fd = fopen(argv[1], "r");
	ft_create_matrix(fd);

	return(0);
}