/*
  Video.hpp

=======
0;136;0c

  Include file for Video class
*/

#ifndef VIDEO_H
#define VIDEO_H

#include "Duration.hpp"
#include <string>

class Video
{

	public:
		// constructor
		Video(const std::string& title, const Duration& duration, int episodes);

		// video title
		std::string title() const;

		// number of episodes
		virtual int episodes() const;

		// video length
		Duration getLength() const;
		void setLength(const Duration&);

		virtual int getNumberOfOriginals() const = 0;
		virtual int getNumberOfStreams(const int) const = 0;

		//gets stream type
		virtual std::string getStreamType() const = 0;

	private:
		std::string videoTitle;
		Duration videoDuration;
		int numEpisodes;
};

class Movie : public Video
{
	public:
		Movie(const std::string& title, const Duration& length, int numEpisodes) : Video(title, length, numEpisodes) {};

		virtual int episodes() const override;

		virtual int getNumberOfOriginals() const override;
		virtual int getNumberOfStreams(const int) const override;
		virtual std::string getStreamType() const override;
};

class TVShow : public Video
{
	public:
		TVShow(const std::string& title, const Duration& length, int numEpisodes) : Video(title, length, numEpisodes) {};

                virtual int getNumberOfOriginals() const override;
                virtual int getNumberOfStreams(const int) const override;
                virtual std::string getStreamType() const override;
};

class Original : public Video
{
	public:
		Original(const std::string& title, const Duration& length, int numEpisodes) : Video(title, length, numEpisodes) {};

                virtual int getNumberOfOriginals() const override;
                virtual int getNumberOfStreams(const int) const override;
                virtual std::string getStreamType() const override;
};

#endif
