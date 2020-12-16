/*
  Video.cpp
  Definition file for Video class
*/

#include "Video.hpp"

// constructor
Video::Video(const std::string& title,  const Duration& duration,  int episodes)
  : videoTitle(title), videoDuration(duration), numEpisodes(episodes)
{ }

// video title
std::string Video::title() const { return videoTitle; }

// number of episodes
int Video::episodes() const { return numEpisodes; }

Duration Video::getLength() const { return videoDuration; }
void Video::setLength(const Duration& rhs) { videoDuration = rhs; }


// Movie Methods
int Movie::episodes() const { return 0; }

int Movie::getNumberOfOriginals() const { return 0; }

int Movie::getNumberOfStreams(const int viewings) const
{
	return viewings * (getLength().getHours() ? getLength().getHours() : 1);
}

std::string Movie::getStreamType() const { return "MOVIE"; }


// TVShow Methods
int TVShow::getNumberOfOriginals() const { return 0; }

int TVShow::getNumberOfStreams(const int viewings) const { return viewings; }

std::string TVShow::getStreamType() const { return "TVSHOW"; }


// Original Methods
int Original::getNumberOfOriginals() const { return 1; }

int Original::getNumberOfStreams(const int viewings) const { return viewings; }

std::string Original::getStreamType() const { return "ORIGINAL"; }
