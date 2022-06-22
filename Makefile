.POSIX:
RANLIB ?= ranlib
OBJ = game.o turn.o

all: libmangala.a
$(OBJ): mangala.h

libmangala.a: $(OBJ)
	$(AR) -rc $@ $^
	$(RANLIB) $@

clean:
	$(RM) libmangala.a $(OBJ)

.PHONY: all clean
