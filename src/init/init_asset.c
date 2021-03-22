/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** init_asset.c
*/

#include "game.h"

void init_asset_hub(game_t *game)
{
    game->asset.text_goat_hub = SFT_CFF("./asset/image/my_goat.png", NULL);
    game->asset.text_back_hub = SFT_CFF("./asset/image/menu.jpg", NULL);
    game->asset.spr_goat_hub = SFS_C();
    game->asset.spr_back_hub = SFS_C();
    game->asset.font = sfFont_createFromFile("./asset/font/minecraft.otf");
    SFS_ST(game->asset.spr_goat_hub, game->asset.text_goat_hub, sfTrue);
    SFS_ST(game->asset.spr_back_hub, game->asset.text_back_hub, sfTrue);
    SFS_SS(game->asset.spr_goat_hub, (sfVector2f){0.75, 0.75});
    SFS_SS(game->asset.spr_back_hub, (sfVector2f){1.83, 1.85});
    SFS_SP(game->asset.spr_goat_hub, (sfVector2f){0, 370});
}

void init_asset_pause(game_t *game)
{
    game->asset.text_back_pause = SFT_CFF("./asset/image/back_pause.jpg", NULL);
    game->asset.spr_back_pause = SFS_C();
    SFS_ST(game->asset.spr_back_pause, game->asset.text_back_pause, sfTrue);
}

void init_asset_game(game_t *game)
{
    game->asset.text_map = SFT_CFF("./asset/image/defender.jpg", NULL);
    game->asset.text_coin = SFT_CFF("./asset/image/coin.png", NULL);
    game->asset.text_castle = SFT_CFF("./asset/image/castle.png", NULL);
    game->asset.text_wood = SFT_CFF("./asset/image/wood.png", NULL);
    game->asset.text_tower_0 = SFT_CFF("./asset/image/tower0.png", NULL);
    game->asset.spr_map = SFS_C();
    game->asset.spr_coin = SFS_C();
    game->asset.spr_castle = SFS_C();
    game->asset.spr_wood = SFS_C();
    SFS_ST(game->asset.spr_map, game->asset.text_map, sfTrue);
    SFS_ST(game->asset.spr_coin, game->asset.text_coin, sfTrue);
    SFS_ST(game->asset.spr_castle, game->asset.text_castle, sfTrue);
    SFS_ST(game->asset.spr_wood, game->asset.text_wood, sfTrue);
    sfSprite_setScale(game->asset.spr_map, (sfVector2f){0.53, 0.46});
    sfSprite_setScale(game->asset.spr_coin, (sfVector2f){0.1, 0.1});
    sfSprite_setScale(game->asset.spr_castle, (sfVector2f){0.3, 0.3});
    sfSprite_setScale(game->asset.spr_wood, (sfVector2f){6, 2.5});
    sfSprite_setPosition(game->asset.spr_coin, (sfVector2f){1000, 20});
    sfSprite_setPosition(game->asset.spr_castle, (sfVector2f){750, 600});
    sfSprite_setPosition(game->asset.spr_wood, (sfVector2f){200, 0});
}

void init_asset_enemis(game_t *game)
{
    game->asset.text_goat_1 = SFT_CFF("./asset/image/goat1.png", NULL);
    game->asset.text_goat_2 = SFT_CFF("./asset/image/goat2.png", NULL);
    game->asset.text_goat_3 = SFT_CFF("./asset/image/goat3.png", NULL);
    game->asset.text_goat_b = SFT_CFF("./asset/image/goatb.png", NULL);
    game->asset.spr_goat_1 = SFS_C();
    game->asset.spr_goat_2 = SFS_C();
    game->asset.spr_goat_3 = SFS_C();
    game->asset.spr_goat_b = SFS_C();
    SFS_ST(game->asset.spr_goat_1, game->asset.text_goat_1, sfTrue);
    SFS_ST(game->asset.spr_goat_2, game->asset.text_goat_2, sfTrue);
    SFS_ST(game->asset.spr_goat_3, game->asset.text_goat_3, sfTrue);
    SFS_ST(game->asset.spr_goat_b, game->asset.text_goat_b, sfTrue);
}

void init_asset_tower(game_t  *game)
{
    game->asset.text_tower_1 = SFT_CFF("./asset/image/tower1.png", NULL);
    game->asset.text_tower_2 = SFT_CFF("./asset/image/tower2.png", NULL);
    game->asset.text_tower_3 = SFT_CFF("./asset/image/tower3.png", NULL);
    game->asset.text_tower_4 = SFT_CFF("./asset/image/tower4.png", NULL);
    game->asset.spr_tower_1 = SFS_C();
    game->asset.spr_tower_2 = SFS_C();
    game->asset.spr_tower_3 = SFS_C();
    game->asset.spr_tower_4 = SFS_C();
    SFS_ST(game->asset.spr_tower_1, game->asset.text_tower_1, sfTrue);
    SFS_ST(game->asset.spr_tower_2, game->asset.text_tower_2, sfTrue);
    SFS_ST(game->asset.spr_tower_3, game->asset.text_tower_3, sfTrue);
    SFS_ST(game->asset.spr_tower_4, game->asset.text_tower_4, sfTrue);
    sfSprite_setScale(game->asset.spr_tower_1, (sfVector2f){0.5, 0.5});
    sfSprite_setScale(game->asset.spr_tower_2, (sfVector2f){0.5, 0.5});
    sfSprite_setScale(game->asset.spr_tower_3, (sfVector2f){0.5, 0.5});
    sfSprite_setScale(game->asset.spr_tower_4, (sfVector2f){0.5, 0.5});
    SFS_SP(game->asset.spr_tower_1, (sfVector2f){200, -20});
    SFS_SP(game->asset.spr_tower_2, (sfVector2f){375, -20});
    SFS_SP(game->asset.spr_tower_3, (sfVector2f){550, -20});
    SFS_SP(game->asset.spr_tower_4, (sfVector2f){725, -20});
}
