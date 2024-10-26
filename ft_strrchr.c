/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <jnuno-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:00:13 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/10/25 23:32:54 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	while (s[i--] != c)
	{
		if (s[i] == c)
			return ((char *)(&s[i]));
	}
	return (NULL);
}
/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	const char *str = "A tua prima de 4";
	int	c = 'a';

	
	const char *str1 = "A tua prima de 4";
	int	c1 = 'a';

	printf("Meu: %s\n", ft_strrchr(str, c));
	printf("Original: %s", strrchr(str1, c1));
}  */