/*
** EPITECH PROJECT, 2019
** end
** File description:
** end
*/

char *endend(int e, int o, int a, char *av)
{
    for (int c = o; c != 0; c--) {
        for (int v = o; v != 0;) {
            av[a] = 'x';
            av[a-v+1] = 'x';
            v--;
            av[a+(-e-1)*v] = 'x';
        }
        a = a - (e + 2);
        o--;
    }
}

char *end(char *av)
{
    int i = 0;
    int o = 0;
    int m = 0;
    int a = 0;
    int e = 0;

    for (int x; av[x] != '\n'; x++)
        e++;
    for (; av[i] != '\0'; i++) {
        m = av[i];
        if (m > o) {
            o = m;
            a = i;
        }
    }
    o = o - 48;
    av == endend(e, o, a, av);
    return (av);
}
