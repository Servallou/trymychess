/*
** EPITECH PROJECT, 2023
** csfml
** File description:
** main
*/

#include "game.h"
#include <stdio.h>
#include <stdlib.h>

static sfRectangleShape **init_blackPawns(sfFloatRect *area)
{
    sfRectangleShape **blackPawns = malloc(sizeof(sfRectangleShape*) * 16);
    int j = 0;
    int k = 0;
    int size = 128;

    // blackPawns.a1Rook = blackPawn(area, 0, 0);
    // blackPawns.b1Knight = blackPawn(area, 128, 0);
    // blackPawns.c1Bishop = blackPawn(area, 128 * 2, 0);
    // blackPawns.d1King = blackPawn(area, 128 * 3, 0);
    // blackPawns.e1Queen = blackPawn(area, 128 * 4, 0);
    // blackPawns.f1Bishop = blackPawn(area, 128 * 5, 0);
    // blackPawns.g1Knight = blackPawn(area, 128 * 6, 0);
    // blackPawns.h1Rook = blackPawn(area, 128 * 7, 0);

    // blackPawns.a2Pawn = blackPawn(area, 0, 128);
    // blackPawns.b2Pawn = blackPawn(area, 128, 128);
    // blackPawns.c2Pawn = blackPawn(area, 128 * 2, 128);
    // blackPawns.d2Pawn = blackPawn(area, 128 * 3, 128);
    // blackPawns.e2Pawn = blackPawn(area, 128 * 4, 128);
    // blackPawns.f2Pawn = blackPawn(area, 128 * 5, 128);
    // blackPawns.g2Pawn = blackPawn(area, 128 * 6, 128);
    // blackPawns.h2Pawn = blackPawn(area, 128 * 7, 128);
    for (int i = 0; i < 16; i += 1) {
        printf("init_blackPawns: is active %d\n", i);
        blackPawns[i] = blackPawn(area, size * k, j);
        if (i == 7) {
            j += size;
            k = 0;
        }
        k += 1;
    }
    printf("init_blackPawns: complete\n");
    return blackPawns;
}

static sfRectangleShape **init_whitePawns(sfFloatRect *area)
{
    sfRectangleShape **whitePawns = malloc(sizeof(sfRectangleShape*) * 16);
    int j = 6;
    int k = 0;
    int size = 128;

    // whitePawns.a1Rook = whitePawn(area, 0, 128 * 7);
    // whitePawns.b1Knight = whitePawn(area, 128, 128 * 7);
    // whitePawns.c1Bishop = whitePawn(area, 128 * 2, 128 * 7);
    // whitePawns.d1King = whitePawn(area, 128 * 3, 128 * 7);
    // whitePawns.e1Queen = whitePawn(area, 128 * 4, 128 * 7);
    // whitePawns.f1Bishop = whitePawn(area, 128 * 5, 128 * 7);
    // whitePawns.g1Knight = whitePawn(area, 128 * 6, 128 * 7);
    // whitePawns.h1Rook = whitePawn(area, 128 * 7, 128 * 7);

    // whitePawns.a2Pawn = whitePawn(area, 0, 128 * 6);
    // whitePawns.b2Pawn = whitePawn(area, 128, 128 * 6);
    // whitePawns.c2Pawn = whitePawn(area, 128 * 2, 128 * 6);
    // whitePawns.d2Pawn = whitePawn(area, 128 * 3, 128 * 6);
    // whitePawns.e2Pawn = whitePawn(area, 128 * 4, 128 * 6);
    // whitePawns.f2Pawn = whitePawn(area, 128 * 5, 128 * 6);
    // whitePawns.g2Pawn = whitePawn(area, 128 * 6, 128 * 6);
    // whitePawns.h2Pawn = whitePawn(area, 128 * 7, 128 * 6);
    for (int i = 0; i < 16; i += 1) {
        printf("init_whitePawns: is active %d\n", i);
        whitePawns[i] = whitePawn(area, size * k, j);
        if (i == 7) {
            j += size;
            k = 0;
        }
        k += 1;
    }
    printf("init_whitePawns: complete\n");
    return whitePawns;
}

int main()
{
    sfVideoMode mode = {1920, 1080, 32};
    game_t game;
    sfSprite *board = initBoard();
    sfFloatRect area = sfSprite_getGlobalBounds(board);
    game.blackPawns = init_blackPawns(&area);
    game.whitePawns = init_whitePawns(&area);

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
        sfRenderWindow_drawSprite(game.window, board, NULL);
        draw_blackPawn(game.window, game.blackPawns);
        draw_whitePawn(game.window, game.whitePawns);
        sfRenderWindow_display(game.window);
    }
    sfRenderWindow_destroy(game.window);
    return 0;
}
