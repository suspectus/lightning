// 
// rand.h
// Rand class provides random numbers of any required range.
// It uses the Psuedo Random Generator and is seeded by the time in seconds.
//

#ifndef RAND_H_
#define RAND_H_

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef int RGN;
class Rand
{
public:
  Rand();
  ~Rand();
  Rand(RGN hiLimit);
  // fix limits and use rnd() for random number
  Rand(RGN loLimit, RGN hiLimit);
  RGN rnd();
  // alternate to rnd(), provide the limit each time random number requested
  RGN random(unsigned int ulim);  
private:
  RGN loLimit_;
  RGN hiLimit_;
  RGN range_;
  RGN seed_;
  RGN rgn_;
};
#endif
