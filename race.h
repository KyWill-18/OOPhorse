#ifndef RACE_H_EXISTS
#define RACE_H_EXISTS

#include "horse.h"

class Race {
	private:
		const int TRACK_LENGTH = 10;
		const int NUM_HORSES = 5;
		Horse horses[NUM_HORSES];
	
	public:
		Race();
		void run();

};

#endif
