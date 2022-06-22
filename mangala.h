#include <stdint.h>

#ifndef MANGALA_H
#define MANGALA_H

struct mgl_game {
	uint8_t board[14];
	uint8_t nrock;
	uint8_t *iter;
};
typedef struct mgl_game mgl_game_t;

void mgl_game_init (struct mgl_game *);
void mgl_turn_start (struct mgl_game *);
#endif /* MANGALA_H */
