/*
** EPITECH PROJECT, 2019
** startnbr
** File description:
** startnbr
*/

char *startnbr(char *buffer)
{
    int i = 0;
    int a = 0;

    while (buffer[i] != '\n')
        i++;
    i++;
    for (; buffer[i] != '\0'; a++) {
        buffer[a] = buffer[i];
        i++;
    }
    buffer[a] = '\0';
    return (buffer);
}
