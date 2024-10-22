/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <jnuno-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 14:08:27 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/10/21 16:08:54 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	int	i;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (src == NULL && dst == NULL)
		return (NULL);
	if (d > s)
		while (len-- > 0)
		{
			d[len] = s[len];
		}
	else
		while (i++ < len)
		{
			d[i] = s[i];
		}
	return (dst);		
}
/* #include <string.h>
#include <stdio.h>

int	main(void)
{
    char str2 [50]="osj";
    char str1 [50]="osKBOimtHTYNIr3";

	printf("Source: %s\n",str1);
    ft_memmove(str2, str1, 5);
    printf("Dest: %s\n",str2);
	memmove(str2, str1, 5);
	printf("Dest original: %s\n", str2);
} */