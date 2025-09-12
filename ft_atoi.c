/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sthubthi <sthubthi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 11:05:17 by sthubthi          #+#    #+#             */
/*   Updated: 2025/09/12 11:06:33 by sthubthi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iswhitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	long int	result;
	int			sign;
	int			i;

	result = 0;
	sign = 1;
	i = 0;
	while (ft_iswhitespace(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

// #include <stdio.h>
// int main()
// {
// 	char *str = "2147483648";
// 	printf("%d\n", ft_atoi(str));
// 	return (0);
// }