#
# rand makefile
#

LD_LIBRARY_PATH=../../gtest/lib/.libs
DYLD_FRAMEWORK_PATH=../gtest/lib/.libs
GTESTLIB=-L../gtest/lib/.libs

CFLAGS=-std=c++11 -I../gtest/include

all: rand_string

rand_ut: rand_ut.cc ../rand/rand.cc ../rand/rand.h
	g++ $(CFLAGS) rand_ut.cc ../rand/rand.cc -o $@ $(GTESTLIB) -lgtest -lgtest_main

rand_string: rand_string.cc
	g++ $(CFLAGS) -c rand_string.cc
	[ ! -d ../lib ] && mkdir ../lib
	ar r ../lib/libutil.a rand_string.o

clean: 
	rm -f *.o rand_ut
