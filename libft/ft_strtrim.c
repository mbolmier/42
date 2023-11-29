/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolmier <mbolmier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:23:15 by mbolmier          #+#    #+#             */
/*   Updated: 2023/11/29 18:37:57 by mbolmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int skip_start(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	finish;

	i = 0;
	finish = 1;
	while(s1[i] && finish)
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
			{
				i++;
				break;
			}
			j++;
			if (!set[j])
				finish = 0;
		}
		i++;
	}
	return ();
}

/*char	*ft_strtrim(char const *s1, char const *set)
{
	char *str;
}*/

int	main(void)
{
	char const *s1 = "   salut";
	skip_start(s1, " ");
	printf("%s\n", s1);
	return (0);
}