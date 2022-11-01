/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mndir <mndir@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 20:01:15 by mndir             #+#    #+#             */
/*   Updated: 2022/11/01 08:03:59 by mndir            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <stdio.h>
# include <pthread.h>
//-----------------colors----------------//

# define GREEN "\033[0;32m"
# define RED "\033[0;31m"
# define YELLOW "\033[0;33m"

//---------------philo_data--------------//

typedef struct philo_data
{
	
}	t_philo;

//---------------prog_data--------------//

typedef struct prog_data
{

}	t_prog;

//--------------functions---------------//

int	check_argument(int ac, char **av);
int	ft_atoi(const char *str);

#endif