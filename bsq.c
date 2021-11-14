/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** bsq
*/

#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

int my_putstr(char const *str);
char *startnbr(char *buffer);
char *compte(int o, char *av);
char *end(char *av);

int good(char *buffer)
{
    int o = 0;

    for (;buffer[o] != '\n'; o++);
    return (o);
}

char *finish(char *buffer)
{
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == '0')
            buffer[i] = 'o';
        else if (buffer[i] > '0' && buffer[i] < 'x')
            buffer[i] = '.';
        else
            buffer[i] = buffer[i];
    }
    return (buffer);
}

char *start(char *buffer)
{
    int i = 0;

    for (; buffer[i] != '\0' ; i++) {
        if (buffer[i] == '.')
            buffer[i] = '1';
        else if (buffer[i] == '\n')
            buffer[i] = '\n';
        else
            buffer[i] = '0';
    }
    return (buffer);
}

int bsq(struct stat sb, int ac, char *buffer, char **av)
{
    int size;
    int i = 0;
    int o = 0;
    int fd = 0;

    fd = open(av[1], O_RDONLY);
    if (fd == -1)
        return (84);
    stat(av[1], &sb);
    o = sb.st_size;
    read(fd, buffer, o);
    buffer == startnbr(buffer);
    buffer == start(buffer);
    o = good(buffer);
    buffer == compte(o, buffer);
    buffer == end(buffer);
    buffer == finish(buffer);
    my_putstr(buffer);
    close(fd);
    return (0);
}

int main(int ac, char **av)
{
    struct stat sb;
    char *buffer;
    int o = 0;
    int fd;

    if (ac != 2)
        return (84);
    fd = open(av[1], O_RDONLY);
    stat(av[1], &sb);
    o = sb.st_size;
    buffer = malloc(sizeof(char) * (o + 1));
    if (buffer == NULL)
        return NULL;
    close(fd);
    return (bsq(sb, ac, buffer ,av));
}
