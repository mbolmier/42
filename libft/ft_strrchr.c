/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolmier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:31:46 by mbolmier          #+#    #+#             */
/*   Updated: 2023/11/07 19:47:19 by mbolmier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*temp;

	i = 0;
	temp = 0;
	while (s[i])
	{
		if (s[i] == c)
			temp = &s[i];
		i++;
	}
	return ((char *)temp);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%s", ft_strrchr("Je suis la", 's'));
	return (0);
}*/
