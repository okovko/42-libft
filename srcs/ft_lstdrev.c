/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdrev.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/13 21:40:59 by olkovale          #+#    #+#             */
/*   Updated: 2017/07/14 11:33:19 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

#include "libft.h"

t_list	*ft_lstdrev(t_list *lst)
{
	t_list	*dcpy;
	t_list	*node;

	NULLCHECK(lst);
	dcpy = NULL;
	while (lst)
	{
		NULLIF((node = ft_lstnew((void *)lst->content, lst->content_size)) == NULL);
		ft_lstadd(&dcpy, node);
		lst = lst->next;
	}
	return (dcpy);
}
