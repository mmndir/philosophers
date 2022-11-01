/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo_util.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndir <mndir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 08:12:40 by mndir             #+#    #+#             */
/*   Updated: 2022/11/01 08:28:32 by mndir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_atoi(const char *str)
{
	int				index;
	unsigned int	result;
	int				sign;

	index = 0;
	result = 0;
	sign = 1;
	while (str[index] == 32 || (str[index] >= 9 && str[index] <= 13))
		index++;
	if (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			sign = -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		result = (result * 10) + str[index] - '0';
		index++;
	}
	if (result > 2147483648 && sign == 1)
		return (-1);
	if (result > 2147483648 && sign == -1)
		return (0);
	return (result * sign);
}

int	check_argument(int ac, char **av)
{
	int	s1;
	int	s2;
	int	s3;
	int	s4;

	s1 = ft_atoi(av[1]);
	s2 = ft_atoi(av[2]);
	s3 = ft_atoi(av[3]);
	s4 = ft_atoi(av[4]);
	if (s1 == 0 || s1 > 200)
	{
		printf(YELLOW"Warning:");
		printf(" the first argument should be between 1 and 200\n");
		return (0);
	}
	return (1);
}
