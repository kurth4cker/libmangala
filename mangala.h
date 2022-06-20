#ifndef MANGALA_H
#define MANGALA_H
#include <stdint.h>

struct mgl_game {
	uint8_t board[14];
	uint8_t *user;
	uint8_t *enemy;
};

void mgl_init (struct mgl_game *game);
#endif /* MANGALA_H */
