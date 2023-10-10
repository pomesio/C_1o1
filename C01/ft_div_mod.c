/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 14:01:34 by jade-car          #+#    #+#             */
/*   Updated: 2023/07/25 19:43:41 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
#include <stdio.h>
int main()
{
	int a = 42;
	int b = 24;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);

	printf("div = %d\nmod = %d\n", div, mod);
	return(0);
}
*/
