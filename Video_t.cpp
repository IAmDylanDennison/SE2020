/*
  Video_t.cpp

  Test program for class Video
*/

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "Video.hpp"

TEST_CASE( "NOP", "[Video]" ) {

}

TEST_CASE("Original Video", "[Video]")
{
	const auto title = "The Original Movie";
	const auto type = Video::ORIGINAL;
	const auto numHours = 2;
	const auto numMinutes = 7;
	const auto numEpisodes = 0;

	auto video = Video(title, type, numHours, numMinutes, numEpisodes);

	// Check that member variables are correct
	REQUIRE(video.title() == title);
	REQUIRE(video.type() == type);
	REQUIRE(video.hours() == numHours);
	REQUIRE(video.Minutes() == numMinutes);
	REQUIRE(video.episodes() == numEpisodes);
}
