/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** pause.c
*/

#include "game.h"

void paused(game_t *game)
{
    display_asset_pause(game);
    button(game, "Continue ?", (Vector4_t){50, 1.5, 500, 500}, &fonc_play);
    button(game, "Menu", (Vector4_t){50, 1.5, 500, 600}, &fonc_menu);
    button(game, "Retry", (Vector4_t){50, 1.5, 500, 400}, &reset);
}
