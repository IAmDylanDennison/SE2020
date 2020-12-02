/*
  Video_t.cpp

  Test program for class Video
*/

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "Video.hpp"

TEST_CASE( "Test ctor TV 1", "[Video]" ) {

	std::string name = "Breaking Bad";
	int type = Video::TVSHOW;
	int hours = 2;
	int min = 50;

 Video test(name, type, 1, 60, 1);

	REQUIRE(test.title() == "Breaking Bad");
	REQUIRE(test.type() == type);

	test.setLength(hours,min);
	REQUIRE(test.hours() == 2);
	REQUIRE(test.Minutes() == 50);

	REQUIRE(test.episodes() == 1);

}

TEST_CASE( "Test ctor TV 2", "[Video]" ) {

	std::string name = "Family Guy";
	int type = Video::TVSHOW;
	int hours = 0;
	int min = 30;

 Video test(name, type, 1, 60, 1);

	REQUIRE(test.title() == "Family Guy");
	REQUIRE(test.type() == type);

	test.setLength(hours,min);
	REQUIRE(test.hours() != 2);
	REQUIRE(test.Minutes() != 50);

	REQUIRE(test.episodes() == 1);

}

TEST_CASE( "Test ctor TV 3", "[Video]" ) {

        std::string name = "South Park";
        int type = Video::TVSHOW;
        int hours = 0;
        int min = 26;

 Video test(name, type, 3, 23, 10);

        REQUIRE(test.title() == "South Park");
        REQUIRE(test.type() == type);

        test.setLength(hours,min);
        REQUIRE(test.hours() == 0);
        REQUIRE(test.Minutes() == 26);

        REQUIRE(test.episodes() == 10);

}

