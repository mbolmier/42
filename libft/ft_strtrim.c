/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolmier <mbolmier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:23:15 by mbolmier          #+#    #+#             */
/*   Updated: 2023/12/02 19:40:51 by mbolmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int skip_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	finish;
	size_t	num;

	finish = 1;
	num = 0;
	while (*s1 && finish)
	{
		i = 0;
		while (set[i])
		{
			if (*s1 == set[i])
			{
				num++;
				break;
			}
			i++;
			if (!set[i])
				finish = 0;
		}
		s1++;
	}
	if (s1[0] == '\0')
		num = 0;
	return (num);
}

static unsigned int	skip_end(char const *s1, char const *set)
{
	size_t	i;
	size_t	num;
	size_t	finish;

	num = 0;
	finish = 1;
	while (*s1 && finish)
	{
		i = 0;
		while (set[i])
		{
			if (set[i] == *s1)
			{
				num++;
				break ;
			}
			i++;
			if (!set[i])
				finish = 0;
		}
		s1--;
	}
	return (num);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*str;
	size_t		i;
	size_t		len;
	size_t		start_num;
	size_t		end_num;

	len = ft_strlen(s1);
	start_num = skip_start(s1, set);
	end_num = skip_end(s1 + len - 1, set);
	s1 = s1 + start_num;
	len = len - (start_num + end_num);
	i = len;
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (i--)
		*(str++) = *(s1++);
	*str = '\0';
	return (str - len);
}

/*int	main(void)
{
	char const *s1 = ",,,   ,,, Holaaaa,, ,   ";
	printf("%s\n", ft_strtrim(s1, " ,"));
	return (0);
}*/
