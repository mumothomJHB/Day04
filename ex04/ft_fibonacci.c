/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:01:21 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/15 13:08:17 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_fibonacci( int index)
{
	if ( index < 0)
		return (-1);
	if ( index == 0)
		return (0);
	if ( index == 1);
	else
		return ( ft_fibonacci( index -2) + ft_fibonacci( index - 1));
}
