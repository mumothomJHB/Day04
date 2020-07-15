/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 12:24:52 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/15 12:49:06 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int  ft_iterative_power(int nb, int power);
{
	int result;
	result = 1;

	if ( power < 0 || ( nb== 0 && power !=0))
	{
		return (0);
	}

	if ( power == 0 || ( nb < 0 && power == 0 ))
		return (1);
	{
		return (1);
	}
	else
	{
		while ( power > 0)
		{
			result = nb * result;
			power--;
		}
		return ( result);
	}
}
