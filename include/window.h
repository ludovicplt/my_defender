/*
** EPITECH PROJECT, 2021
** B-MUL-200-RUN-2-1-mydefender-ludovic.peltier
** File description:
** window
*/

#ifndef WINDOW_H_
#define WINDOW_H_

#include "game.h"
#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>

typedef struct window_s
{
    sfRenderWindow *window;
    sfVideoMode video;
    sfEvent event;
    int state;
} window_t;




#endif /* !WINDOW_H_ */
