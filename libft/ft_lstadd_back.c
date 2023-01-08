/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 21:31:58 by codespace         #+#    #+#             */
/*   Updated: 2023/01/07 14:46:56 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *ptr;

    if (!new)
        return ;
    if (!*lst)
    {
        *lst = new;
        return ;
    }
    ptr = ft_lstlast(*lst);
    ptr->next = new;
}