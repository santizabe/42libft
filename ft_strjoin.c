/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santizabe <santizabe@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:38:11 by santizabe         #+#    #+#             */
/*   Updated: 2023/12/14 23:17:16 by santizabe        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *s;
    char    *tmp;

    s = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
    if (!s)
        return (s);
    tmp = s;
    s = (char *)ft_memmove(s, s1, ft_strlen(s1));
    s = (char *)ft_memmove(s + ft_strlen(s1), s2, ft_strlen(s2) + 1);
    return (tmp);
}