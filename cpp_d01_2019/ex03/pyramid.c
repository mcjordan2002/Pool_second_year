/*
** EPITECH PROJECT, 2020
** pyramid.c
** File description:
** pyramid
*/

#include <stdio.h>

int pyramid_path(int size , const int **map)
{
    int i = 1;
    int sum = 0;
    int end = 0;

    sum += map[0][0];
    for (;i != size;i++) {
        if (map[i][end] > map[i][end + 1]) {
            sum += map[i][end + 1];
            end++;
        } else {
            sum += map[i][end];
        }
    } return (sum);
}
