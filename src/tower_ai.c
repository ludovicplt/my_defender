/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-mydefender-ludovic.peltier
** File description:
** tower_ai
*/

#include "game.h"
#include <stdio.h>

void func_select(game_t *game, int i, int z)
{
    switch (game->place[i].state)
    {
            case 1:
                game->enemy[z].life -= 1;
                sfCircleShape_setFillColor(game->place[i].area,
                    sfColor_fromRGBA(0, 255, 0, 40));
                break;
            case 2:
                game->enemy[z].m = 0.25;
                break;
            case 3:
                game->enemy[z].life -= 3;
                break;
            case 4:
                game->enemy[z].speed.x *= -1.0;
                game->enemy[z].speed.y *= -1.0;
                break;
            default:
                break;
    }
}

void fonc_tower(game_t *game, int i, int z)
{
    sfFloatRect rect = sfSprite_getGlobalBounds(game->enemy[z].sprite);
    sfFloatRect cirl = sfCircleShape_getGlobalBounds(game->place[i].area);
    float time = sfTime_asSeconds(sfClock_getElapsedTime(game->clock));

    if (sfFloatRect_intersects(&rect, &cirl, NULL) == sfTrue
        && (int)time % 5 == 0) {
        func_select(game, i, z);
    }
    sfCircleShape_setFillColor(game->place[i].area,
        sfColor_fromRGBA(255, 0, 0, 40));
}

void tower_att(game_t *game)
{
    for (int i = 0; i != 4; i++) {
        for (int z = 0; z != game->max; z++) {
            fonc_tower(game, i, z);
        }
    }
}

void place_tower(game_t *game)
{
    sfFloatRect rect = {0};
    sfFloatRect rect2 = {0};
    for (int i = 0; i != 4; i++) {
        rect = sfSprite_getGlobalBounds(game->tower[i].sprite);
        for (int z = 0; z != 4; z++) {
            rect2 = sfSprite_getGlobalBounds(game->place[z].sprite);
            if (sfFloatRect_intersects(&rect, &rect2, NULL)
                && game->tower[i].is_moving == 0)
                game->place[z].state = game->tower[i].state;
        }
    }
}

void tower_ai(game_t *game)
{
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window.window);
    sfFloatRect pos = {0};

    for (int i = 0; i != 4; i++) {
        pos = sfSprite_getGlobalBounds(game->tower[i].sprite);
        if (sfFloatRect_contains(&pos, mouse.x, mouse.y)
            && sfMouse_isButtonPressed(sfMouseLeft)) {
                game->tower[i].is_moving = 1;
        } else {
            game->tower[i].is_moving = 0;
        }
        if (game->tower[i].is_moving == 0) {
            place_tower(game);
            sfSprite_setPosition(game->tower[i].sprite, game->tower[i].pos);
        } else {
            sfSprite_setPosition(game->tower[i].sprite,
                (sfVector2f){mouse.x - 40, mouse.y - 72});
        }
    }
}
