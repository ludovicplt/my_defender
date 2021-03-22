/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** game.c
*/

#include "game.h"

void game_loop(game_t *game)
{
    display_asset_game(game);
    display_asset_score(game);
    display_tower_atributes(game);
    calculator(game);
    goat_ai(game);
    small_button(game, "II", (Vector4_t){25, 0.75, 25, 15}, &fonc_pause);
    tower_ai(game);
    display_place(game);
    tower_att(game);
    display_tower(game);
    loose_condition(game);
}
