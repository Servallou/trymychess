/*
** EPITECH PROJECT, 2023
** csfml
** File description:
** main
*/

#include "game.h"

int main()
{
    sfVideoMode mode = {1920, 1080, 32};
    game_t game;

    game.window = sfRenderWindow_create(mode, "trymychess", sfResize | sfClose, NULL);
    if (!game.window)
        return 84;
    while (sfRenderWindow_isOpen(game.window))
    {
        while (sfRenderWindow_pollEvent(game.window, &game.event))
        {
            if (game.event.type == sfEvtClosed)
                sfRenderWindow_close(game.window);
        }
        sfRenderWindow_clear(game.window, sfWhite);
        sfRenderWindow_display(game.window);
    }
    sfRenderWindow_destroy(game.window);
    return 0;
}
