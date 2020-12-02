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

//Test case single stream
TEST_CASE( "addStream() w/ single stream", "[Account]"){

  auto episodes= 0;
  auto video= Video("Billy Madison", Video::MOVIE, 1, 45, episodes);
  auto stream= Stream(video, 1);
  auto customer= Account("Matt");

  customer.addStream(stream);

  REQUIRE(customer.data() == "Matt,MOVIE,Billy Madison,1,45,1\n");
}
