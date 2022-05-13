#include "libft.h"

int main (void)
{
	ft_putendl_fd("my function", 1);
	char *s2 = "@Welcome@@Coder@from@42@Rio@@@de@Janeiro";
	char **ret2;

	ret2 = ft_split(s2, '@');
	for (int row = 0; ret2[row]; row++)
		ft_putendl_fd(ret2[row], 1);

	ft_putendl_fd("", 1);
	ft_putendl_fd("warley function", 1);
	char *s = "@Welcome@@Coder@from@42@Rio@@@de@Janeiro";
	char **ret;

	ret = ft_split2(s, '@');
	for (int row = 0; ret[row]; row++)
		ft_putendl_fd(ret[row], 1);
	return (0);
}
