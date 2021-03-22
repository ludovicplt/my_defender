/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-mydefender-ludovic.peltier
** File description:
** sprite
*/

#ifndef SPRITE_H_
#define SPRITE_H_

#include "game.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>

typedef struct asset_s
{
    sfTexture *text_coin;
    sfSprite *spr_coin;
    sfTexture *text_castle;
    sfSprite *spr_castle;
    sfTexture *text_wood;
    sfSprite *spr_wood;

    sfIntRect goat_rect;
    sfTexture *text_goat_1;
    sfSprite *spr_goat_1;
    sfTexture *text_goat_2;
    sfSprite *spr_goat_2;
    sfTexture *text_goat_3;
    sfSprite *spr_goat_3;
    sfTexture *text_goat_b;
    sfSprite *spr_goat_b;

    sfTexture *text_tower_0;
    sfIntRect tower_rect;
    sfTexture *text_tower_1;
    sfSprite *spr_tower_1;
    sfText *atribute1;
    sfText *price1;
    sfTexture *text_tower_2;
    sfSprite *spr_tower_2;
    sfText *atribute2;
    sfText *price2;
    sfTexture *text_tower_3;
    sfSprite *spr_tower_3;
    sfText *atribute3;
    sfText *price3;
    sfTexture *text_tower_4;
    sfSprite *spr_tower_4;
    sfText *atribute4;
    sfText *price4;

    sfTexture *text_map;
    sfSprite *spr_map;


    sfIntRect hub_goat_rect;
    sfTexture *text_back_hub;
    sfSprite *spr_back_hub;
    sfTexture *text_goat_hub;
    sfSprite *spr_goat_hub;
    sfTexture *text_spleef;
    sfSprite *spr_spleef;
    sfTexture *text_sunglass;
    sfSprite *spr_sunglass;


    sfTexture *text_back_pause;
    sfSprite *spr_back_pause;


    sfTexture *text_back_v;
    sfSprite *spr_back_v;


    sfTexture *text_back_d;
    sfSprite *spr_back_d;
    sfTexture *text_satan;
    sfSprite *spr_satan;

    sfTexture *text_button;
    sfSprite *spr_button;
    sfTexture *text_button2;
    sfSprite *spr_button2;

    sfFont *font;
    sfFont *font2;
    sfText *title;
    sfText *score;
    sfCursor *cursor;
    int stock;
    int money;
    float last_second;

    sfRectangleShape *square1;
    sfRectangleShape *square2;
    sfRectangleShape *square3;
    sfRectangleShape *square4;


}asset_t;

#endif /* !SPRITE_H_ */
