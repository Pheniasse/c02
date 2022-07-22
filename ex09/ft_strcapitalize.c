/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:18:21 by marvin            #+#    #+#             */
/*   Updated: 2022/07/21 13:18:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (str[i])
	{
		if (j && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (!j && str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		j = !((str[i] >= 'a' && str[i] <= 'z') ||
					(str[i] >= 'A' && str[i] <= 'Z') ||
					(str[i] >= '0' && str[i] <= '9'));
		++i;
	}
	return (str);
}