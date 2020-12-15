#include "Duration.hpp"
#include <iostream>

Duration::Duration(int hours, int minutes){
   this->hours = hours;
   this->minutes = minutes;
}
void Duration::setLength(int hours, int minutes){
  this->hours = hours;
  this->minutes = minutes;
}

int Duration::Hours(){
return this->hours;
}

int Duration::Minutes(){
  return this->minutes;
}
