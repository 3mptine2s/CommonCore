/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthubthi <sthubthi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 11:05:48 by sthubthi          #+#    #+#             */
/*   Updated: 2025/09/12 11:05:49 by sthubthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static	int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static	int	is_sep(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

static	char	*dup_strft(char *src, int start, int end)
{
	char	*res;
	int		i;

	res = malloc(sizeof(char) * (end - start + 1));
	i = 0;
	while (i < end - start)
	{
		res[i] = src[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

static	char	**ft_empty_arr(void)
{
	char	**arr;

	arr = malloc(sizeof(char *));
	arr[0] = NULL;
	return (arr);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		start;
	int		i_tab;
	int		i;

	i = 0;
	start = 0;
	i_tab = 0;
	res = malloc(sizeof(char *) * (ft_strlen(str) + 1));
	if (!res)
		return (NULL);
	if (ft_strlen(str) == 0)
		return (ft_empty_arr());
	while (str[i])
	{
		while (str[i] && is_sep(str[i], charset))
			i++;
		start = i;
		while (str[i] && !is_sep(str[i], charset))
			i++;
		if (start < i)
			res[i_tab++] = dup_strft(str, start, i);
	}
	res[i_tab] = NULL;
	return (res);
}

// #include <stdio.h>
// int main()
// {
// 	char **result;
// 	int i;

// 	result = ft_split("Hello,,World! This is a test.", ", !.");
// 	i = 0;
// 	while (result[i])
// 	{
// 		printf("Substring %d: '%s'\n", i, result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return 0;
// }