#include "graphics.h"
#include <stdio.h>

extern sfRectangleShape *blackPawn(sfFloatRect *pos, int x, int y)
{
    sfRectangleShape *tmp = sfRectangleShape_create();

    sfRectangleShape_setSize(tmp, (sfVector2f){256.0 / 2, 256.0 / 2});
    sfRectangleShape_setFillColor(tmp, sfBlack);
    sfRectangleShape_setOutlineColor(tmp, sfWhite);
    sfRectangleShape_setOutlineThickness(tmp, 1);
    sfRectangleShape_setPosition(tmp, (sfVector2f){pos->left + x, pos->top + y});
    printf("%.2f, %.2f\n", pos->left, pos->top);
    return tmp;
}

extern sfRectangleShape *whitePawn(sfFloatRect *pos, int x, int y)
{
    sfRectangleShape *tmp = sfRectangleShape_create();

    sfRectangleShape_setSize(tmp, (sfVector2f){256.0 / 2, 256.0 / 2});
    sfRectangleShape_setFillColor(tmp, sfWhite);
    sfRectangleShape_setOutlineColor(tmp, sfBlack);
    sfRectangleShape_setOutlineThickness(tmp, 1);
    sfRectangleShape_setPosition(tmp, (sfVector2f){pos->left + x, pos->top + y});
    return tmp;
}