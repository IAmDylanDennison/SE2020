/*
  Video_t.cpp

  Test program for class Video
*/

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "Video.hpp"

TEST_CASE( "NOP", "[Video]" ) {

}

TEST_CASE("Empty Original Video", "[Video]")
{
	const auto title = "";
	const auto type = Video::ORIGINAL;
	const auto numHours = 0;
	const auto numMinutes = 0;
	const auto numEpisodes = 0;

	auto video = Video(title, type, numHours, numMinutes, numEpisodes);

	// Check that member variables are correct
	REQUIRE(video.title() == title);
	REQUIRE(video.type() == type);
	REQUIRE(video.hours() == numHours);
	REQUIRE(video.Minutes() == numMinutes);
	REQUIRE(video.episodes() == numEpisodes);
}

TEST_CASE("Original Video with Title", "[Video]")
{
        const auto title = "The Original Movie 2";
        const auto type = Video::ORIGINAL;
        const auto numHours = 0;
        const auto numMinutes = 0;
        const auto numEpisodes = 0;

        auto video = Video(title, type, numHours, numMinutes, numEpisodes);

        // Check that member variables are correct
        REQUIRE(video.title() == title);
        REQUIRE(video.type() == type);
        REQUIRE(video.hours() == numHours);
        REQUIRE(video.Minutes() == numMinutes);
        REQUIRE(video.episodes() == numEpisodes);
}

TEST_CASE("Original Video with Time", "[Video]")
{
        const auto title = "The Unoriginal Documentary";
        const auto type = Video::ORIGINAL;
        const auto numHours = 1;
        const auto numMinutes = 23;
        const auto numEpisodes = 0;

        auto video = Video(title, type, numHours, numMinutes, numEpisodes);

        // Check that member variables are correct
        REQUIRE(video.title() == title);
        REQUIRE(video.type() == type);
        REQUIRE(video.hours() == numHours);
        REQUIRE(video.Minutes() == numMinutes);
        REQUIRE(video.episodes() == numEpisodes);
}

TEST_CASE("Original Video with Episodes", "[Video]")
{
        const auto title = "Cool Original Show";
        const auto type = Video::ORIGINAL;
        const auto numHours = 1;
        const auto numMinutes = 20;
        const auto numEpisodes = 10;

        auto video = Video(title, type, numHours, numMinutes, numEpisodes);

        // Check that member variables are correct
        REQUIRE(video.title() == title);
        REQUIRE(video.type() == type);
        REQUIRE(video.hours() == numHours);
        REQUIRE(video.Minutes() == numMinutes);
        REQUIRE(video.episodes() == numEpisodes);
}

