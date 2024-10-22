/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xispe <xispe@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 00:01:08 by xispe             #+#    #+#             */
/*   Updated: 2024/10/22 00:46:26 by xispe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>


size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (str != 0)
	{
		while (str[i] != '\0')
		{
			i++;
		}
		return (i);
	}
	else
		return (0);
}
size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t d_len;
    size_t s_len;
    size_t i;

    d_len = ft_strlen(dst);
    s_len = ft_strlen(src);
    i = 0;
    if (size == 0)
        return (s_len);
    if (size < d_len)
        return (s_len + size);
    while (src[i] && ((d_len + i) < (size - 1)))
    {
        dst[d_len + i] = src[i];
        i++;
    }
    dst[d_len + i] = '\0';
    return(d_len + s_len);
}

int     main(void)
{
        char *src = "Ai a minha vida";
        char *dest = "Ola Mae";
        int  size = 6;

    printf("meu: %zu\n", ft_strlcat(dest,src,size));

}