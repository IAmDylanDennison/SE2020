/*
  Video_t.cpp

  Test program for class Video
*/

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "Video.hpp"

TEST_CASE( "NOP", "[Video]" ) {

}

TEST_CASE( "Constructor with MOVIE", "[Video]" ){
  int movie = Video::MOVIE;
    Video vid("Indiana Jones", movie, 2, 1, 0);
    REQUIRE(vid.type() == movie);
}
