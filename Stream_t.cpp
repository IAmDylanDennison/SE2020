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
	auto type = Video::TVSHOW;
        Duration time(0,40);
	auto numEpisodes = 20;

	Video video(title, type, time, numEpisodes);

	auto numViewings = 0;

	Stream stream(video, numViewings);

	// Verify video is correct
	auto videoTest = stream.video();

	REQUIRE(videoTest.title() == title);
	REQUIRE(videoTest.type() == type);
	REQUIRE(videoTest.getLength() == time);
	REQUIRE(videoTest.episodes() == numEpisodes);

	// Verify correct number of viewings
	REQUIRE(stream.viewings() == numViewings);
}

TEST_CASE( "Stream with TV Show, 1 viewing", "[Stream]" )
{
        auto title = "Sons of Anarchy";
        auto type = Video::TVSHOW;
	Duration time(0,40);
        auto numEpisodes = 20;

        Video video(title, type, time, numEpisodes);

        auto numViewings = 1;

        Stream stream(video, numViewings);

        // Verify video is correct
        auto videoTest = stream.video();

        REQUIRE(videoTest.title() == title);
        REQUIRE(videoTest.type() == type);
        REQUIRE(videoTest.getLength() == time);
        REQUIRE(videoTest.episodes() == numEpisodes);

        // Verify correct number of viewings
        REQUIRE(stream.viewings() == numViewings);
}

TEST_CASE( "Stream with TV Show, 100 viewings", "[Stream]" )
{
        auto title = "Sons of Anarchy";
        auto type = Video::TVSHOW;
        Duration time(0,40);
        auto numEpisodes = 20;

        Video video(title, type, time, numEpisodes);

        auto numViewings = 100;

        Stream stream(video, numViewings);

        // Verify video is correct
        auto videoTest = stream.video();

        REQUIRE(videoTest.title() == title);
        REQUIRE(videoTest.type() == type);
	REQUIRE(videoTest.getLength() == time);
        REQUIRE(videoTest.episodes() == numEpisodes);

        // Verify correct number of viewings
        REQUIRE(stream.viewings() == numViewings);
}

TEST_CASE( "Stream with Movie, 0 viewings", "[Stream]" )
{
        auto title = "Blues Brothers";
        auto type = Video::MOVIE;
        Duration time(2,1);
        auto numEpisodes = 0;

        Video video(title, type, time, numEpisodes);

        auto numViewings = 0;

        Stream stream(video, numViewings);

        // Verify video is correct
        auto videoTest = stream.video();

        REQUIRE(videoTest.title() == title);
        REQUIRE(videoTest.type() == type);
        REQUIRE(videoTest.getLength() == time);
        REQUIRE(videoTest.episodes() == numEpisodes);

        // Verify correct number of viewings
        REQUIRE(stream.viewings() == numViewings);
}

TEST_CASE( "Stream with Movie, 1 viewing", "[Stream]" )
{
        auto title = "Blues Brothers";
        auto type = Video::MOVIE;
        Duration time(2,1);
        auto numEpisodes = 0;

        Video video(title, type, time, numEpisodes);

        auto numViewings = 1;

        Stream stream(video, numViewings);

        // Verify video is correct
        auto videoTest = stream.video();

        REQUIRE(videoTest.title() == title);
        REQUIRE(videoTest.type() == type);
        REQUIRE(videoTest.getLength() == time);
        REQUIRE(videoTest.episodes() == numEpisodes);

        // Verify correct number of viewings
        REQUIRE(stream.viewings() == numViewings);
}

TEST_CASE( "Stream with Movie, 100 viewing", "[Stream]" )
{
        auto title = "Blues Brothers";
        auto type = Video::MOVIE;
       	Duration time(2,1);
        auto numEpisodes = 0;

        Video video(title, type, time, numEpisodes);

        auto numViewings = 100;

        Stream stream(video, numViewings);

        // Verify video is correct
        auto videoTest = stream.video();

        REQUIRE(videoTest.title() == title);
        REQUIRE(videoTest.type() == type);
        REQUIRE(videoTest.getLength() == time);
        REQUIRE(videoTest.episodes() == numEpisodes);

        // Verify correct number of viewings
        REQUIRE(stream.viewings() == numViewings);
}

TEST_CASE( "Stream with Original, 0 viewings", "[Stream]" )
{
        auto title = "Original Documentary on Tomatos";
        auto type = Video::ORIGINAL;
        Duration time(0,30);
        auto numEpisodes = 0;

        Video video(title, type, time, numEpisodes);

        auto numViewings = 0;

        Stream stream(video, numViewings);

        // Verify video is correct
        auto videoTest = stream.video();

        REQUIRE(videoTest.title() == title);
        REQUIRE(videoTest.type() == type);
        REQUIRE(videoTest.getLength() == time);
        REQUIRE(videoTest.episodes() == numEpisodes);

        // Verify correct number of viewings
        REQUIRE(stream.viewings() == numViewings);
}

TEST_CASE( "Stream with Original, 1 viewing", "[Stream]" )
{
        auto title = "Original Documentary on Tomatos";
        auto type = Video::ORIGINAL;
        Duration time(0,30);
        auto numEpisodes = 0;

        Video video(title, type, time, numEpisodes);

        auto numViewings = 1;

        Stream stream(video, numViewings);

        // Verify video is correct
        auto videoTest = stream.video();

        REQUIRE(videoTest.title() == title);
        REQUIRE(videoTest.type() == type);
        REQUIRE(videoTest.getLength() == time);
        REQUIRE(videoTest.episodes() == numEpisodes);

        // Verify correct number of viewings
        REQUIRE(stream.viewings() == numViewings);
}

TEST_CASE( "Stream with Original, 100 viewings", "[Stream]" )
{
        auto title = "Original Documentary on Tomatos";
        auto type = Video::ORIGINAL;
        Duration time(0,30);
        auto numEpisodes = 0;

        Video video(title, type, time, numEpisodes);

        auto numViewings = 100;

        Stream stream(video, numViewings);

        // Verify video is correct
        auto videoTest = stream.video();

        REQUIRE(videoTest.title() == title);
        REQUIRE(videoTest.type() == type);
	REQUIRE(videoTest.getLength() == time);
        REQUIRE(videoTest.episodes() == numEpisodes);

        // Verify correct number of viewings
        REQUIRE(stream.viewings() == numViewings);
}

