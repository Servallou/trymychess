#include "graphics.h"
#include "typedefs.h"

extern void draw_whitePawn(sfRenderWindow *window, boardPawn_t *whitePawns)
{
    sfRenderWindow_drawRectangleShape(window, whitePawns->a1Rook, NULL);
    sfRenderWindow_drawRectangleShape(window, whitePawns->b1Knight, NULL);
    sfRenderWindow_drawRectangleShape(window, whitePawns->c1Bishop, NULL);
    sfRenderWindow_drawRectangleShape(window, whitePawns->d1King, NULL);
    sfRenderWindow_drawRectangleShape(window, whitePawns->e1Queen, NULL);
    sfRenderWindow_drawRectangleShape(window, whitePawns->f1Bishop, NULL);
    sfRenderWindow_drawRectangleShape(window, whitePawns->g1Knight, NULL);
    sfRenderWindow_drawRectangleShape(window, whitePawns->h1Rook, NULL);
    sfRenderWindow_drawRectangleShape(window, whitePawns->a2Pawn, NULL);
    sfRenderWindow_drawRectangleShape(window, whitePawns->b2Pawn, NULL);
    sfRenderWindow_drawRectangleShape(window, whitePawns->c2Pawn, NULL);
    sfRenderWindow_drawRectangleShape(window, whitePawns->d2Pawn, NULL);
    sfRenderWindow_drawRectangleShape(window, whitePawns->e2Pawn, NULL);
    sfRenderWindow_drawRectangleShape(window, whitePawns->f2Pawn, NULL);
    sfRenderWindow_drawRectangleShape(window, whitePawns->g2Pawn, NULL);
    sfRenderWindow_drawRectangleShape(window, whitePawns->h2Pawn, NULL);
}
