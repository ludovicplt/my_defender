/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-mydefender-ludovic.peltier
** File description:
** display_asset4
*/

#include "game.h"

void set_text_tower(game_t *game, int i)
{
    switch (game->place[i].state) {
        case 0:
            SFS_ST(game->place[i].sprite, game->asset.text_tower_0, sfFalse);
            break;
        case 1:
            SFS_ST(game->place[i].sprite, game->asset.text_tower_1, sfFalse);
            break;
        case 2:
            SFS_ST(game->place[i].sprite,
                game->asset.text_tower_2, sfFalse);
            break;
        case 3:
            SFS_ST(game->place[i].sprite,
                game->asset.text_tower_3, sfFalse);
            break;
        case 4:
            SFS_ST(game->place[i].sprite,
            game->asset.text_tower_4, sfFalse);
            break;
    }
}

void display_place(game_t *game)
{
    for (int i = 0; i != 4; i++) {
        set_text_tower(game, i);
        sfRenderWindow_drawCircleShape(game->window.window,
            game->place[i].area, NULL);
        SFRW_DS(game->window.window, game->place[i].sprite, NULL);
    }
}

void display_tower_atributes(game_t *game)
{
    sfRenderWindow_drawText(game->window.window, game->asset.price1, NULL);
    sfRenderWindow_drawText(game->window.window, game->asset.price2, NULL);
    sfRenderWindow_drawText(game->window.window, game->asset.price3, NULL);
    sfRenderWindow_drawText(game->window.window, game->asset.price4, NULL);
    sfRenderWindow_drawText(game->window.window, game->asset.atribute1, NULL);
    sfRenderWindow_drawText(game->window.window, game->asset.atribute2, NULL);
    sfRenderWindow_drawText(game->window.window, game->asset.atribute3, NULL);
    sfRenderWindow_drawText(game->window.window, game->asset.atribute4, NULL);
}

void display_tower(game_t *game)
{
    for (int i = 0; i != 4; i++)
        SFRW_DS(game->window.window, game->tower[i].sprite, NULL);
}