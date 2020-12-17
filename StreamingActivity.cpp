/*
  StreamingActivity.cpp

  Basic operations of a streaming service
*/

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

#include "Video.hpp"
#include "Stream.hpp"
#include "Account.hpp"

int main(int argc, char* argv[]) {

    // Load videos from data file
    const char* input_filename = "videos.csv";
    std::vector<Video*> videos;
    std::ifstream invideo(input_filename);
    if (!invideo) {
        std::cerr << argv[0] << ": Unable to open input file " << input_filename << '\n';
        return 1;
    }

    std::string line;
    while (getline(invideo, line)) {
        std::istringstream sline(line);

        // video type
        std::string str;
        std::getline(sline, str, ',');

	// For some reason str is emptied before currVideo is created, type resolves this issue
	std::string type(str);

        // video title
        std::string title;
        std::getline(sline, title, ',');

        // video hours
        std::getline(sline, str, ',');
        std::stringstream strhours(str);
        int hours;
        strhours >> hours;

        // video minutes
        std::getline(sline, str, ',');
        std::stringstream strminutes(str);
        int minutes;
        strminutes >> minutes;

	Duration time(hours, minutes);

        // video episodes
        std::getline(sline, str, ',');
        std::stringstream strepisodes(str);
        int episodes;
        strepisodes >> episodes;

	Video* currVideo=nullptr;

        if (type == "MOVIE")
            currVideo = new Movie(title, time, episodes);
        else if (type == "TVSHOW")
            currVideo = new TVShow(title, time, episodes);
        else if (type == "ORIGINAL")
            currVideo = new Original(title, time, episodes);
        // ignore any unkown types
        else{
	  delete currVideo;
            continue;
	}
	
        // push back created video
        videos.push_back(currVideo);

    }
    invideo.close();

    // Account
    Account customer("Fred");

    // Some streams of these movies
    Stream s1(videos[0], 3);
    Stream s2(videos[1], 1);
    Stream s3(videos[2], 2);

    customer.addStream(s1);
    customer.addStream(s2);
    customer.addStream(s3);

    // Output account streaming report
    std::cout << customer.report() << '\n';

    // Output account data report
    std::cout << customer.data() << '\n';

    return 0;
}
