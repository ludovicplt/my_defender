/*
** EPITECH PROJECT, 2021
** my_defender
** File description:
** window.h
*/

#ifndef _WINDOW_H_
#define _WINDOW_H_

#include "window.h"
#include "asset.h"
#include "music.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define BIGGER >
#define SMALLER <

//Create
#define SFRW_CRE sfRenderWindow_create
#define SFT_CFF sfTexture_createFromFile
#define SFS_C sfSprite_create
#define SFS_ST sfSprite_setTexture
#define SFS_SP sfSprite_setPosition
#define SFT_SR sfTexture_setRepeated
#define SFS_SS sfSprite_setScale
#define SFM_CFF sfMusic_createFromFile

//Display
#define SFRW_C sfRenderWindow_clear
#define SFRW_DS sfRenderWindow_drawSprite
#define SFRW_DIS sfRenderWindow_display

//Destroy
#define SFS_D sfSprite_destroy
#define SFRW_DES sfRenderWindow_destroy

typedef struct ennemy_s
{
    int type;
    sfSprite *sprite;
    sfVector2f pos;
    sfVector2f speed;
    float m;
    sfIntRect rect;
    int life;
    float time;
    sfRectangleShape *red;
    sfRectangleShape *green;
    int give_money;
} ennemy_t;

typedef struct place_s
{
    sfSprite *sprite;
    int state;
    sfCircleShape *area;
} place_t;

typedef struct beacon_s
{
    sfRectangleShape *rect;
    sfVector2f vect;
}beacon_t;

typedef struct tower_s
{
    sfSprite *sprite;
    int cost;
    sfVector2f pos;
    int is_moving;
    int state;
} tower_t;


typedef struct game_s
{
    window_t window;
    asset_t asset;
    music_t music;
    sfClock *clock;
    ennemy_t *enemy;
    beacon_t *beacon;
    place_t *place;
    tower_t *tower;
    int max;
    int life;
}game_t;

struct tab
{
    int state;
    void (*func)(game_t *game);
};

typedef struct Vector4_s
{
    float size_x;
    float size_y;
    float x;
    float y;
} Vector4_t;

void init_asset_hub(game_t *game);
void init_asset_pause(game_t *game);
void init_asset_game(game_t *game);
void init_asset_enemis(game_t *game);
void init_asset_tower(game_t  *game);
void init_asset_music(game_t *game);
void init_asset_button(game_t *game);
void init_asset_utils(game_t *game);
void init_asset_victory(game_t *game);
void init_asset_defeat(game_t *game);
void generate_ennemy(game_t *game);
void init_asset_title(game_t *game);
void init_asset_easter(game_t *game);
void init_asset_score(game_t *game);
void init_tower_price(game_t *game);
void init_tower_description(game_t *game);
void init_beacon(game_t *game);
void init_place(game_t *game);
void init_circle(game_t *game);
void init_menu_tower(game_t *game);


void display_asset_hub(game_t *game);
void display_asset_pause(game_t *game);
void display_asset_game(game_t *game);
void display_asset_enemis(game_t *game);
void display_asset_tower(game_t *game);
void display_asset_button(game_t *game);
void display_asset_button2(game_t *game);
void display_asset_victory(game_t *game);
void display_asset_defeat(game_t *game);
void display_asset_title(game_t *game);
void display_asset_sunglass(game_t *game);
void display_asset_spleef(game_t *game);
void display_tower_atributes(game_t *game);
void display_asset_score(game_t *game);
void display_place(game_t *game);
void display_tower(game_t *game);


void destroy_asset_hub(game_t *game);
void destroy_asset_pause(game_t *game);
void destroy_asset_game(game_t *game);
void destroy_asset_enemis(game_t *game);
void destroy_asset_tower(game_t *game);
void destroy_asset_music(game_t *game);
void destroy_asset_button(game_t *game);
void destroy_asset_utils(game_t *game);
void destroy_asset_victory(game_t *game);
void destroy_asset_defeat(game_t *game);
void destroy_asset_title(game_t *game);
void destroy_asset_score(game_t *game);
void destroy_asset_easter(game_t *game);
void destroy_tower_atributes(game_t *game);
void destroy_beacon(game_t *game);
void destroy_place(game_t *game);

void button(game_t *game, char *text, Vector4_t pos, void(*fonc)(game_t *game));
void small_button(game_t *game, char *text,
    Vector4_t pos, void(*fonc)(game_t *game));
void menu(game_t *game);
void fonc_menu(game_t *game);
void fonc_play(game_t *game);
void fonc_quit(game_t *game);
void fonc_pause(game_t *game);
void fonc_victory(game_t *game);
void fonc_defeat(game_t *game);
void game_loop(game_t *game);
void paused(game_t *game);
void victory(game_t *game);
void defeat(game_t *game);
void init_window(game_t *game);
void init_game(game_t *game);
void destroy_game(game_t *game);
int my_strlen(const char *str);
void *my_calloc(size_t nmeb, size_t size);
void read_link(game_t *game);
void display_debug(game_t *game);
void master_goat(game_t *game);

void goat_ai(game_t *game);
void tower_ai(game_t *game);
void calculator(game_t *game);
void clock_goat(game_t *game);
void update_life(game_t *game);
void tower_att(game_t *game);
void loose_condition(game_t *game);
void reset(game_t *game);

#endif /* _WINDOW_H_ */
