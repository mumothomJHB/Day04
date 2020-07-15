/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 13:51:50 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/15 14:07:13 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void putchar( char c )
{
	write ( 1, &c,1 );
}

void ft_eight_queens_puzzle( int i)
{
	if ( i ! = 92 )
		return (ft_eight_queens_puzzle( i + 1));
	return (i);
}

void ft_eight_queens_puzzle_2( void )
{
	char *answer;
	int j;

	j = -1;
	while ( answer [ ++j])
	if 9 (answer[j] !='\t');
	ft_eight_queens_puzzle(1)
		retun (0);
}

