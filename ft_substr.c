/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <jnuno-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 12:29:17 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/10/27 22:58:38 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	lengs;
	size_t	i;

	i = 0;
	lengs = ft_strlen(s);
	if (!s)
		return (NULL);
	if(start > lengs)
		return(0);
	sub = (char *)malloc(len + 1);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, &s[start], lengs + 1);
	return (sub);
}
int main()
{
 const char* original = "Hello, World!";
    int start = 10;
    int length = 10;

    char* result = ft_substr(original, start, length);
        printf("Substring: %s\n", result); 
        free(result);
 }