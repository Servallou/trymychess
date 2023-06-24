#include "graphics.h"
#include "typedefs.h"

extern void draw_blackPawn(sfRenderWindow *window, boardPawn_t *blackPawns)
{
    sfRenderWindow_drawRectangleShape(window, blackPawns->a1Rook, NULL);
    sfRenderWindow_drawRectangleShape(window, blackPawns->b1Knight, NULL);
    sfRenderWindow_drawRectangleShape(window, blackPawns->c1Bishop, NULL);
    sfRenderWindow_drawRectangleShape(window, blackPawns->d1King, NULL);
    sfRenderWindow_drawRectangleShape(window, blackPawns->e1Queen, NULL);
    sfRenderWindow_drawRectangleShape(window, blackPawns->f1Bishop, NULL);
    sfRenderWindow_drawRectangleShape(window, blackPawns->g1Knight, NULL);
    sfRenderWindow_drawRectangleShape(window, blackPawns->h1Rook, NULL);
    sfRenderWindow_drawRectangleShape(window, blackPawns->a2Pawn, NULL);
    sfRenderWindow_drawRectangleShape(window, blackPawns->b2Pawn, NULL);
    sfRenderWindow_drawRectangleShape(window, blackPawns->c2Pawn, NULL);
    sfRenderWindow_drawRectangleShape(window, blackPawns->d2Pawn, NULL);
    sfRenderWindow_drawRectangleShape(window, blackPawns->e2Pawn, NULL);
    sfRenderWindow_drawRectangleShape(window, blackPawns->f2Pawn, NULL);
    sfRenderWindow_drawRectangleShape(window, blackPawns->g2Pawn, NULL);
    sfRenderWindow_drawRectangleShape(window, blackPawns->h2Pawn, NULL);
}
