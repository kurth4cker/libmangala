.POSIX:
RANLIB ?= ranlib
OBJ = game.o

all: libmangala.a
$(OBJ): mangala.h

libmangala.a: $(OBJ)
	$(AR) -rc $@ $^
	$(RANLIB) $@

clean:
	$(RM) libmangala.a $(OBJ)

.PHONY: all clean
