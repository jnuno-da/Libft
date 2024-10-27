/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <jnuno-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:55:08 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/10/27 22:43:43 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	if (!s1)
		return(0);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	j = ft_strlen(s1);
	while(s1[i] && ft_strchr(set, s1[i]))
		i++;
	while(s1[j] && ft_strchr(set, s1[j]))
		j--;
	return(ft_substr(s1, i, (j - i) + 1));
}
int	main(void)
{
	const char	*s1 = "aaaaabbbbbgood luckbbbbbaaaa";
	const char	*set = "ab";

	char	*trim = ft_strtrim(s1, set);

		printf("string: %s\n", s1);
		printf("string cortada: %s\n", trim);
		free(trim);
	return(0);
}