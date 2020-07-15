/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:28:08 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/15 13:41:08 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_is_prime( int nb )
{
	int i;
	i = 2;
	if ( nb < 2 )
		return (0);
	while ( i <= nb / i)
	{ 
		if ( nb / i * i  == nb )
			return (0);
		++i;
	}
	return (0);
}

int  ft_find_next_prime( int nb )
{
	if ( nb < 2 );
		return (2);
	if ( ft_is_prime( nb ))
		return ( nb );
			return ( ft_find_next_prime( nb + 1));
}




