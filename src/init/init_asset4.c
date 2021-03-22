/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-mydefender-ludovic.peltier
** File description:
** init_asset4
*/

#include "game.h"

void init_tower_price(game_t *game)
{
    game->asset.price1 = sfText_create();
    game->asset.price2 = sfText_create();
    game->asset.price3 = sfText_create();
    game->asset.price4 = sfText_create();
    sfText_setString(game->asset.price1, "1 $");
    sfText_setString(game->asset.price2, "10 $");
    sfText_setString(game->asset.price3, "50 $");
    sfText_setString(game->asset.price4, "75 $");
    sfText_setFont(game->asset.price1, game->asset.font2);
    sfText_setFont(game->asset.price2, game->asset.font2);
    sfText_setFont(game->asset.price3, game->asset.font2);
    sfText_setFont(game->asset.price4, game->asset.font2);
    sfText_setPosition(game->asset.price1, (sfVector2f){275, 20});
    sfText_setPosition(game->asset.price2, (sfVector2f){450, 20});
    sfText_setPosition(game->asset.price3, (sfVector2f){625, 20});
    sfText_setPosition(game->asset.price4, (sfVector2f){800, 20});
}

void init_tower_description(game_t *game)
{
    game->asset.atribute1 = sfText_create();
    game->asset.atribute2 = sfText_create();
    game->asset.atribute3 = sfText_create();
    game->asset.atribute4 = sfText_create();
    sfText_setString(game->asset.atribute1, "Basic");
    sfText_setString(game->asset.atribute2, "Slowing");
    sfText_setString(game->asset.atribute3, "Litgning");
    sfText_setString(game->asset.atribute4, "GOD TOWER");
    sfText_setFont(game->asset.atribute1, game->asset.font2);
    sfText_setFont(game->asset.atribute2, game->asset.font2);
    sfText_setFont(game->asset.atribute3, game->asset.font2);
    sfText_setFont(game->asset.atribute4, game->asset.font2);
    sfText_setPosition(game->asset.atribute1, (sfVector2f){275, 50});
    sfText_setPosition(game->asset.atribute2, (sfVector2f){450, 50});
    sfText_setPosition(game->asset.atribute3, (sfVector2f){625, 50});
    sfText_setPosition(game->asset.atribute4, (sfVector2f){800, 50});
}

void init_circle(game_t *game)
{
    for (int i = 0; i != 4; i++) {
        game->place[i].sprite = SFS_C();
        game->place[i].state = 0;
        SFS_ST(game->place[i].sprite, game->asset.text_tower_0, sfTrue);
        game->place[i].area = sfCircleShape_create();
        sfCircleShape_setRadius(game->place[i].area, (float)120);
        sfCircleShape_setFillColor(game->place[i].area,
            sfColor_fromRGBA(255, 0, 0, 40));
        sfSprite_setScale(game->place[i].sprite, (sfVector2f){0.60, 0.60});
    }
}

void init_menu_tower(game_t *game)
{
    game->tower = my_calloc(sizeof(game_t), 4);
    for (int i = 0; i != 4; i++) {
        game->tower[i].sprite = SFS_C();
        game->tower[i].state = i + 1;
        sfSprite_setScale(game->tower[i].sprite, (sfVector2f){0.5, 0.5});
    }
    SFS_ST(game->tower[0].sprite, game->asset.text_tower_1, sfTrue);
    SFS_ST(game->tower[1].sprite, game->asset.text_tower_2, sfTrue);
    SFS_ST(game->tower[2].sprite, game->asset.text_tower_3, sfTrue);
    SFS_ST(game->tower[3].sprite, game->asset.text_tower_4, sfTrue);
    game->tower[0].pos = (sfVector2f){200, -20};
    game->tower[1].pos = (sfVector2f){375, -20};
    game->tower[2].pos = (sfVector2f){550, -20};
    game->tower[3].pos = (sfVector2f){725, -20};
}