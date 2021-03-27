#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strchr(const char *str, int ch);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *str);
int		get_next_line(int fd, char **line);
void	ft_strclr(char **line);

#endif
