/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <jnuno-da@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 21:59:22 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/11/01 23:03:43 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*t;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		t = (*lst)->next;
		ft_lstdelone (*lst, del);
		*lst = t;
	}
}
/* void ft_free(void *node)
{
    free(node);   
}
int main()
{
	t_list *st ;
	t_list *st1;
	t_list *st2;
	char *a = malloc(2);
    char *b = malloc(2);
    char *c = malloc(2);

	a[0] = 'c'; a[1] = '\0';
    b[0] = 'd'; b[1] = '\0';
    c[0] = 'e'; c[1] = '\0';
	
	st = ft_lstnew(a);
	st1 = ft_lstnew(b);
	st2 = ft_lstnew(c);

	st->next = st1;
	st1->next = st2;
	st2->next = NULL;
	
	while (st)
	{
		printf("%s\n", (char *)st->content);
		st = st->next;
	}
	ft_lstclear(&st, &ft_free);
	
	if(st == NULL)
		printf("ALL NULL");
	else
		printf("Not NULL");
	return 0;
} */