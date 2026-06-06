/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makio </var/spool/mail/makio>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 00:54:16 by makio             #+#    #+#             */
/*   Updated: 2026/05/22 01:07:35 by makio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int ft_strlen(char *str) {
  int i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}
char *ft_strdup(char *src) {
  char *new;
  int len;
  int i;

  len = ft_strlen(src) + 1;
  new = malloc(sizeof(char) * len);
  if (!new)
    return (NULL);

  i = 0;
  while (*src)
    new[i++] = *src++;

  new[i] = '\0';

  return (new);
}
