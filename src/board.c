#include "graphics.h"
#include "typedefs.h"
#include <stdio.h>

extern sfSprite *initBoard(void)
{
    sfTexture *texture = sfTexture_createFromFile("./res/img/chessboard.png", NULL);
    sfSprite *sprite = sfSprite_create();
    sfFloatRect area;

    sfSprite_setTexture(sprite, texture, sfTrue);
    area = sfSprite_getLocalBounds(sprite);
    sfSprite_setOrigin(sprite, (sfVector2f){area.width / 2, area.height / 2});
    sfSprite_setPosition(sprite, (sfVector2f){WWIDTH / 2, WHEIGHT / 2});
    sfSprite_setScale(sprite, (sfVector2f){0.5, 0.5});
    return sprite;
}
