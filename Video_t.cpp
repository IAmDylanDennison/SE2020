/*
  Video_t.cpp

  Test program for class Video
*/

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Video.hpp"

TEST_CASE( "Test ctor TV 1", "[Video]" )
{
	std::string name = "Breaking Bad";
	int type = Video::TVSHOW;
	Duration duration(2, 50);

	Video test(name, type, Duration(1, 60), 1);

	REQUIRE(test.title() == "Breaking Bad");
	REQUIRE(test.type() == type);

	test.setLength(duration);

	REQUIRE(test.getLength() == duration);
	REQUIRE(test.episodes() == 1);
}

TEST_CASE( "Test ctor TV 2", "[Video]" )
{
	std::string name = "Family Guy";
	int type = Video::TVSHOW;
	Duration duration(0, 30);

	Video test(name, type, Duration(1, 60), 1);

	REQUIRE(test.title() == "Family Guy");
	REQUIRE(test.type() == type);

        test.setLength(duration);

        REQUIRE(test.getLength() == duration);
	REQUIRE(test.episodes() == 1);
}

TEST_CASE( "Test ctor TV 3", "[Video]" )
{
        std::string name = "South Park";
        int type = Video::TVSHOW;
	Duration duration(0, 26);

	Video test(name, type, duration, 10);

        REQUIRE(test.title() == "South Park");
        REQUIRE(test.type() == type);
        REQUIRE(test.getLength() == duration);
        REQUIRE(test.episodes() == 10);
}

//Test Cases for setLength
TEST_CASE( "setLength_TVSHOW", "[Video]")
{
	Duration duration(1, 45);
	int type= Video::TVSHOW;

	Video v("Breaking bad", type, Duration(0, 47), 62);

	v.setLength(duration);

	REQUIRE(v.title() =="Breaking bad");
	REQUIRE(v.getLength() == duration);
	REQUIRE(v.type() == type);
}

TEST_CASE( "setLength_MOVIE", "[Video]")
{
	Duration duration(0, 55);
	int type= Video::MOVIE;

	Video v("Home Alone 2", type, Duration(2, 1), 0);

	v.setLength(duration);

	REQUIRE(v.title() =="Home Alone 2");
	REQUIRE(v.getLength() == duration);
	REQUIRE(v.type() == type);
}

TEST_CASE( "setLength_ORIGINAL", "[Video]")
{
	Duration duration(10,20);
	int type= Video::ORIGINAL;

	Video v("Home Videos", type, Duration(5, 30), 20);

	v.setLength(duration);

	REQUIRE(v.title() =="Home Videos");
	REQUIRE(v.getLength() == duration);
	REQUIRE(v.type() == type);
}

TEST_CASE("Empty Original Video", "[Video]")
{
	const auto title = "";
	const auto type = Video::ORIGINAL;
	const Duration duration(0, 0);
	const auto numEpisodes = 0;

	auto video = Video(title, type, duration, numEpisodes);

	// Check that member variables are correct
	REQUIRE(video.title() == title);
	REQUIRE(video.type() == type);
	REQUIRE(video.getLength() == duration);
	REQUIRE(video.episodes() == numEpisodes);
}

TEST_CASE("Original Video with Title", "[Video]")
{
        const auto title = "The Original Movie 2";
        const auto type = Video::ORIGINAL;
	const Duration duration(0, 0);
        const auto numEpisodes = 0;

        auto video = Video(title, type, duration, numEpisodes);

        // Check that member variables are correct
        REQUIRE(video.title() == title);
        REQUIRE(video.type() == type);
        REQUIRE(video.getLength() == duration);
        REQUIRE(video.episodes() == numEpisodes);
}

TEST_CASE("Original Video with Time", "[Video]")
{
        const auto title = "The Unoriginal Documentary";
        const auto type = Video::ORIGINAL;
	const Duration duration(1, 23);
        const auto numEpisodes = 0;

        auto video = Video(title, type, duration, numEpisodes);

        // Check that member variables are correct
        REQUIRE(video.title() == title);
        REQUIRE(video.type() == type);
        REQUIRE(video.getLength() == duration);
        REQUIRE(video.episodes() == numEpisodes);
}

TEST_CASE("Original Video with Episodes", "[Video]")
{
        const auto title = "Cool Original Show";
        const auto type = Video::ORIGINAL;
	const Duration duration(1, 20);
        const auto numEpisodes = 10;

        auto video = Video(title, type, duration, numEpisodes);

        // Check that member variables are correct
        REQUIRE(video.title() == title);
        REQUIRE(video.type() == type);
        REQUIRE(video.getLength() == duration);
        REQUIRE(video.episodes() == numEpisodes);
}

TEST_CASE( "Constructor with MOVIE", "[Video]" )
{
	int movie = Video::MOVIE;
	Video vid("Indiana Jones", movie, Duration(2, 1), 0);
	REQUIRE(vid.type() == movie);
}

