/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main function
*/

#include "menger.h"

int main(int ac, char **av)
{
    if (ac != 3 || pow(atoi(av[2]), 3) > atoi(av[1])) return (84);
    else menger(atoi(av[1]), atoi(av[2]), 0, 0); return (0);
}
