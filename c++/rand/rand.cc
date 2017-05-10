// 
// rand.cc
// This class provides random numbers of any required range.
// It uses the Psuedo Random Generator - and is seeded by the time in seconds.
//

#include"rand.h"

Rand::~Rand()
{ }

Rand::Rand()
{
  srand((RGN)time(NULL));
}


Rand::Rand(int hiLimit) :
  hiLimit_(hiLimit),
  loLimit_(1)
{ 
  range_ = hiLimit - 1;
  srand(seed_ = (RGN)time(NULL));
}


Rand::Rand(RGN loLimit, RGN hiLimit) :
   loLimit_(loLimit),
   hiLimit_(hiLimit)
{ 
  range_ = hiLimit - loLimit;
  if (0 == loLimit)
    range_++;
  srand(seed_ = (RGN)time(NULL));
}

RGN Rand::rnd()
{
  if (1 == range_)
  {
//  get the range 0-1
    rgn_ = (rand() & (unsigned)1) + loLimit_;
  }
  else
    rgn_ = (rand() % range_) + loLimit_;
  return rgn_;
}


RGN Rand::random(unsigned int ulim)
{
  range_ = ulim;
  loLimit_ = 0;
  hiLimit_ = ulim;
  rgn_ = ((rand() % ulim) + 1);
  return rgn_;
}

#ifdef MAINTEST
#include<iostream>

using namespace std;

main()
{
  Rand r2(2);
  int n;
  cout << "First Range 1-2" << endl;
  for (n = 0; n < 20; n++)
    cout << r2.rnd() << " ";
  cout << endl;
  Rand r6(0,3);
  cout << "2nd Range 0-3" << endl;
  for (n = 0; n < 20; n++)
    cout << r6.rnd() << " ";
  cout << endl;
  cout << "Now Range 1-100" << endl;
  Rand r100(100);
  for (n = 0; n < 20; n++)
    cout << r100.rnd() << " ";
  cout << endl;

  cout << "Finally Range 0-9\n";
  Rand r9(0,9);
  for (n = 0; n < 20; n++)
    cout << r9.rnd() << " ";
  cout << endl;
  
}
#endif
