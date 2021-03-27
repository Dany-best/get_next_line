#include "get_next_line.h"

size_t		ft_strlen(const char *str)
{
	size_t length;

	length = 0;
	while (*str != '\0')
	{
		++str;
		++length;
	}
	return (length);
}

char		*ft_strchr(const char *str, int ch)
{
	int i;

	i = -1;
	while (++i < (int)ft_strlen(str) + 1)
	{
		if (*(str + i) == (char)ch)
			return ((char*)str + i);
	}
	return (0);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char		*str;
	int			i;
	size_t		length;

	if (!s1 || !s2)
		return (NULL);
	length = (ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * length)))
		return (NULL);
	while (*s1 != '\0')
		str[i++] = *s1++;
	while (*s2 != '\0')
		str[i++] = *s2++;
	str[i] = '\0';
	return (str);
}

char		*ft_strdup(const char *str)
{
	char	*ptr;
	int		length;
	int		i;

	length = (int)ft_strlen(str);
	if (!(ptr = (char*)malloc(sizeof(char) * (length + 1))))
		return (NULL);
	ptr[length] = '\0';
	i = 0;
	while (length--)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
