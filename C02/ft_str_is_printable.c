/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jade-car <jade-car@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:42:21 by jade-car          #+#    #+#             */
/*   Updated: 2023/07/26 15:32:10 by jade-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
  char str1[] = "-A%-";
  char str2[] = "42Há";

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
