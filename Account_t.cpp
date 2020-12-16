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
  auto video= Movie("Billy Madison", Duration(1, 45), episodes);
  auto stream= Stream(new Movie(video), 1);
  auto customer= Account("Matt");

  customer.addStream(stream);

  REQUIRE(customer.data() == "Matt,MOVIE,Billy Madison,1,45,1\n");
}

//Test case single stream TVSHOW 
TEST_CASE( "addStream() w/ single stream TVSHOW", "[Account]"){

  auto episodes= 12;
  auto video= TVShow("America's Next Top Model", Duration(0, 45), episodes);
  auto stream= Stream(new TVShow(video), 40);
  auto customer= Account("Dylan");

  customer.addStream(stream);

  REQUIRE(customer.data() == "Dylan,TVSHOW,America's Next Top Model,0,1800,40\n");
}

//Test case single stream ORIGINAL
TEST_CASE( "addStream() w/ single stream ORIGINAL", "[Account]"){

  auto episodes= 4;
  auto video= Original("Wonder Bread the Documentary", Duration(0, 20), episodes);
  auto stream= Stream(new Original(video), 3);
  auto customer= Account("Alva");

  customer.addStream(stream);

  REQUIRE(customer.data() == "Alva,ORIGINAL,Wonder Bread the Documentary,0,60,3\n");
}

//Test case multiple streams
TEST_CASE( "addStream() w/ multiple stream MOVIE & TVSHOW & ORIGINAL", "[Account]"){

  auto episodes = 0;
  auto video = Movie("Borat", Duration(1, 30), episodes);
  auto stream = Stream(new Movie(video), 1);

  auto episodes1 = 12;
  auto video1 = TVShow("Borat The Show", Duration(0, 20), episodes1);
  auto stream1 = Stream(new TVShow(video1), 50);

  auto episodes2 = 0;
  auto video2 = Original("Borat 2 Electric Boogaloo", Duration(1, 0), episodes2);
  auto stream2 = Stream(new Original(video2), 1);

  auto customer = Account("Max");

  customer.addStream(stream);
  customer.addStream(stream1);
  customer.addStream(stream2);

  REQUIRE(customer.data() == "Max,MOVIE,Borat,1,30,1\nMax,TVSHOW,Borat The Show,0,1000,50\nMax,ORIGINAL,Borat 2 Electric Boogaloo,1,0,1\n");
}


//Test case stream report
TEST_CASE( "report() w/ 2 streams", "[Account]"){

  auto episodes= 4;
  auto video= Original("Wonder Bread the Documentary", Duration(0, 20), episodes);
  auto stream= Stream(new Original(video), 1);
  auto customer= Account("Alva");

  customer.addStream(stream);

  auto episodes2= 0;
  auto video2= Movie("Iron Man", Duration(1, 15), episodes2);
  auto stream2= Stream(new Movie(video2), 14);

  customer.addStream(stream2);

  customer.report();

  REQUIRE(stream.viewings() == 1);
  REQUIRE(stream2.viewings() == 14);

}


//Account with no name test case
TEST_CASE( "addStream() w/ no account name", "[Account]"){

  auto episodes= 12;
  auto video= TVShow("Mr. No-Name Returns", Duration(0, 45), episodes);
  auto stream= Stream(new TVShow(video), 40);
  auto customer= Account("");

  customer.addStream(stream);

  REQUIRE(customer.data() == ",TVSHOW,Mr. No-Name Returns,0,1800,40\n");
}
