#include "graphics.h"
#include "typedefs.h"

extern void draw_blackPawn(sfRenderWindow *window, sfRectangleShape **blackPawns)
{
    for (int i = 0; i < 16; i += 1) {
        printf("draw_blackPawn: is active %d\n", i);
        sfRenderWindow_drawRectangleShape(window, blackPawns[i], NULL);
    }
    printf("draw_blackPawn: complete\n");
}
