/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-mydefender-ludovic.peltier
** File description:
** destroy_asset2
*/

#include "game.h"

void destroy_asset_music(game_t *game)
{
    sfMusic_destroy(game->music.mus_hub);
    sfMusic_destroy(game->music.mus_pause);
    sfMusic_destroy(game->music.mus_game);
    sfMusic_destroy(game->music.click_sound);
    sfMusic_destroy(game->music.mus_easter);
}

void destroy_asset_button(game_t *game)
{
    SFS_D(game->asset.spr_button);
    SFS_D(game->asset.spr_button2);
}

void destroy_asset_utils(game_t *game)
{
    sfCursor_destroy(game->asset.cursor);
    sfFont_destroy(game->asset.font);
}

void destroy_asset_victory(game_t *game)
{
    SFS_D(game->asset.spr_back_v);
}

void destroy_asset_defeat(game_t *game)
{
    SFS_D(game->asset.spr_back_d);
    SFS_D(game->asset.spr_satan);
}
