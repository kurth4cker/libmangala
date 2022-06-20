#include "mangala.h"

void
mgl_init (struct mgl_game *game)
{
	for (int i = 0; i < 14; i++)
		game->board[i] = 4;
	game->board[6] = 0;
	game->board[13] = 0;
}
