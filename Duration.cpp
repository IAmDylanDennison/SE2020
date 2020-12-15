#include "Duration.hpp"

Duration::Duration()
{
	hours = 0;
	minutes = 0;
}

Duration::Duration(int h, int m)
{
	hours = h;
	minutes = m;
}

void Duration::setHours(int h) { hours = h; }
void Duration::setMinutes(int m) { minutes = m; }

int Duration::getHours() const { return hours; }
int Duration::getMinutes() const { return minutes; }

bool Duration::operator==(const Duration& rhs) const { return hours == rhs.hours && minutes == rhs.minutes; }
