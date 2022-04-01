#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include <cmath>

TEST_CASE("Task A") {
  Coord3D pointP = {0, 0, 0};
  CHECK(length(&pointP) == 0);
    pointP = {10, 20, 30};
  CHECK(length(&pointP) == sqrt(10*10 + 20*20 + 30*30));
    pointP = {2, 2, 2};
}

TEST_CASE("Task B") {
  Coord3D pointP = {10, 20, 30};
  Coord3D pointQ = {-20, 21, -22};
  CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointP);
    pointP = {0, 10 ,0};
  CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointQ);
    pointQ = {1000, 20, 0};
  CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointQ);
}

TEST_CASE("Task C") {
  Coord3D pointP = {10, 10, 10};
  Coord3D pointQ = {10, 10, 10};
  CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointP);
  CHECK(fartherFromOrigin(&pointP, &pointQ) != &pointQ);
    pointP = {10, -20, 30};
    pointQ = {-30, 20, -10};
  CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointP);
  CHECK(fartherFromOrigin(&pointP, &pointQ) != &pointQ);
}

TEST_CASE("Task D") {
  Coord3D pos = {0, 0, 100.0};
  Coord3D vel = {1, -5, 0.2};
  move(&pos, &vel, 2.0);
  CHECK((pos.x == 2 && pos.y == -10 && pos.z == 100.4));

  pos = {0, 0, 0};
  vel = {5, 20, -10};
  move(&pos, &vel, 10.0);
  CHECK((pos.x == 50 && pos.y == 200 && pos.z == -100));

}

TEST_CASE("Task E") {
  Coord3D * ppos = createCoord3D(13, 23, 65);
  CHECK((ppos->x==13 && ppos->y == 23 && ppos->z==65));
  Coord3D * pvel = createCoord3D(1, -5, 0.2);
  CHECK((pvel->x==1 && pvel->y == -5 && pvel->z==0.2));

  ppos = createCoord3D(10, 20, 30);
  CHECK(length(ppos) == sqrt(10*10+20*20+30*30));
  
  deleteCoord3D(ppos);
  deleteCoord3D(pvel);
}