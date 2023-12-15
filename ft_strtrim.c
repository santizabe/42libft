/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santizabe <santizabe@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 23:19:24 by santizabe         #+#    #+#             */
/*   Updated: 2023/12/15 02:42:16 by santizabe        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char    *ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*str;

	while (ft_strchr(set, *s1) && *s1)
		s1++;
	len = ft_strlen(s1);
	while (len && ft_strrchr(set, *(s1 + len - 1)))
		len--;
	str = (char *)malloc(len + 1);
	if (!str)
		return (str);
	ft_strlcpy(str, s1, len + 1);
	return (str);
}