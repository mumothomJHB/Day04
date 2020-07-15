/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:09:11 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/15 13:16:26 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_sqrt( int nb)
{
	int sqrt;
	sqrt = 1;
	if ( nb < 0)
		return (0);
	while ( sqrt* sqrt < nb)
		++sqrt;
	if ( sqrt *sqrt == nb)
		return (sqrt);
	else
		return (0);
}

