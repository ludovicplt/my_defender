/*
** EPITECH PROJECT, 2021
** libmy
** File description:
** game.c
*/

#include "game.h"

void small_btn_part(game_t *game, sfText *button, Vector4_t pos, char *text)
{
    sfSprite_setTextureRect(game->asset.spr_button, (sfIntRect){0, 0, 82, 86});
    sfSprite_setScale(game->asset.spr_button2,
            (sfVector2f){pos.size_y, pos.size_y});
    sfText_setString(button, text);
    sfText_setFont(button, game->asset.font);
    sfText_setCharacterSize(button, pos.size_x);
    sfText_setPosition(button, (sfVector2f){pos.x, pos.y});
}

void small_btn_part_two(game_t *game, sfText *button)
{
    display_asset_button2(game);
    sfRenderWindow_drawText(game->window.window, button, NULL);
    sfText_destroy(button);
}

void small_button(game_t *game, char *text, Vector4_t pos,
        void(*fonc)(game_t *game))
{
    sfText *button = sfText_create();
    sfFloatRect position;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window.window);
    sfFloatRect p = {0};

    small_btn_part(game, button, pos, text);
    p = sfText_getGlobalBounds(button);
    sfSprite_setOrigin(game->asset.spr_button2, (sfVector2f){82 / 2, 86 / 2});
    sfSprite_setPosition(game->asset.spr_button2,
            (sfVector2f){p.width / 2 + p.left, p.height / 2 + p.top});
    position = sfSprite_getGlobalBounds(game->asset.spr_button2);
    if ((sfFloatRect_contains(&position,
                    (float)mouse.x, (float)mouse.y) == sfTrue)
            || sfKeyboard_isKeyPressed(sfKeyEscape)) {
        sfText_setColor(button, sfRed);
        fonc(game);
    } else {
        sfText_setColor(button, sfColor_fromRGB(255, 255, 255));
    }
    small_btn_part_two(game, button);
}
