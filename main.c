/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndir <mndir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:12:21 by mndir             #+#    #+#             */
/*   Updated: 2022/11/01 08:20:22 by mndir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"
//We are checking the argument one by one whith the function check_ar
int	main(int ac, char **av)
{
	if (ac == 5 || ac == 6)
	{
		if (check_argument(ac, av) == 0)
		{
			printf(RED"Wrong argument check the (pdf)\n");
			return (0);
		}
		printf(GREEN"success\n");
	}
	else
		printf(RED"enter the right Number of argument (5) or (6)");
}
