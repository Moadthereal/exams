/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: makio </var/spool/mail/makio>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 03:41:40 by makio             #+#    #+#             */
/*   Updated: 2026/05/22 04:35:43 by makio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char reverse_bits(unsigned char octet) {
  unsigned char r;
  int char_len;

  r = 0;
  char_len = 8;
  while (char_len--) {
    r = (r << 1) | (octet & 1);
    octet >>= 1;
  }
  return (r);
}
