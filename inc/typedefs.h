#ifndef TYPEDEFS_H_
    #define TYPEDEFS_H_

    #include "graphics.h"

    #define WWIDTH 1920
    #define WHEIGHT 1080

typedef struct sprite_s {
    sfSprite *map;
    sfSprite *player;
    sfImage *hitbox;
} sprite_t;

typedef struct boardPawn_s {
    sfRectangleShape *h2Pawn;
    sfRectangleShape *g2Pawn;
    sfRectangleShape *f2Pawn;
    sfRectangleShape *e2Pawn;
    sfRectangleShape *d2Pawn;
    sfRectangleShape *c2Pawn;
    sfRectangleShape *b2Pawn;
    sfRectangleShape *a2Pawn;
    sfRectangleShape *h1Rook;
    sfRectangleShape *g1Knight;
    sfRectangleShape *f1Bishop;
    sfRectangleShape *e1Queen;
    sfRectangleShape *d1King;
    sfRectangleShape *c1Bishop;
    sfRectangleShape *b1Knight;
    sfRectangleShape *a1Rook;
} boardPawn_t;

typedef struct music_s {
    sfMusic *menu_music;
    sfMusic *ingame_music;
    sfSoundStatus status;
} music_t;

typedef struct game_s {
    sprite_t sprite;
    sfIntRect rect;
    sfClock *clock;
    sfEvent event;
    sfRenderWindow *window;
    music_t music;
    sfText *version;
} game_t;

#endif /* !TYPEDEFS_H_ */
