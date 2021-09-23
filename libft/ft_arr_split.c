/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_split.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfritz <jfritz@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/23 15:07:22 by jfritz            #+#    #+#             */
/*   Updated: 2021/09/23 15:11:52 by jfritz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_wlc(char const *s, char c, int *pws)
{
	int	i;
	int	j;
	int	word_len;

	i = *pws;
	while (s[i] == c)
		i++;
	j = *pws;
	while (s[i] != c && s[i] != '\0')
		i++;
	word_len = (i - j);
	return (word_len);
}

static int	ft_wct(char const *s, char c, int *pws)
{
	int	i;
	int	words;

	i = 0;
	while (s[i] == c && s[i] != '\0')
		i++;
	*pws = i;
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

static char	*ft_printer(char const *s, char c, int *pws)
{
	int		i;
	int		word_len;
	char	*str;

	word_len = ft_wlc(s, c, pws);
	str = (char *)malloc((word_len + 1) * sizeof(char));
	if (str == 0)
		return (0);
	i = 0;
	while (i < word_len && s[*pws] != c)
	{
		str[i] = s[*pws];
		i++;
		*pws += 1;
	}
	while (s[*pws] == c)
		*pws += 1;
	str[i] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	int		ws;
	int		words;
	int		i;
	char	**result;
	char	*string;

	if (s == 0)
		return (0);
	ws = 0;
	words = ft_wct(s, c, &ws);
	i = 0;
	result = (char **)malloc((words + 1) * sizeof(char *));
	if (result == 0)
		return (0);
	while (i < words)
	{
		string = ft_printer(s, c, &ws);
		if (string == 0)
			return (0);
		result[i++] = string;
	}
	result[i] = 0;
	return (result);
}