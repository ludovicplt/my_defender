/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-mydefender-ludovic.peltier
** File description:
** win_and_loose
*/

#include "game.h"

void victory(game_t *game)
{
    display_asset_victory(game);
    button(game, "QUIT", (Vector4_t){60, 1.5, 800, 300}, &fonc_quit);
}

void defeat(game_t *game)
{
    display_asset_defeat(game);
    button(game, "RETRY", (Vector4_t){60, 1.5, 770, 500}, &reset);
    button(game, "QUIT", (Vector4_t){60, 1.5, 800, 600}, &fonc_quit);
}

void update_life(game_t *game)
{
    for (int i = 0; i != game->max; i++) {
        sfRectangleShape_setScale(game->enemy[i].red,
            (sfVector2f){(float)game->enemy[i].life / 200, 1});
    }
}

void display_life(game_t *game)
{
    sfSprite_setScale(game->asset.spr_castle, (sfVector2f){0.2, 0.2});
    if (game->life >= 3) {
        sfSprite_setPosition(game->asset.spr_castle, (sfVector2f){900, 100});
        SFRW_DS(game->window.window, game->asset.spr_castle, NULL);
        sfSprite_setPosition(game->asset.spr_castle, (sfVector2f){900, 200});
        SFRW_DS(game->window.window, game->asset.spr_castle, NULL);
        sfSprite_setPosition(game->asset.spr_castle, (sfVector2f){900, 300});
        SFRW_DS(game->window.window, game->asset.spr_castle, NULL);
    } else if (game->life >= 2) {
        sfSprite_setPosition(game->asset.spr_castle, (sfVector2f){900, 200});
        SFRW_DS(game->window.window, game->asset.spr_castle, NULL);
        sfSprite_setPosition(game->asset.spr_castle, (sfVector2f){900, 300});
        SFRW_DS(game->window.window, game->asset.spr_castle, NULL);
    } else {
        sfSprite_setPosition(game->asset.spr_castle, (sfVector2f){900, 300});
        SFRW_DS(game->window.window, game->asset.spr_castle, NULL);
    }
    sfSprite_setScale(game->asset.spr_castle, (sfVector2f){0.3, 0.3});
    sfSprite_setPosition(game->asset.spr_castle, (sfVector2f){750, 600});
    SFRW_DS(game->window.window, game->asset.spr_castle, NULL);
}

void loose_condition(game_t *game)
{
    sfFloatRect lose = sfSprite_getGlobalBounds(game->asset.spr_castle);
    sfFloatRect goat;

    display_life(game);
    for (int i = 0; i != game->max; i++) {
        goat = sfSprite_getGlobalBounds(game->enemy[i].sprite);
        if (sfFloatRect_intersects(&lose, &goat, NULL)) {
            game->life -= 1;
            game->enemy[i].life = -200;
            sfSprite_setPosition(game->enemy[i].sprite,
                (sfVector2f){-1000, -1000});
        }
    }
    if (game->life == 0)
        game->window.state = 4;
}

