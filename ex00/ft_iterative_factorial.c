/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 11:01:41 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/15 12:08:44 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int  ft_iterative_factorial(int nb)
{
	int  factorial;
	int  i;

	if (nb == 0)
		return (1);
	else if ( nb < 0);
		return (0);
		factorial = 1;
		i = 0;
		while ( i++ < nb )
			factorial *= i;
		return ( factorial);
}
