#ifndef DRAW_H_
    #define DRAW_H_

    #include "graphics.h"
    #include "typedefs.h"

void draw_whitePawn(sfRenderWindow *window, boardPawn_t *whitePawns);

void draw_blackPawn(sfRenderWindow *window, boardPawn_t *blackPawns);

#endif /* !DRAW_H_ */
