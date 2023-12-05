/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbolmier <mbolmier@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 19:31:46 by mbolmier          #+#    #+#             */
/*   Updated: 2023/12/05 18:33:22 by mbolmier         ###   ########.fr       */
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
		if (s[i] == (char)c)
			temp = &s[i];
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)s + i);
	return ((char *)temp);
}
