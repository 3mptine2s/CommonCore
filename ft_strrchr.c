/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthubthi <sthubthi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 11:05:58 by sthubthi          #+#    #+#             */
/*   Updated: 2025/09/12 12:01:35 by sthubthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*strrchr(const char *str, int search_str)
{
	char	*cast;
	char	*lastocc;
	int		i;

	cast = (char *)str;
	i = 0;
	lastocc = NULL;
	while (str[i])
	{
		if (search_str == str[i])
		{
			lastocc = &cast[i];
		}
		i++;
	}
	if (search_str == '\0')
		return ((char *)&str[i]);
	return (lastocc);
}
