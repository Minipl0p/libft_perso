#ifndef TESTS_H
# define TESTS_H

/* Fonctions de test pour chaque fonction de la libft */

/* Memory */
int test_ft_memset(void);
int test_ft_bzero(void);
int test_ft_memcpy(void);
int test_ft_memccpy(void);
int test_ft_memmove(void);
int test_ft_memchr(void);
int test_ft_memcmp(void);

/* Strings */
int test_ft_strlen(void);
int test_ft_strdup(void);
int test_ft_strcpy(void);
int test_ft_strncpy(void);
int test_ft_strcat(void);
int test_ft_strncat(void);
int test_ft_strlcat(void);
int test_ft_strchr(void);
int test_ft_strrchr(void);
int test_ft_strstr(void);
int test_ft_strnstr(void);
int test_ft_strcmp(void);
int test_ft_strncmp(void);

/* Conversion */
int test_ft_atoi(void);

/* Character tests */
int test_ft_isalpha(void);
int test_ft_isdigit(void);
int test_ft_isalnum(void);
int test_ft_isascii(void);
int test_ft_isprint(void);
int test_ft_toupper(void);
int test_ft_tolower(void);

/* Memory allocation */
int test_ft_memalloc(void);
int test_ft_memdel(void);

/* String creation / deletion / clearing */
int test_ft_strnew(void);
int test_ft_strclr(void);
int test_ft_strdel(void);

/* String iteration / mapping */
int test_ft_striter(void);
int test_ft_striteri(void);
int test_ft_strmap(void);
int test_ft_strmapi(void);

/* String comparison */
int test_ft_strequ(void);
int test_ft_strnequ(void);

/* Substring / join / trim / split / itoa */
int test_ft_strsub(void);
int test_ft_strjoin(void);
int test_ft_strtrim(void);
int test_ft_strsplit(void);
int test_ft_itoa(void);

/* Output functions */
int test_ft_putchar(void);
int test_ft_putstr(void);
int test_ft_putendl(void);
int test_ft_putnbr(void);
int test_ft_putchar_fd(void);
int test_ft_putstr_fd(void);
int test_ft_putendl_fd(void);
int test_ft_putnbr_fd(void);

#endif
