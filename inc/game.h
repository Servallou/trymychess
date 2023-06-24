#ifndef GAME_H_
    #define GAME_H_

    #include "graphics.h"
    #include "typedefs.h"
    #include "sprites.h"
    #include "draw.h"

// Chaque case fait 128x128. Pour décaler d'une case, ajoutez 128.
// Exemple d'utilisation : blackPawn(area, 128 * nb_case_x, 128 * nb_case_y);
sfRectangleShape *blackPawn(sfFloatRect *area, int x, int y);

// Chaque case fait 128x128. Pour décaler d'une case, ajoutez 128.
// Exemple d'utilisation : whitePawn(area, 128 * nb_case_x, 128 * nb_case_y);
sfRectangleShape *whitePawn(sfFloatRect *area, int x, int y);

#endif /* !GAME_H_ */
