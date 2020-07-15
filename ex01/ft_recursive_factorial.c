/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:11:08 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/15 12:18:42 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_recursive_factorial( int nb);

{
	if (nb < 0 )
	{
		return (0);
	}
	else if (nb == 1 || nb == 0)
	{
		return (1);
	}
	retun nb * ft_recursive_factorial(nb - 1);
}
