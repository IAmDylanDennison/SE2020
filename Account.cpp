/*
  Account.cpp

  Definition file for Account class
*/

#include "Account.hpp"
#include "Video.hpp"
#include "Duration.hpp"

#include <iostream>
#include <sstream>
#include <string>
#include <vector>

// constructor
Account::Account(const std::string& name)
    : accountName(name)
{ }

// account name
std::string Account::name() const {

    return accountName;
}

// add a stream to this account
void Account::addStream(const Stream& stream) {

    streams.push_back(stream);
}
// account streaming report
std::string Account::report() const {

    // returned string
    std::ostringstream output;

    // customer name
    output << "Stream Report for Account: " << name() << '\n';

    // list streams
    output << "Streams:" << '\n';
    int totalStreams = 0;
    int totalOriginals = 0;
    int totalHours = 0;
    int totalMinutes = 0;
    for (std::vector<Stream>::const_iterator it = streams.begin(); it != streams.end(); ++it) {
        // stream title
        output << '\t' << it->video()->title();

        // current total hours and minutes
        totalHours += it->video()->getLength().getHours() * it->viewings();
        totalMinutes += it->video()->getLength().getMinutes() * it->viewings();

        // stream counts and originals
	int viewCount= it->viewings();
        int streamCount = it->video()->getNumberOfStreams(viewCount);
        int originals =it->video()->getNumberOfOriginals();

        // stream counts for this video
        std::ostringstream out_str_stream;
        output << '\t' << streamCount << '\n';

        totalStreams += streamCount;
        totalOriginals += originals;
    }
    output << '\n';

    // total stream counts
    output << "Total Stream Events: " << totalStreams << '\n';

    // total non-original stream counts
    output << "Non-Original Stream Events: " << (totalStreams - totalOriginals) << '\n';

    // total time
    int time = totalHours + totalMinutes / 60;
    output << "Total Time: " << time << ":";
    int remainderMin = totalMinutes % 60;  //remainderMin is a new var that shows the reminder of mins left when div by a hour
    output << remainderMin  << '\n';

    return output.str();
}

// account data in CSV
std::string Account::data() const {

    // returned string
    std::ostringstream output;

    // customer name
    std::string name = this->name();

    // list of streams
    for (std::vector<Stream>::const_iterator it = streams.begin(); it != streams.end(); ++it) {

        // customer name
        output << name << ',';

        // stream type
        output << it->video()->getStreamType();


        // stream title
        output << ',' << it->video()->title();

        // stream hours and minutes
        output << ',' << (it->video()->getLength().getHours() * it->viewings());
        output << ',' << (it->video()->getLength().getMinutes() * it->viewings());

        // stream counts
        output << ',';
	output << it->video()->getNumberOfStreams(it->viewings());

        output << '\n';
    }

    return output.str();
}
