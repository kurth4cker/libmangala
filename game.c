#include "mangala.h"

void
mgl_game_init (struct mgl_game *game)
{
	for (int i = 0; i < 14; i++)
		game->board[i] = 4;
	game->iter = game->board;
}
