/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-mydefender-ludovic.peltier
** File description:
** display_asset2
*/

#include "game.h"

void display_asset_button(game_t *game)
{
    SFRW_DS(game->window.window, game->asset.spr_button, NULL);
}

void display_asset_button2(game_t *game)
{
    SFRW_DS(game->window.window, game->asset.spr_button2, NULL);
}

void read_link(game_t *game)
{
    int i = 0;

    clock_goat(game);
    while (i != 3) {
        sfSprite_setTextureRect(game->enemy[i].sprite, game->enemy[i].rect);
        SFRW_DS(game->window.window, game->enemy[i].sprite, NULL);
        i++;
    }
}

void display_asset_victory(game_t *game)
{
    SFRW_DS(game->window.window, game->asset.spr_back_v, NULL);
}

void display_asset_defeat(game_t *game)
{
    SFRW_DS(game->window.window, game->asset.spr_back_d, NULL);
    SFRW_DS(game->window.window, game->asset.spr_satan, NULL);
}