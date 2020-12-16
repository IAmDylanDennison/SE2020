/*
  Video.cpp

  Definition file for Video class
*/

#include "Video.hpp"

// constructor
Video::Video(const std::string& title, int type, int hours, int minutes, int episodes)
    : videoTitle(title), videoType(type), lengthHours(hours), lengthMinutes(minutes), numEpisodes(episodes)
{ }

// video title
std::string Video::title() const {

    return videoTitle;
}

// video type
int Video::type() const {

    return videoType;
}

// video length in hours
int Video::hours() const {

    return lengthHours;
}

// video length in minutes
int Video::Minutes() const {

    return lengthMinutes;
}
int Video::getNumberOfStreams(const int viewings){
  int streamCount =0;
  switch (videoType) {
    // for movies, the stream count is the number of hours, with a minimum of 1
  case Video::MOVIE:
    streamCount += viewings * (lengthHours ? lengthHours : 1);
    break;
    
    // for TV shows, the stream count is just the number of streams
  case Video::TVSHOW:
    streamCount += viewings;
    break;
    
    // for TV shows, the stream count is just the number of streams
  case Video::ORIGINAL:
    streamCount += viewings;
    break;
  }
 return streamCount;
}
int Video::getNumberOfOriginals(){
  int originals =0;
  if(videoType == Video::ORIGINAL) {
    originals=1;
    return originals;
  }
  return originals;
}
// number of episodes
int Video::episodes() const {

    // special case as movies do not have episodes
    if (videoType == Video::MOVIE)
        return 0;

    return numEpisodes;
}

// set video length
void Video::setLength(int hours, int minutes) {

    this->lengthHours = hours;
    this->lengthMinutes = minutes;
}

std::string Video::getStreamType() {

 std::string ret;

  switch (type()) {

    // movies
  case Video::MOVIE:
    ret = "MOVIE";
     break;

    // tv
  case Video::TVSHOW:
    ret = "TVSHOW";
     break;

    // original
  case Video::ORIGINAL:
    ret = "ORIGINAL";
      break;
  }

  return ret;
}
