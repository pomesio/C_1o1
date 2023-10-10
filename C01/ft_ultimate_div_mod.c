/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 00:04:42 by jade-car          #+#    #+#             */
/*   Updated: 2023/07/25 20:06:40 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	cociente;
	int	resto;

	cociente = *a / *b;
	resto = *a % *b;
	*a = cociente;
	*b = resto;
}
/*
int main() {
    int num1 = 20;
    int num2 = 3;

    // Llamada a la función ft_ultimate_div_mod
    ft_ultimate_div_mod(&num1, &num2);

    printf("Llamar a ft_ultimate_div_mod:\n");
    printf("num1 (cociente) = %d\n", num1);
    printf("num2 (resto) = %d\n", num2);

    return 0;
}
*/
