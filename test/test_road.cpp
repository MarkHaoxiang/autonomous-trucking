#define private public
#define protected public

#include <catch2/catch_test_macros.hpp>
#include <catch2/matchers/catch_matchers_floating_point.hpp>

#include "road.h"


TEST_CASE( "Straight road is correctly instantiated", "[straight road]" ) {
    Road* test_road_straight = new Road(Point2d(1,1),Point2d(2,3));
    CHECK(test_road_straight->ax == 0.0);
    CHECK(test_road_straight->bx == 0.0);
    CHECK(test_road_straight->cx == 1.0);
    CHECK(test_road_straight->dx == 1.0);
    CHECK_THAT(test_road_straight->get_position(0.74).x,Catch::Matchers::WithinAbs(1.74, 0.000001));
    CHECK_THAT(test_road_straight->get_position(0.5).y,Catch::Matchers::WithinAbs(2, 0.000001));
    CHECK_THROWS(test_road_straight->get_position(1.5));
}

TEST_CASE("Curved road is correctly instantiated", "[curved road]") { 
    Road* test_road_curved = new Road(Point2d(0,1),Point2d(1,2),Point2d(0,0),Point2d(2,2));
    CHECK(test_road_curved->get_position(0).x == 0);
    CHECK(test_road_curved->get_position(1).y == 2);
}