/*
  Account_t.cpp

  Test program for class Account
*/

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "Account.hpp"

TEST_CASE( "No streaming", "[Account]" ) {

    Account customer("Fred");

    REQUIRE(customer.name() == "Fred");
    REQUIRE(customer.data() == "");
}

//Test case single stream MOVIE
TEST_CASE( "addStream() w/ single stream MOVIE", "[Account]"){

  auto episodes= 0;
  auto video= Video("Billy Madison", Video::MOVIE, 1, 45, episodes);
  auto stream= Stream(video, 1);
  auto customer= Account("Matt");

  customer.addStream(stream);

  REQUIRE(customer.data() == "Matt,MOVIE,Billy Madison,1,45,1\n");
}

//Test case single stream TVSHOW 
TEST_CASE( "addStream() w/ single stream TVSHOW", "[Account]"){

  auto episodes= 12;
  auto video= Video("America's Next Top Model", Video::TVSHOW, 0, 45, episodes);
  auto stream= Stream(video, 40);
  auto customer= Account("Dylan");

  customer.addStream(stream);

  REQUIRE(customer.data() == "Dylan,TVSHOW,America's Next Top Model,0,1800,40\n");
}

//Test case single stream ORIGINAL
TEST_CASE( "addStream() w/ single stream ORIGINAL", "[Account]"){

  auto episodes= 4;
  auto video= Video("Wonder Bread the Documentary", Video::ORIGINAL, 0, 20, episodes);
  auto stream= Stream(video, 3);
  auto customer= Account("Alva");

  customer.addStream(stream);

  REQUIRE(customer.data() == "Alva,ORIGINAL,Wonder Bread the Documentary,0,60,3\n");
}

