/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-mydefender-ludovic.peltier
** File description:
** destroy_asset
*/

#include "game.h"

void destroy_asset_hub(game_t *game)
{
    SFS_D(game->asset.spr_goat_hub);
    SFS_D(game->asset.spr_back_hub);
    SFRW_DES(game->window.window);
}

void destroy_asset_pause(game_t *game)
{
    SFS_D(game->asset.spr_back_pause);
}

void destroy_asset_game(game_t *game)
{
    SFS_D(game->asset.spr_map);
    SFS_D(game->asset.spr_coin);
    SFS_D(game->asset.spr_castle);
    SFS_D(game->asset.spr_wood);
}

void destroy_asset_enemis(game_t *game)
{
    SFS_D(game->asset.spr_goat_1);
    SFS_D(game->asset.spr_goat_2);
    SFS_D(game->asset.spr_goat_3);
    SFS_D(game->asset.spr_goat_b);
}

void destroy_asset_tower(game_t *game)
{
    SFS_D(game->asset.spr_tower_1);
    SFS_D(game->asset.spr_tower_2);
    SFS_D(game->asset.spr_tower_3);
    SFS_D(game->asset.spr_tower_4);
}
