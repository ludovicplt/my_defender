/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-mydefender-ludovic.peltier
** File description:
** display_asset3
*/

#include "game.h"

void display_asset_title(game_t *game)
{
    sfRenderWindow_drawText(game->window.window, game->asset.title, NULL);
}

void display_asset_score(game_t *game)
{
    sfRenderWindow_drawText(game->window.window, game->asset.score, NULL);
    sfText_setPosition(game->asset.score, (sfVector2f){1020, 75});
}

void display_asset_sunglass(game_t *game)
{
    SFRW_DS(game->window.window, game->asset.spr_sunglass, NULL);
    SFS_SP(game->asset.spr_sunglass, (sfVector2f){130, 375});
}

void display_asset_spleef(game_t *game)
{
    SFRW_DS(game->window.window, game->asset.spr_spleef, NULL);
    SFS_SP(game->asset.spr_spleef, (sfVector2f){400, 450});
}

void display_debug(game_t *game)
{
    for (int i = 0; i != 4; i++) {
        sfRenderWindow_drawRectangleShape(game->window.window,
            game->beacon[i].rect, NULL);
    }
}