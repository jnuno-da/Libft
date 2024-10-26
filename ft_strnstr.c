/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <jnuno-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:51:41 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/10/26 02:12:08 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;
	char	*src;
	char	*str;

	src = (char *)little;
	str = (char *)big;
	i = 0;
	j = 0;
	if (src[i] == 0)
		return ((char *)big);
	while (str[i] != '\0' && i < (int)len)
	{
		while (str[i + j] == src[j] && str[i + j] && i + j < (int)len)
		{
			j++;
			if (src[j] == 0)
				return ((char *)big + i);
		}
		j = 0;
		i++;
	}
	return (0);
}
/* #include <stdio.h>
#include <string.h>
int	main(void)
{
	const char *str = "";
	const char *c = "";
	
	const char *str1 = "";
	const char *c1 = "";
	
	printf("Meu: %s\n", ft_strnstr(str, c, 5));
	printf("Original: %s", strnstr(str1, c1, 5));
} */