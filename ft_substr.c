/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santizabe <santizabe@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:55:42 by santizabe         #+#    #+#             */
/*   Updated: 2023/12/14 20:04:35 by santizabe        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;

	if (start > ft_strlen(s))
		return ((char *)ft_calloc(1, 1));
	if (len + start > ft_strlen(s))
		len = ft_strlen(s) - start;
	s2 = (char *)malloc(len * sizeof(char) + 1);
	if (!s2)
		return (s2);
	ft_strlcpy(s2, s + start, len + 1);
	return (s2);
}
