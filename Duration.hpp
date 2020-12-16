#ifndef DURATION_H
#define DURATION_H

class Duration
{
	public:
		Duration();
		Duration(int, int);

		void setHours(int);
		void setMinutes(int);

		int getHours() const;
		int getMinutes() const;

		bool operator==(const Duration&) const;

	private:
		int hours;
		int minutes;
};

#endif
