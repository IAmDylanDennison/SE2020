/*
  Video.cpp
  Definition file for Video class
*/

#include "Video.hpp"
#include "Duration.hpp"

// constructor
Video::Video(const std::string& title, int type,  Duration duration,  int episodes)
  : videoTitle(title), videoType(type), videoDuration(duration), numEpisodes(episodes)
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
//int Video::hours() const {

//   return lengthHours;
//}

// video length in minutes
//int Video::Minutes() const {

//  return lengthMinutes;
//}

// number of episodes

int Video::episodes() const {

    // special case as movies do not have episodes
    if (videoType == Video::MOVIE)
        return 0;

    return numEpisodes;
}

// set video length
//void Video::setLength(int hours, int minutes) {

// this->lengthHours = hours;
//  this->lengthMinutes = minutes;
//}

Duration Video::duration(){
  return videoDuration;
}
