/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:18:31 by jade-car          #+#    #+#             */
/*   Updated: 2023/07/26 15:21:47 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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
  char str1[] = "hola";
  char str2[] = "K";

  if (ft_str_is_lowercase(str1))
  {
    printf("%s: Solo mayus \n", str1);
  }
  else
  {
    printf("%s: Tiene mas cosass \n", str1);
  }

  if (ft_str_is_lowercase(str2))
  {
    printf("%s: Solo mayus\n", str2);
  }
  else
  {
    printf("%s: Tiene mas cosas", str2);
  }
  return(0);
}
*/
