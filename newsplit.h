#ifndef NEWSPLIT_H
#define NEWSPLIT_H

#include <stdio.h>
#include <stdlib.h>

int		ignore_inside_special(char *string, char special);
int		ft_strlen(char *string);
char	*ft_cutter (char *string, int n_byte);
int		in_special( char c, char *special);
int		words_count(char *string, char split_char, char *special);
int		increase_i(char *string, char split_char, char *special);


#endif