/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** main.c
*/

#include "game.h"
#include <stdio.h>

void *my_calloc(size_t nmemb, size_t size)
{
    void *ptr = malloc(nmemb * size);

    if (ptr)
        memset(ptr, 0, nmemb * size);
    return (ptr);
}

void init_window(game_t *game)
{
    game->window.video = (sfVideoMode){1080, 720, 32};
    game->window.window = sfRenderWindow_create(game->window.video,
            "my_defengoat", sfClose, NULL);
    sfRenderWindow_setFramerateLimit(game->window.window, 60);
    game->clock = sfClock_create();
    game->max = 50;
    game->life = 3;
}

void menu(game_t *game)
{
    display_asset_hub(game);
    display_asset_title(game);
    master_goat(game);
    if (game->asset.stock >= 1)
        display_asset_sunglass(game);
    if (game->asset.stock >= 2)
        display_asset_spleef(game);
    button(game, "PLAY", (Vector4_t){60, 1.5, 700, 300}, &fonc_play);
    button(game, "QUIT", (Vector4_t){60, 1.5, 710, 400}, &fonc_quit);
}

int main(void)
{
    game_t *game = my_calloc(sizeof(game_t), 1);
    const struct tab real_state[5] = {{0, &menu}, {1, &game_loop},
        {2, &paused}, {3, &victory}, {4, &defeat}};

    init_game(game);
    while (sfRenderWindow_isOpen(game->window.window)) {
        while (sfRenderWindow_pollEvent(game->window.window,
                    &game->window.event)) {
            if (game->window.event.type == sfEvtClosed)
                sfRenderWindow_close(game->window.window);
        }
        sfRenderWindow_clear(game->window.window, sfBlack);
        real_state[game->window.state].func(game);
        sfRenderWindow_display(game->window.window);
    }
    destroy_game(game);
    return (0);
}
