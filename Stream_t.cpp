/*
0;136;0c  Stream_t.cpp

  Test program for class Stream
*/

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "Stream.hpp"

TEST_CASE( "Stream with TV Show, no Viewings", "[Stream]" )
{
	auto title = "Sons of Anarchy";
        Duration time(0,40);
	auto numEpisodes = 20;

	TVShow video(title, time, numEpisodes);

	auto numViewings = 0;

	Stream stream(new TVShow(video), numViewings);

	// Verify video is correct
	auto videoTest = stream.video();

	REQUIRE(videoTest->title() == title);
	REQUIRE(videoTest->getLength() == time);
	REQUIRE(videoTest->episodes() == numEpisodes);

	// Verify correct number of viewings
	REQUIRE(stream.viewings() == numViewings);
}

TEST_CASE( "Stream with TV Show, 1 viewing", "[Stream]" )
{
        auto title = "Sons of Anarchy";
	Duration time(0,40);
        auto numEpisodes = 20;

        TVShow video(title, time, numEpisodes);

        auto numViewings = 1;

        Stream stream(new TVShow(video), numViewings);

        // Verify video is correct
        auto videoTest = stream.video();

        REQUIRE(videoTest->title() == title);
        REQUIRE(videoTest->getLength() == time);
        REQUIRE(videoTest->episodes() == numEpisodes);

        // Verify correct number of viewings
        REQUIRE(stream.viewings() == numViewings);
}

TEST_CASE( "Stream with TV Show, 100 viewings", "[Stream]" )
{
        auto title = "Sons of Anarchy";
        Duration time(0,40);
        auto numEpisodes = 20;

        TVShow video(title, time, numEpisodes);

        auto numViewings = 100;

        Stream stream(new TVShow(video), numViewings);

        // Verify video is correct
        auto videoTest = stream.video();

        REQUIRE(videoTest->title() == title);
	REQUIRE(videoTest->getLength() == time);
        REQUIRE(videoTest->episodes() == numEpisodes);

        // Verify correct number of viewings
        REQUIRE(stream.viewings() == numViewings);
}

TEST_CASE( "Stream with Movie, 0 viewings", "[Stream]" )
{
        auto title = "Blues Brothers";
        Duration time(2,1);
        auto numEpisodes = 0;

        Movie video(title, time, numEpisodes);

        auto numViewings = 0;

        Stream stream(new Movie(video), numViewings);

        // Verify video is correct
        auto videoTest = stream.video();

        REQUIRE(videoTest->title() == title);
        REQUIRE(videoTest->getLength() == time);
        REQUIRE(videoTest->episodes() == numEpisodes);

        // Verify correct number of viewings
        REQUIRE(stream.viewings() == numViewings);
}

TEST_CASE( "Stream with Movie, 1 viewing", "[Stream]" )
{
        auto title = "Blues Brothers";
        Duration time(2,1);
        auto numEpisodes = 0;

        Movie video(title, time, numEpisodes);

        auto numViewings = 1;

        Stream stream(new Movie(video), numViewings);

        // Verify video is correct
        auto videoTest = stream.video();

        REQUIRE(videoTest->title() == title);
        REQUIRE(videoTest->getLength() == time);
        REQUIRE(videoTest->episodes() == numEpisodes);

        // Verify correct number of viewings
        REQUIRE(stream.viewings() == numViewings);
}

TEST_CASE( "Stream with Movie, 100 viewing", "[Stream]" )
{
        auto title = "Blues Brothers";
       	Duration time(2,1);
        auto numEpisodes = 0;

        Movie video(title, time, numEpisodes);

        auto numViewings = 100;

        Stream stream(new Movie(video), numViewings);

        // Verify video is correct
        auto videoTest = stream.video();

        REQUIRE(videoTest->title() == title);
        REQUIRE(videoTest->getLength() == time);
        REQUIRE(videoTest->episodes() == numEpisodes);

        // Verify correct number of viewings
        REQUIRE(stream.viewings() == numViewings);
}

TEST_CASE( "Stream with Original, 0 viewings", "[Stream]" )
{
        auto title = "Original Documentary on Tomatos";
        Duration time(0,30);
        auto numEpisodes = 0;

        Original video(title, time, numEpisodes);

        auto numViewings = 0;

        Stream stream(new Original(video), numViewings);

        // Verify video is correct
        auto videoTest = stream.video();

        REQUIRE(videoTest->title() == title);
        REQUIRE(videoTest->getLength() == time);
        REQUIRE(videoTest->episodes() == numEpisodes);

        // Verify correct number of viewings
        REQUIRE(stream.viewings() == numViewings);
}

TEST_CASE( "Stream with Original, 1 viewing", "[Stream]" )
{
        auto title = "Original Documentary on Tomatos";
        Duration time(0,30);
        auto numEpisodes = 0;

        Original video(title, time, numEpisodes);

        auto numViewings = 1;

        Stream stream(new Original(video), numViewings);

        // Verify video is correct
        auto videoTest = stream.video();

        REQUIRE(videoTest->title() == title);
        REQUIRE(videoTest->getLength() == time);
        REQUIRE(videoTest->episodes() == numEpisodes);

        // Verify correct number of viewings
        REQUIRE(stream.viewings() == numViewings);
}

TEST_CASE( "Stream with Original, 100 viewings", "[Stream]" )
{
        auto title = "Original Documentary on Tomatos";
        Duration time(0,30);
        auto numEpisodes = 0;

        Original  video(title, time, numEpisodes);

        auto numViewings = 100;

        Stream stream(new Original(video), numViewings);

        // Verify video is correct
        auto videoTest = stream.video();

        REQUIRE(videoTest->title() == title);
	REQUIRE(videoTest->getLength() == time);
        REQUIRE(videoTest->episodes() == numEpisodes);

        // Verify correct number of viewings
        REQUIRE(stream.viewings() == numViewings);
}

