/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-mydefender-ludovic.peltier
** File description:
** init_asset_3
*/

#include "game.h"

void init_asset_title(game_t *game)
{
    game->asset.font2 = sfFont_createFromFile("./asset/font/title.ttf");
    game->asset.title = sfText_create();
    sfText_setString(game->asset.title,
    "MY NEW SUPER DEFENDGOAT TOWER SIMULATOR 3D PREMIUM EDITION GALAXY DEMS");
    sfText_setFont(game->asset.title, game->asset.font2);
    sfText_setScale(game->asset.title, (sfVector2f){1.2, 2});
    sfText_setPosition(game->asset.title, (sfVector2f){20, 100});
}

void init_asset_score(game_t *game)
{
    game->asset.score = sfText_create();
    sfText_setString(game->asset.score, "0");
    sfText_setFont(game->asset.score, game->asset.font2);
    sfText_setPosition(game->asset.score, (sfVector2f){400, 0});
}

void init_asset_easter(game_t *game)
{
    game->asset.text_sunglass = SFT_CFF("./asset/image/sunglass.png", NULL);
    game->asset.text_spleef = SFT_CFF("./asset/image/spleef.png", NULL);
    game->asset.spr_sunglass = SFS_C();
    game->asset.spr_spleef = SFS_C();
    SFS_ST(game->asset.spr_sunglass, game->asset.text_sunglass, sfTrue);
    SFS_ST(game->asset.spr_spleef, game->asset.text_spleef, sfTrue);
}

void init_place(game_t *game)
{
    game->place = my_calloc(sizeof(place_t), 4);
    init_circle(game);
    sfSprite_setPosition(game->place[0].sprite, (sfVector2f){135, 320});
    sfCircleShape_setPosition(game->place[0].area,
        (sfVector2f){135 - 70, 320 + 30});
    sfCircleShape_setPosition(game->place[1].area,
        (sfVector2f){370 - 70, 320 + 30});
    sfCircleShape_setPosition(game->place[2].area,
        (sfVector2f){510 - 70, 130 + 30});
    sfCircleShape_setPosition(game->place[3].area,
        (sfVector2f){760 - 70, 130 + 30});
    sfSprite_setPosition(game->place[1].sprite, (sfVector2f){370, 320});
    sfSprite_setPosition(game->place[2].sprite, (sfVector2f){510, 130});
    sfSprite_setPosition(game->place[3].sprite, (sfVector2f){760, 130});
}

void init_beacon(game_t *game)
{
    game->beacon = my_calloc(sizeof(beacon_t), 4);
    for (int i = 0; i != 4; i++) {
        game->beacon[i].rect = sfRectangleShape_create();
        sfRectangleShape_setFillColor(game->beacon[i].rect, sfBlack);
        sfRectangleShape_setSize(game->beacon[i].rect, (sfVector2f){50, 50});
    }
    sfRectangleShape_setPosition(game->beacon[0].rect, (sfVector2f){85, 550});
    game->beacon[0].vect = (sfVector2f){1, 0};
    game->beacon[1].vect = (sfVector2f){0, -1};
    game->beacon[2].vect = (sfVector2f){1, 0};
    game->beacon[3].vect = (sfVector2f){0, 1};
    sfRectangleShape_setPosition(game->beacon[1].rect, (sfVector2f){515, 500});
    sfRectangleShape_setPosition(game->beacon[2].rect, (sfVector2f){460, 140});
    sfRectangleShape_setPosition(game->beacon[3].rect, (sfVector2f){900, 190});
}