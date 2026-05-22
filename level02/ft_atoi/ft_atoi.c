/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makio </var/spool/mail/makio>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 00:24:18 by makio             #+#    #+#             */
/*   Updated: 2026/05/22 00:44:18 by makio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str) {
  int sign;
  int value;

  while (*str && *str == ' ')
    str++;

  sign = 1;
  while (*str == '+' || *str == '-') {
    if (*str == '-')
      sign *= -1;
    str++;
  }

  value = 0;
  while (*str) {
    value = value * 10 + *str - 48;
    str++;
  }
  return (value * sign);
}
