/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-mydefender-ludovic.peltier
** File description:
** clock_goat
*/

#include "game.h"
#include <stdio.h>

char *itch(int nb, char *str)
{
    int i = 0;
    int temp = 0;
    int div = 10;
    int mall = 1;

    while (nb / div != 0) {
        div *= 10;
        mall++;
    }
    str = malloc(sizeof(char) * (mall + 1));
    div /= 10;
    while (div != 0) {
        temp = nb / div;
        nb = nb % div;
        div /= 10;
        str[i] = (temp) + 48;
        i++;
    }
    str[i] = '\0';
    return str;
}

void clock_goat(game_t *game)
{
    float time = sfTime_asSeconds(sfClock_getElapsedTime(game->clock));

    for (int i = 0; i != game->max; i++) {
        if ((game->enemy[i].time + 0.20) < time) {
            if (game->enemy[i].rect.left == 96) {
                game->enemy[i].rect.left = 0;
            } else {
                game->enemy[i].rect.left += 48;
            }
            game->enemy[i].time = time;
        }
    }
}

void calculator(game_t *game)
{
    float second = sfTime_asSeconds(sfClock_getElapsedTime(game->clock));

    if (game->asset.last_second + 5 SMALLER second) {
        game->asset.money += 5;
        game->asset.last_second = second;
        sfText_setString(game->asset.score, itch(game->asset.money, ""));
    }
}
