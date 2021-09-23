/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/22 17:15:44 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/23 15:57:13 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wlc(char const *s, char c, int *pwst)
{
	int	i;
	int	j;
	int	word_len;

	i = *pwst;
	while (s[i] == c)
		i++;
	j = *pwst;
	while (s[i] != c && s[i] != '\0')
		i++;
	word_len = (i - j);
	return (word_len);
}

static int	ft_wc(char const *s, char c, int *pwst)
{
	int	i;
	int	words;

	i = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	*pwst = i;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			words++;
			while (s[i] != c)
			{
				i++;
				if (s[i] == '\0')
					return (words);
			}
		}
		i++;
	}
	return (words);
}

static char	*string_printer(char const *s, char c, int *pwst)
{
	int		i;
	int		word_len;
	char	*str;

	word_len = ft_wlc(s, c, pwst);
	str = (char *)malloc((word_len + 1) * sizeof(char));
	if (str == 0)
		return (0);
	i = 0;
	while (i < word_len && s[*pwst] != c)
	{
		str[i] = s[*pwst];
		i++;
		*pwst += 1;
	}
	while (s[*pwst] == c)
		*pwst += 1;
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		word_start;
	int		words;
	int		i;
	char	**result;
	char	*string;

	if (s == 0)
		return (0);
	word_start = 0;
	words = ft_wc(s, c, &word_start);
	i = 0;
	result = (char **)malloc((words + 1) * sizeof(char *));
	if (result == 0)
		return (0);
	while (i < words)
	{
		string = string_printer(s, c, &word_start);
		if (string == 0)
			return (0);
		result[i++] = string;
	}
	result[i] = 0;
	return (result);
}