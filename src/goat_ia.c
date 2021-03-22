/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-mydefender-ludovic.peltier
** File description:
** goat_ia
*/

#include "game.h"

void sprite_direction(game_t *game, int i)
{
    if (game->enemy[i].speed.x < 0)
        game->enemy[i].rect.top = 48;
    if (game->enemy[i].speed.x > 0)
        game->enemy[i].rect.top = 96;
    if (game->enemy[i].speed.y < 0)
        game->enemy[i].rect.top = 144;
    if (game->enemy[i].speed.y > 0)
        game->enemy[i].rect.top = 0;
    sfSprite_setTextureRect(game->enemy[i].sprite,
            game->enemy[i].rect);

}

void sprite_move(game_t *game, int i)
{
    sfVector2f speed = {0};
    float s = 0;
    float second = sfTime_asSeconds(sfClock_getElapsedTime(game->clock));

    s = game->enemy[i].m;
    if ((int)second % 1 == 0) {
        speed = (sfVector2f){game->enemy[i].speed.x * s,
            game->enemy[i].speed.y * s};
        sfSprite_move(game->enemy[i].sprite, speed);
    }
}

void goat_change_direction(game_t *game, int i)
{
    sfFloatRect goat;
    sfFloatRect beacon;

    goat = sfSprite_getGlobalBounds(game->enemy[i].sprite);
    for (int z = 0; z != 4; z++) {
        beacon = sfRectangleShape_getGlobalBounds(game->beacon[z].rect);
        if (sfFloatRect_intersects(&goat, &beacon, NULL)) {
            game->enemy[i].speed = game->beacon[z].vect;
        }
    }

}

void goat_ai(game_t *game)
{
    clock_goat(game);
    for (int i = 0; i != game->max; i++) {
        if (game->enemy[i].life > 0) {
            update_life(game);
            sfRenderWindow_drawRectangleShape(game->window.window,
                game->enemy[i].red, NULL);
            sfRectangleShape_setPosition(game->enemy[i].red,
                sfSprite_getPosition(game->enemy[i].sprite));
            sprite_direction(game, i);
            sprite_move(game, i);
            goat_change_direction(game, i);
            sfRenderWindow_drawSprite(game->window.window,
                game->enemy[i].sprite, NULL);
        }
    }
}
