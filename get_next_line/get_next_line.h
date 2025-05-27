/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mech-user <mech-user@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 14:11:42 by mech-user         #+#    #+#             */
/*   Updated: 2025/05/27 15:41:52 by mech-user        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

char *get_next_line(int fd);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strchr(const char *string, int c);

void ft_bzero(void *s, size_t n);
void ft_calloc(size_t count, size_t size);

size_t ft_strlen(const char *s);

#endif GET_NEXT_LINE_H