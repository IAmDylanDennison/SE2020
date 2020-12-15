#ifndef DURATION_H
#define DURATION_H

class Duration {
public:
  Duration(int hours, int minutes);
  void setLength(int hours, int minutes);
  int Hours();
  int Minutes();

private:
  int hours;
  int minutes;
};

#endif 
