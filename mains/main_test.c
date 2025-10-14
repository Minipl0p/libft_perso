#include <stdio.h>
#include <string.h>
#include "libft.h"
#include "tests.h"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Usage: %s <nom_de_fonction>\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], "ft_memset") == 0) return test_ft_memset();
    else if (strcmp(argv[1], "ft_bzero") == 0) return test_ft_bzero();
    else if (strcmp(argv[1], "ft_memcpy") == 0) return test_ft_memcpy();
    else if (strcmp(argv[1], "ft_memccpy") == 0) return test_ft_memccpy();
    else if (strcmp(argv[1], "ft_memmove") == 0) return test_ft_memmove();
    else if (strcmp(argv[1], "ft_memchr") == 0) return test_ft_memchr();
    else if (strcmp(argv[1], "ft_memcmp") == 0) return test_ft_memcmp();
    else if (strcmp(argv[1], "ft_strlen") == 0) return test_ft_strlen();
    else if (strcmp(argv[1], "ft_strdup") == 0) return test_ft_strdup();
    else if (strcmp(argv[1], "ft_strcpy") == 0) return test_ft_strcpy();
    else if (strcmp(argv[1], "ft_strncpy") == 0) return test_ft_strncpy();
    else if (strcmp(argv[1], "ft_strcat") == 0) return test_ft_strcat();
    else if (strcmp(argv[1], "ft_strncat") == 0) return test_ft_strncat();
    else if (strcmp(argv[1], "ft_strlcat") == 0) return test_ft_strlcat();
    else if (strcmp(argv[1], "ft_strchr") == 0) return test_ft_strchr();
    else if (strcmp(argv[1], "ft_strrchr") == 0) return test_ft_strrchr();
    else if (strcmp(argv[1], "ft_strstr") == 0) return test_ft_strstr();
    else if (strcmp(argv[1], "ft_strnstr") == 0) return test_ft_strnstr();
    else if (strcmp(argv[1], "ft_strcmp") == 0) return test_ft_strcmp();
    else if (strcmp(argv[1], "ft_strncmp") == 0) return test_ft_strncmp();
    else if (strcmp(argv[1], "ft_atoi") == 0) return test_ft_atoi();
    else if (strcmp(argv[1], "ft_isalpha") == 0) return test_ft_isalpha();
    else if (strcmp(argv[1], "ft_isdigit") == 0) return test_ft_isdigit();
    else if (strcmp(argv[1], "ft_isalnum") == 0) return test_ft_isalnum();
    else if (strcmp(argv[1], "ft_isascii") == 0) return test_ft_isascii();
    else if (strcmp(argv[1], "ft_isprint") == 0) return test_ft_isprint();
    else if (strcmp(argv[1], "ft_toupper") == 0) return test_ft_toupper();
    else if (strcmp(argv[1], "ft_tolower") == 0) return test_ft_tolower();
    else if (strcmp(argv[1], "ft_memalloc") == 0) return test_ft_memalloc();
    else if (strcmp(argv[1], "ft_memdel") == 0) return test_ft_memdel();
    else if (strcmp(argv[1], "ft_strnew") == 0) return test_ft_strnew();
    else if (strcmp(argv[1], "ft_strclr") == 0) return test_ft_strclr();
    else if (strcmp(argv[1], "ft_strdel") == 0) return test_ft_strdel();
    else if (strcmp(argv[1], "ft_striter") == 0) return test_ft_striter();
    else if (strcmp(argv[1], "ft_striteri") == 0) return test_ft_striteri();
    else if (strcmp(argv[1], "ft_strmap") == 0) return test_ft_strmap();
    else if (strcmp(argv[1], "ft_strmapi") == 0) return test_ft_strmapi();
    else if (strcmp(argv[1], "ft_strequ") == 0) return test_ft_strequ();
    else if (strcmp(argv[1], "ft_strnequ") == 0) return test_ft_strnequ();
    else if (strcmp(argv[1], "ft_strsub") == 0) return test_ft_strsub();
    else if (strcmp(argv[1], "ft_strjoin") == 0) return test_ft_strjoin();
    else if (strcmp(argv[1], "ft_strtrim") == 0) return test_ft_strtrim();
    else if (strcmp(argv[1], "ft_strsplit") == 0) return test_ft_strsplit();
    else if (strcmp(argv[1], "ft_itoa") == 0) return test_ft_itoa();
    else if (strcmp(argv[1], "ft_putchar") == 0) return test_ft_putchar();
    else if (strcmp(argv[1], "ft_putstr") == 0) return test_ft_putstr();
    else if (strcmp(argv[1], "ft_putendl") == 0) return test_ft_putendl();
    else if (strcmp(argv[1], "ft_putnbr") == 0) return test_ft_putnbr();
    else if (strcmp(argv[1], "ft_putchar_fd") == 0) return test_ft_putchar_fd();
    else if (strcmp(argv[1], "ft_putstr_fd") == 0) return test_ft_putstr_fd();
    else if (strcmp(argv[1], "ft_putendl_fd") == 0) return test_ft_putendl_fd();
    else if (strcmp(argv[1], "ft_putnbr_fd") == 0) return test_ft_putnbr_fd();

    printf("Fonction inconnue : %s\n", argv[1]);
    return 1;
}

