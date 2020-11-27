/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_get_next_line.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: drarlean <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 15:22:54 by drarlean          #+#    #+#             */
/*   Updated: 2020/11/23 18:57:23 by drarlean         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
