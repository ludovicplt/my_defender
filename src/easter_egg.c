/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-mydefender-ludovic.peltier
** File description:
** easter_egg
*/

#include "game.h"
#include <stdio.h>

void master_goat(game_t *game)
{
    sfFloatRect goat = sfSprite_getGlobalBounds(game->asset.spr_goat_hub);
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window.window);
    static int stock = 0;

    if (sfFloatRect_contains(&goat, mouse.x, mouse.y)
        && sfMouse_isButtonPressed(sfMouseLeft)) {
        stock++;
        if (stock > 100) {
            game->asset.stock = 1;
        }
        if (stock > 250) {
            game->asset.stock = 2;
        }
        if (stock == 500) {
            sfMusic_pause(game->music.mus_hub);
            sfMusic_play(game->music.mus_easter);
        }
    }
}


