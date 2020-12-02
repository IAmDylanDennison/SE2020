/*
  Video_t.cpp

  Test program for class Video
*/

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Video.hpp"

TEST_CASE( "NOP", "[Video]" ) {

}

//Test Cases for setLength
TEST_CASE( "setLength_TVSHOW", "[Video]"){
 int  hours =1;
 int minutes= 45;
 int type= Video::TVSHOW;
  
  Video v("Breaking bad", type, 0, 47, 62);
  
  v.setLength(hours, minutes);
  
  REQUIRE(v.title() =="Breaking bad");
  REQUIRE(v.hours() == 1);
  REQUIRE(v.Minutes() == 45);
  REQUIRE(v.type() == type);
}

TEST_CASE( "setLength_MOVIE", "[Video]"){
 int  hours =0;
 int minutes= 55;
 int type= Video::MOVIE;

  Video v("Home Alone 2", type, 2, 1, 0);

  v.setLength(hours, minutes);
  
  REQUIRE(v.title() =="Home Alone 2");
  REQUIRE(v.hours() == 0);
  REQUIRE(v.Minutes() == 55);
  REQUIRE(v.type() == type);
}

TEST_CASE( "setLength_ORIGINAL", "[Video]"){
 int  hours =10;
 int minutes= 20;
 int type= Video::ORIGINAL;

  Video v("Home Videos", type, 5, 30, 20);

  v.setLength(hours, minutes);
  
  REQUIRE(v.title() =="Home Videos");
  REQUIRE(v.hours() == 10);
  REQUIRE(v.Minutes() == 20);
  REQUIRE(v.type() == type);
}

=======

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

