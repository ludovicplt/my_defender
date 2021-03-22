/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-mydefender-ludovic.peltier
** File description:
** display_asset
*/

#include "game.h"

void display_asset_hub(game_t *game)
{
    SFRW_DS(game->window.window, game->asset.spr_back_hub, NULL);
    SFRW_DS(game->window.window, game->asset.spr_goat_hub, NULL);
}

void display_asset_pause(game_t *game)
{
    SFRW_DS(game->window.window, game->asset.spr_back_pause, NULL);
}

void display_asset_game(game_t *game)
{
    SFRW_DS(game->window.window, game->asset.spr_map, NULL);
    SFRW_DS(game->window.window, game->asset.spr_coin, NULL);
    SFRW_DS(game->window.window, game->asset.spr_castle, NULL);
    SFRW_DS(game->window.window, game->asset.spr_wood, NULL);
}

void display_asset_enemis(game_t *game)
{
    SFRW_DS(game->window.window, game->asset.spr_goat_1, NULL);
    SFRW_DS(game->window.window, game->asset.spr_goat_2, NULL);
    SFRW_DS(game->window.window, game->asset.spr_goat_3, NULL);
    SFRW_DS(game->window.window, game->asset.spr_goat_b, NULL);
}

void display_asset_tower(game_t *game)
{
    SFRW_DS(game->window.window, game->asset.spr_tower_1, NULL);
    SFRW_DS(game->window.window, game->asset.spr_tower_2, NULL);
    SFRW_DS(game->window.window, game->asset.spr_tower_3, NULL);
    SFRW_DS(game->window.window, game->asset.spr_tower_4, NULL);
}