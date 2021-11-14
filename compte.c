/*
** EPITECH PROJECT, 2019
** compte
** File description:
** compte
*/

int space(int o, int a, int i, char *av)
{
    for (; av[i] != '\0'; i++) {
        if (av[i] > a && av[i-1] > a && av[i-o] >
        a && av[i-o-1] > a && i-o > 0) {
            av[i] = av[i] + 1;
        }
    }
}

char *compte(int o, char *av)
{
    int i = 0;
    int a = 48;

    o++;
    for (; a != 67; a++) {
        i = 0;
        av[i] == space(o, a, i, av);
    }
    return (av);
}
