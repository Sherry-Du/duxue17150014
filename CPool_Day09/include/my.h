#ifndef MY_H
#define MY_H

int my_compute_power_rec(int nb, int p);int my_strlen(char const *str)
int my_sqrt(int low, int high, int nb);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
int my_strlen(char const *str);
char *my_strcpy(char *strDest, const char *strSrc);
int my_atoi(char const *str);
int my_getnbr(char const *str);
int my_power(int num, int p);
int my_getnbr_base(char const * str, char const *base);
int my_isneg(int n);
int is_prime(int i, int nb);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str) ;
int my_showstr(char const *str);
char *my_revstr(char *str);
void my_sort_int_array(int *array, int size);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isprintable(char const *str);
int my_str_isupper(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str) ;
void my_swap(int *a, int *b);

#endif /* MY_H */