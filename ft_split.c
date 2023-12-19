/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: szapata- <szapata-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 03:08:04 by santizabe         #+#    #+#             */
/*   Updated: 2023/12/19 21:17:36 by szapata-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static void	free_memory(char **str_arr)
{
	while (str_arr && *str_arr)
	{
		free(*str_arr);
		str_arr++;
	}
	free(str_arr);
}

static int	word_count(const char *s, char c)
{
	int	wc;

	wc = 0;
	while (s && *s)
		if (*s++ != c && ++wc)
			s = ft_strchr(s, c);
	return (wc);
}

static int	word_len(const char *s, char c)
{
	int	wlen;

	wlen = 0;
	while (*s && *s++ != c)
		wlen++;
	return (wlen);
}

char	**ft_split(char const *s, char c)
{
	int		wlen;
	int		i;
	char	**str_arr;

	str_arr = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!str_arr)
		return (str_arr);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			wlen = word_len(s, c);
			str_arr[i] = ft_substr(s, 0, wlen);
			if (!str_arr[i])
				free_memory(str_arr);
			i++;
			s += wlen;
			continue ;
		}
		s++;
	}
	str_arr[i] = NULL;
	return (str_arr);
}

// int main(void)
// {
// 	char	**arr_list;
// 	int		i = 0;
// 	arr_list = ft_split("Hola mundo!", ' ');
// 	while(arr_list[i] != NULL)
// 	{
// 		printf("%s\n", arr_list[i]);
// 		i++;
// 	}
// 	free_memory(arr_list);
// 	return (0);
// }