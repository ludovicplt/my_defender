/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** init_ennemy.c
*/

#include "game.h"

void generate_ennemy(game_t *game)
{
    game->enemy = my_calloc(sizeof(ennemy_t), game->max);
    for (int i = 0;   i < game->max; i++) {
        game->enemy[i].type = 1;
        game->enemy[i].life = 200;
        game->enemy[i].sprite = SFS_C();
        game->enemy[i].rect = (sfIntRect){0, 48, 48, 48};
        game->enemy[i].pos = (sfVector2f){90, (i * -48) * 4 - (i * 2)};
        game->enemy[i].m = 0.50;
        game->enemy[i].speed = (sfVector2f){0, 1};
        game->enemy[i].red = sfRectangleShape_create();
        sfRectangleShape_setFillColor(game->enemy[i].red, sfRed);
        sfRectangleShape_setSize(game->enemy[i].red, (sfVector2f){48, 10});
        sfSprite_setPosition(game->enemy[i].sprite, game->enemy[i].pos);
        SFS_ST(game->enemy[i].sprite, game->asset.text_goat_1, sfTrue);
    }
}
