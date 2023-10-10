/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:04:27 by jade-car          #+#    #+#             */
/*   Updated: 2023/07/26 15:04:36 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
  char str1[] = "4242";
  char str2[] = "42Hal";

  if (ft_str_is_alpha(str1))
  {
    printf("%s SOLO DIGITOS \n", str1);
  }
  else
  {
    printf("%s Tiene otras cosas \n", str1);
  }

  if (ft_str_is_alpha(str2))
  {
    printf("%s SOLO DIGITOS\n", str2);
  }
  else
  {
    printf("%s Tiene otras cosas", str2);
  }
  return(0);
}
*/
