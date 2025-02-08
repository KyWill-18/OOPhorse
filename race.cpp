#include <iostream>
#include "horse.h"
#include "race.h"


Race::Race(){
	
	for(int nh = 0; nh < NUM_HORSES; nh++){
		horses[nh].init(nh, TRACK_LENGTH);
	}
}

void Race::run() {
	
	bool keepGoing = true;
	while (keepGoing){
		for (int nh = 0; nh < NUM_HORSES; nh++){
			horses[nh].advance();
			horses[nh].printLane();
			if (horses[nh].isWinnter()){
				keepGoing = false;
			
			}
		}
		std::cout << "Press Enter to Continue" << std::endl;
		std::cin.ignore():
	}
}

