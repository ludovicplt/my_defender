/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-mydefender-ludovic.peltier
** File description:
** states
*/

#include "game.h"

void init_game(game_t *game)
{
    init_window(game);
    init_asset_hub(game);
    init_asset_pause(game);
    init_asset_music(game);
    init_asset_game(game);
    init_asset_enemis(game);
    init_asset_tower(game);
    init_asset_button(game);
    init_asset_utils(game);
    init_asset_victory(game);
    init_asset_defeat(game);
    init_asset_title(game);
    init_asset_easter(game);
    init_asset_score(game);
    init_tower_price(game);
    init_tower_description(game);
    generate_ennemy(game);
    init_beacon(game);
    init_place(game);
    init_menu_tower(game);
}

void destroy_game(game_t *game)
{
    destroy_asset_hub(game);
    destroy_asset_pause(game);
    destroy_asset_game(game);
    destroy_asset_enemis(game);
    destroy_asset_tower(game);
    destroy_asset_music(game);
    destroy_asset_button(game);
    destroy_asset_utils(game);
    destroy_asset_victory(game);
    destroy_asset_defeat(game);
    destroy_asset_title(game);
    destroy_asset_easter(game);
    destroy_asset_score(game);
    destroy_tower_atributes(game);
    destroy_beacon(game);
    destroy_place(game);
}
