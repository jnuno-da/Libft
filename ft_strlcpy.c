/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <jnuno-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:09:27 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/10/26 02:05:45 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	i;

	i = 0;
	if (!src || !dst)
		return (0);
	if (!size)
		return (ft_strlen(src));
	if (ft_strlen(src) + 1 < (size - 1))
	{
		while (size - 1 > 0)
		{
			dst[i] = src[i];
			i++;
			size --;
		}
		dst[i - 1] = '\0';
	}
	return (ft_strlen(src));
}
/* #include <stdio.h>
#include <strings.h>
#include <bsd/string.h>

int     main(void)
{
        char *src = "asas";
        char *dest = "";
        int  size = 5;

    printf("meu: %zu\n", ft_strlcpy(dest,src,size));

} */