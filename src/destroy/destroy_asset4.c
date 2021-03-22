/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-mydefender-ludovic.peltier
** File description:
** destroy_asset4
*/

#include "game.h"

void destroy_tower_atributes(game_t *game)
{
    sfText_destroy(game->asset.price1);
    sfText_destroy(game->asset.price2);
    sfText_destroy(game->asset.price3);
    sfText_destroy(game->asset.price4);
    sfText_destroy(game->asset.atribute1);
    sfText_destroy(game->asset.atribute2);
    sfText_destroy(game->asset.atribute3);
    sfText_destroy(game->asset.atribute4);
}
