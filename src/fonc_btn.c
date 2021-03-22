/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** fonc_btn.c
*/

#include "game.h"

void fonc_play(game_t *game)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        sfMusic_stop(game->music.mus_hub);
        sfMusic_stop(game->music.mus_pause);
        sfMusic_stop(game->music.click_sound);
        sfMusic_play(game->music.click_sound);
        sfMusic_play(game->music.mus_game);
        sfMusic_setLoop(game->music.mus_game, sfTrue);
        game->window.state = 1;
    }
}

void fonc_pause(game_t *game)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)
        || sfKeyboard_isKeyPressed(sfKeyEscape)) {
        sfMusic_stop(game->music.mus_game);
        sfMusic_stop(game->music.click_sound);
        sfMusic_play(game->music.click_sound);
        sfMusic_play(game->music.mus_pause);
        sfMusic_setLoop(game->music.mus_pause, sfTrue);
        game->window.state = 2;
    }
}

void fonc_quit(game_t *game)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        sfRenderWindow_close(game->window.window);
    }
}

void fonc_victory(game_t *game)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        sfMusic_stop(game->music.mus_hub);
        sfMusic_stop(game->music.click_sound);
        sfMusic_play(game->music.click_sound);
        game->window.state = 3;
    }
}

void fonc_defeat(game_t *game)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)) {
        sfMusic_stop(game->music.mus_hub);
        sfMusic_stop(game->music.click_sound);
        sfMusic_play(game->music.click_sound);
        game->window.state = 4;
    }
}