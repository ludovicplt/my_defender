/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-mydefender-ludovic.peltier
** File description:
** init_asset2
*/

#include "game.h"

void init_asset_music(game_t *game)
{
    game->music.mus_hub = SFM_CFF("./asset/music/hub_song.ogg");
    game->music.mus_pause = SFM_CFF("./asset/music/pause_song.ogg");
    game->music.mus_game = SFM_CFF("./asset/music/game_song.ogg");
    game->music.click_sound = SFM_CFF("./asset/music/sound_click.ogg");
    game->music.mus_easter = SFM_CFF("./asset/music/easter_song.ogg");
    sfMusic_play(game->music.mus_hub);
    sfMusic_setLoop(game->music.mus_hub, sfTrue);
}

void init_asset_button(game_t *game)
{
    game->asset.text_button = SFT_CFF("./asset/image/button.png", NULL);
    game->asset.text_button2 = SFT_CFF("./asset/image/box.png", NULL);
    game->asset.spr_button = SFS_C();
    game->asset.spr_button2 = SFS_C();
    SFS_ST(game->asset.spr_button, game->asset.text_button, sfTrue);
    SFS_ST(game->asset.spr_button2, game->asset.text_button2, sfTrue);
}

void init_asset_utils(game_t *game)
{
    game->asset.cursor = NULL;

    if ((game->asset.cursor = sfCursor_createFromSystem(sfCursorHand)))
        sfRenderWindow_setMouseCursor(game->window.window, game->asset.cursor);
}

void init_asset_victory(game_t *game)
{
    game->asset.text_back_v = SFT_CFF("./asset/image/victory.png", NULL);
    game->asset.spr_back_v = SFS_C();
    game->asset.spr_satan = SFS_C();
    SFS_ST(game->asset.spr_back_v, game->asset.text_back_v, sfTrue);
    sfSprite_setScale(game->asset.spr_back_v, (sfVector2f){2.4, 2.4});
}

void init_asset_defeat(game_t *game)
{
    game->asset.text_back_d = SFT_CFF("./asset/image/defeat.png", NULL);
    game->asset.text_satan = SFT_CFF("./asset/image/satan.png", NULL);
    game->asset.spr_back_d = SFS_C();
    SFS_ST(game->asset.spr_back_d, game->asset.text_back_d, sfTrue);
    SFS_ST(game->asset.spr_satan, game->asset.text_satan, sfTrue);
    sfSprite_setScale(game->asset.spr_satan, (sfVector2f){0.5, 0.5});
    sfSprite_setPosition(game->asset.spr_satan, (sfVector2f){0, 80});
    sfSprite_setScale(game->asset.spr_back_d, (sfVector2f){0.84, 1});
}