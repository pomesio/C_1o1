/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 01:12:27 by jade-car          #+#    #+#             */
/*   Updated: 2023/07/25 20:11:01 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int(int *tab, int size)
{
	int	k;
	int	j;
	int	aux;

	k = 0;
	j = size -1;
	while (k < j)
	{
		aux = tab[k];
		tab[k] = tab[j];
		tab[j] = aux;
		k++;
		j--;
	}
}
/*
int main()
{
	int arr[] = {1, 2, 3, 4};
	ft_rev_int(arr, 4);
	int i = 0;
	while (i < 4)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return 0;
}
*/
