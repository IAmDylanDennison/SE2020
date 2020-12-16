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
	Duration duration(2, 50);

	TVShow test(name, Duration(1, 60), 1);

	REQUIRE(test.title() == "Breaking Bad");

	test.setLength(duration);

	REQUIRE(test.getLength() == duration);
	REQUIRE(test.episodes() == 1);
}

TEST_CASE( "Test ctor TV 2", "[Video]" )
{
	std::string name = "Family Guy";
	Duration duration(0, 30);

	TVShow test(name, Duration(1, 60), 1);

	REQUIRE(test.title() == "Family Guy");

        test.setLength(duration);

        REQUIRE(test.getLength() == duration);
	REQUIRE(test.episodes() == 1);
}

TEST_CASE( "Test ctor TV 3", "[Video]" )
{
        std::string name = "South Park";
	Duration duration(0, 26);

	TVShow test(name, duration, 10);

        REQUIRE(test.title() == "South Park");
        REQUIRE(test.getLength() == duration);
        REQUIRE(test.episodes() == 10);
}

//Test Cases for setLength
TEST_CASE( "setLength_TVSHOW", "[Video]")
{
	Duration duration(1, 45);

	TVShow v("Breaking bad", Duration(0, 47), 62);

	v.setLength(duration);

	REQUIRE(v.title() =="Breaking bad");
	REQUIRE(v.getLength() == duration);
}

TEST_CASE( "setLength_MOVIE", "[Video]")
{
	Duration duration(0, 55);

	Movie v("Home Alone 2", Duration(2, 1), 0);

	v.setLength(duration);

	REQUIRE(v.title() =="Home Alone 2");
	REQUIRE(v.getLength() == duration);
}

TEST_CASE( "setLength_ORIGINAL", "[Video]")
{
	Duration duration(10,20);

	Original v("Home Videos", Duration(5, 30), 20);

	v.setLength(duration);

	REQUIRE(v.title() =="Home Videos");
	REQUIRE(v.getLength() == duration);
}

TEST_CASE("Empty Original Video", "[Video]")
{
	const auto title = "";
	const Duration duration(0, 0);
	const auto numEpisodes = 0;

	auto video = Original(title, duration, numEpisodes);

	// Check that member variables are correct
	REQUIRE(video.title() == title);
	REQUIRE(video.getLength() == duration);
	REQUIRE(video.episodes() == numEpisodes);
}

TEST_CASE("Original Video with Title", "[Video]")
{
        const auto title = "The Original Movie 2";
	const Duration duration(0, 0);
        const auto numEpisodes = 0;

        auto video = Original(title, duration, numEpisodes);

        // Check that member variables are correct
        REQUIRE(video.title() == title);
        REQUIRE(video.getLength() == duration);
        REQUIRE(video.episodes() == numEpisodes);
}

TEST_CASE("Original Video with Time", "[Video]")
{
        const auto title = "The Unoriginal Documentary";
	const Duration duration(1, 23);
        const auto numEpisodes = 0;

        auto video = Original(title, duration, numEpisodes);

        // Check that member variables are correct
        REQUIRE(video.title() == title);
        REQUIRE(video.getLength() == duration);
        REQUIRE(video.episodes() == numEpisodes);
}

TEST_CASE("Original Video with Episodes", "[Video]")
{
        const auto title = "Cool Original Show";
	const Duration duration(1, 20);
        const auto numEpisodes = 10;

        auto video = Original(title, duration, numEpisodes);

        // Check that member variables are correct
        REQUIRE(video.title() == title);
        REQUIRE(video.getLength() == duration);
        REQUIRE(video.episodes() == numEpisodes);
}

TEST_CASE( "Constructor with MOVIE", "[Video]" )
{
	Movie vid("Indiana Jones", Duration(2, 1), 0);
}

