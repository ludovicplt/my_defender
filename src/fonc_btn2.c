/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-mydefender-ludovic.peltier
** File description:
** fonc_btn2
*/

#include "game.h"

void fonc_menu(game_t *game)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        sfMusic_stop(game->music.mus_pause);
        sfMusic_stop(game->music.click_sound);
        sfMusic_play(game->music.click_sound);
        sfMusic_play(game->music.mus_hub);
        sfMusic_setLoop(game->music.mus_pause, sfTrue);
        game->window.state = 0;
        game->life = 3;
        for (int i = 0; i != game->max; i++) {
            game->enemy[i].life = 200;
            game->enemy[i].speed = (sfVector2f){0, 1};
            game->enemy[i].time = 0;
            sfSprite_setPosition(game->enemy[i].sprite,
                (sfVector2f){90, (i * -48) * 4 - (i * 2)});
        }
        for (int i = 0; i != 4; i++) {
            game->place[i].state = 0;
        }
        game->asset.money = 0;
    }
}

void reset(game_t *game)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        game->window.state = 1;
        game->life = 3;
        for (int i = 0; i != game->max; i++) {
            game->enemy[i].life = 200;
            game->enemy[i].speed = (sfVector2f){0, 1};
            game->enemy[i].time = 0;
            sfSprite_setPosition(game->enemy[i].sprite,
                (sfVector2f){90, (i * -48) * 4 - (i * 2)});
        }
        for (int i = 0; i != 4; i++) {
            game->place[i].state = 0;
        }
        game->asset.money = 0;
    }
}

