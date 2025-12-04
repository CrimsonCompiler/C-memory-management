#include "coord.h"

struct Coordinate new_coord(int x, int y, int z) {
  // ?
  struct Coordinate B = {
    .x = x,
    .y = y,
    .z = z
  };

  return B;
}
