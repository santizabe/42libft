/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szapata- <szapata-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 10:03:12 by szapata-          #+#    #+#             */
/*   Updated: 2023/12/12 10:37:29 by szapata-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
		if (*s++ == (unsigned char) c)
			return ((char *)--s);
	if (*s == (unsigned char) c)
		return ((char *) s);
	return (0);
}
