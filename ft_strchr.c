/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <jnuno-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:00:04 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/10/22 23:34:31 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i++] != c)
	{
		if (s[i] == '\0')
			return (0);sdasd
	}
	return((char *)s);
}
/*
#include <stdio.h>
#include <strings.h>

int	main(void)
{
	const char *str = "A tua prima de 4";
	int	c = 'N';

	
	const char *str1 = "A tua prima de 4";
	int	c1 = 'N';

	printf("Meu: %s\n", ft_strchr(str, c));
	printf("Original: %s", ft_strchr(str1, c1));
}*/