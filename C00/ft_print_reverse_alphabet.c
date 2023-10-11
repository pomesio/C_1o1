/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 16:55:54 by jade-car          #+#    #+#             */
/*   Updated: 2023/07/18 16:56:06 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	letter;

	letter = 122;
	while (letter >= 97)
	{
		write(1, &letter, 1);
		letter--;
	}
}

/*Prints the alphabet in reverse order, from z to a. 
It does this by using a while loop to iterate over the ASCII codes for 
the lowercase letters, from 122 to 97. For each iteration, the function writes 
the ASCII code to the standard output (stdout) using the write() function.*/
