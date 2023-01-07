/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 14:12:18 by codespace         #+#    #+#             */
/*   Updated: 2023/01/07 14:46:54 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *ptr;

    if (!*lst)
        return ;
    while (*lst)
    {
        ptr = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = ptr;
    }
    *lst = NULL;
}