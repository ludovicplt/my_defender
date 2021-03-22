/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-mydefender-ludovic.peltier
** File description:
** destroy_asset3
*/

#include "game.h"

void destroy_asset_title(game_t *game)
{
    sfText_destroy(game->asset.title);
    sfFont_destroy(game->asset.font2);
}

void destroy_asset_score(game_t *game)
{
    sfText_destroy(game->asset.score);
}

void destroy_asset_easter(game_t *game)
{
    SFS_D(game->asset.spr_sunglass);
    SFS_D(game->asset.spr_spleef);
}

void destroy_beacon(game_t *game)
{
    for (int i = 0; i != 4; i++) {
        sfRectangleShape_destroy(game->beacon[i].rect);
    }
}

void destroy_place(game_t *game)
{
    for (int i = 0; i != 4; i++) {
        sfCircleShape_destroy(game->place[i].area);
        SFS_D(game->place[i].sprite);
    }
}
