/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 14:23:50 by codespace         #+#    #+#             */
/*   Updated: 2023/01/07 14:46:46 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *ret;
    t_list *tmp;

    ret = 0;
    if(!lst || !f || !del)
        return ;
    while (lst)
    {
        if (!(tmp = ft_lstnew(lst->content)))
        {
            ft_lstclear(&ret, del);
            return (NULL);
        }
        ft_lstadd_back(&ret, tmp);
        lst = lst->next;
    }
    return (ret);
}
