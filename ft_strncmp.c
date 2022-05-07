/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
<<<<<<< HEAD
=======
<<<<<<< HEAD:ft_bzero.c
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsergio <vsergio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 10:32:36 by vsergio           #+#    #+#             */
/*   Updated: 2022/05/06 22:09:34 by gneves           ###   ########.fr       */
=======
>>>>>>> aece92e4d1d8a626af0def5b14a04117234375a7
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vsergio <vsergio@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 17:29:07 by vsergio           #+#    #+#             */
/*   Updated: 2022/05/06 22:30:56 by vsergio          ###   ########.fr       */
<<<<<<< HEAD
=======
>>>>>>> aece92e4d1d8a626af0def5b14a04117234375a7:ft_strncmp.c
>>>>>>> aece92e4d1d8a626af0def5b14a04117234375a7
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
=======
<<<<<<< HEAD:ft_bzero.c
void	ft_bzero(void *dest, size_t len)
{
	unsigned char	*ptr;

	ptr = dest;
	while (len-- > 0)
		*ptr++ = 0;
=======
>>>>>>> aece92e4d1d8a626af0def5b14a04117234375a7
int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && str1[i] != '\0' && str2[i] != '\0' && n-- > 0)
	{
		i++;
	}
	return (str1[i] - str2[i]);
<<<<<<< HEAD
=======
>>>>>>> aece92e4d1d8a626af0def5b14a04117234375a7:ft_strncmp.c
>>>>>>> aece92e4d1d8a626af0def5b14a04117234375a7
}
