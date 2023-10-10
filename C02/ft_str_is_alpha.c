/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 12:34:32 by jade-car          #+#    #+#             */
/*   Updated: 2023/07/27 18:21:25 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || 
			(str[i] >= 'A' && str[i] <= 'Z'))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
/*
int main()
{
  char str1[] = "Hola";
  char str2[] = "";

  if (ft_str_is_alpha(str1))
  {
    printf("%s Contiene letras \n", str1);
  }
  else
  {
    printf("%s Tiene mas cosas \n", str1);
  }

  if (ft_str_is_alpha(str2))
  {
    printf("%s Contiene letras\n", str2);
  }
  else
  {
    printf("%s Tiene mas cosas", str2);
  }
  return(0);
}
*/
