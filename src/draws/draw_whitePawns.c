#include "graphics.h"
#include "typedefs.h"

extern void draw_whitePawn(sfRenderWindow *window, sfRectangleShape **whitePawns)
{
    for (int i = 0; i < 16; i += 1) {
        printf("draw_whitePawn: is active %d\n", i);
        sfRenderWindow_drawRectangleShape(window, whitePawns[i], NULL);
    }
    printf("draw_whitePawn: complete\n");
}
