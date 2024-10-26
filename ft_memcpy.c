/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <jnuno-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 13:02:41 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/10/26 02:05:49 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = dst;
	s = (unsigned char *)src;
	if (src == NULL && dst == NULL)
		return (dst);
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (d);
}
/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char str1[]="456789";
	char str2[]="2146";
	char str3[]="456789";
	char str4[]="2146";

	memcpy(str1, str2, 4);
	printf("%s \n", str1);
	ft_memcpy(str3, str4, 4);
	printf("%s \n", str3);
}*/