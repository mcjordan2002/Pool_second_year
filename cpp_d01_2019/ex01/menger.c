/*
** EPITECH PROJECT, 2020
** menger.c
** File description:
** menger
*/

#include "menger.h"

void menger(int size, int stage, int x, int y)
{
    int i;int tmp;
    int var = 27 / 3;

    i = 0;
    tmp = size / 3;
    if (size == 0 || stage % 3 != 0 || stage != 0) {
        printf("%03d %03d %03d\n", tmp, x + tmp, y + tmp);
        stage--;
        while (i < var) {
            (i != 4) ? menger(tmp, stage,
            (x + i / 3 * tmp), y + (i * tmp) % (tmp * 3)): 0;
            i++;
        }
    }
}
