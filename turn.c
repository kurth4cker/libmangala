#include "mangala.h"

void
mgl_turn_start (struct mgl_game *game)
{
	game->nrock = *game->iter;
	if (*game->iter > 1) {
		game->nrock--;
		*game->iter = 1;
	} else {
		*game->iter = 0;
	}
}
