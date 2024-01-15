/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strings.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnogared <hnogared@student.42perpigna      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:11:39 by hnogared          #+#    #+#             */
/*   Updated: 2024/01/15 19:12:17 by hnogared         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGS_H
# define STRINGS_H

int		ft_strncmp(const char *str, const char *str2, size_t n);

size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dest, const char *src, size_t n);

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strchrnul(const char *s, int c);
char	*ft_strnstr(const char *big, const char *little, size_t n);
char	*ft_strdup(const char *str);
char	*ft_strndup(const char *str, size_t size);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	**ft_split(char const *s, char c);
char	**ft_split_set(char const *s, char const *set);

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

#endif
