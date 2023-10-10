/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 20:29:52 by jade-car          #+#    #+#             */
/*   Updated: 2023/07/25 21:00:01 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main() 
{
    char source[] = "42 World!";
    char destination[10];

    // Copiar el contenido de source en destination
    ft_strcpy(destination, source);

    printf("Texto copiado: %s\n", destination);
    return 0;
}
*/
