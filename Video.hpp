/*
  Video.hpp
  Include file for Video class
*/

#ifndef VIDEO_H
#define VIDEO_H

#include "Duration.hpp"
#include <string>

class Video
{
	public:
		static const int MOVIE      = 0;
		static const int TVSHOW     = 1;
		static const int ORIGINAL   = 2;

		// constructor
		Video(const std::string& title, int type, Duration duration, int episodes);

		// video title
		std::string title() const;

		// video type
		int type() const;

		// number of episodes
		int episodes() const;

		// set video length
		Duration duration();

	private:
		std::string videoTitle;
		int videoType;
		Duration videoDuration;
		int numEpisodes;
};

#endif
