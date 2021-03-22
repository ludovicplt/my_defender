/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-mydefender-ludovic.peltier
** File description:
** music
*/

#ifndef MUSIC_H_
#define MUSIC_H_

#include "game.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>

typedef struct music_s
{
    sfMusic *click_sound;
    sfMusic *mus_easter;
    sfMusic *victoy;
    sfMusic *defeat;
    sfMusic *mus_hub;
    sfMusic *mus_game;
    sfMusic *mus_pause;
} music_t;

#endif /* !MUSIC_H_ */
