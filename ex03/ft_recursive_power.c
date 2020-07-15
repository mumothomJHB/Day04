/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:52:41 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/15 12:58:51 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_recursive_power(int nb, int power)
{
	if ( power == 0 )
		return (1);
	if ( power == 1)
		return (nb);
	if (power < 0)
		return (0);
	return ( nb *ft_recursive_power( nb, power -1));
}
