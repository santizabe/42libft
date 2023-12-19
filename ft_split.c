/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: santizabe <santizabe@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 03:08:04 by santizabe         #+#    #+#             */
/*   Updated: 2023/12/15 18:53:13 by santizabe        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	**ft_split(char const *s, char c)
{
	int		wc;
	char	*tmp;
	char	**str_arr;

	wc = 0;
	tmp = (char *)s;
	while (*tmp && tmp)
		if (*tmp++ != c && ft_strchr(tmp, c) && ++wc)
			tmp = ft_strchr(tmp, c);
	str_arr = (char **)malloc((wc + 1) * sizeof(char *));
	if (!str_arr)
		return (str_arr);
	str_arr[wc + 1] = NULL;
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