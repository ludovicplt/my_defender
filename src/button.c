/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** button.c
*/

#include <game.h>

void button_part_two(game_t *game, sfText *button)
{
    display_asset_button(game);
    sfRenderWindow_drawText(game->window.window, button, NULL);
    sfText_destroy(button);
}

void button_part(game_t *game, sfText *button, Vector4_t pos, char *text)
{
    sfSprite_setTextureRect(game->asset.spr_button, (sfIntRect){0, 0, 281, 71});
    sfSprite_setScale(game->asset.spr_button,
            (sfVector2f){pos.size_y, pos.size_y});
    sfText_setString(button, text);
    sfText_setFont(button, game->asset.font);
    sfText_setCharacterSize(button, pos.size_x);
    sfText_setPosition(button, (sfVector2f){pos.x, pos.y});
}

void button(game_t *game, char *text, Vector4_t pos, void(*fonc)(game_t *game))
{
    sfText *button = sfText_create();
    sfFloatRect position;
    sfVector2i mouse = sfMouse_getPositionRenderWindow(game->window.window);

    button_part(game, button, pos, text);
    position = sfText_getGlobalBounds(button);
    sfSprite_setOrigin(game->asset.spr_button, (sfVector2f){281 / 2, 60 / 2});
    sfSprite_setPosition(game->asset.spr_button,
            (sfVector2f){position.width / 2 + position.left,
            position.height / 2 + position.top});
    position = sfSprite_getGlobalBounds(game->asset.spr_button);
    if (sfFloatRect_contains(&position, (float)mouse.x,
                (float)mouse.y) == sfTrue) {
        sfText_setColor(button, sfRed);
        fonc(game);
    } else {
        sfText_setColor(button, sfColor_fromRGB(255, 255, 255));
    }
    button_part_two(game, button);
}
