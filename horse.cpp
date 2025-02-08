#include <iostream>
#include "horse.h"
#include <random> 


std::random_device rd;
std::uniform_int_distribution<int> dist(0,1);

Horse::Horse(){
	Horse::position = 0;
	Horse::id = 0;
	Horse::trackLength = 10;

}

//
void Horse::init(int id, int trackLength){
	Horse::position = 0;
	Horse::id = id;
	Horse::trackLength = trackLength;

}

//
void Horse::advance(){
	int coin = dist(rd);
	Horse::position += coin;

}

//
void Horse::printLane(){
	for (int i = 0; i < trackLength; i++){
		if (i == position){
			std::cout << id;
		}
		
		else{
			std::cout << ".";
		}
	}
	std::cout << std::endl;
}

//
bool Horse::isWinner(){
	bool result = false;
	if (position > trackLength){
		std::cout << id << "is the winner!";
		result = true;
	}

	return result;
}

//
void Horse::run(){
	bool keepGoing = true;
	while (keepGoing){
		advance();
		printLane();
		if (isWinner()){
			keepGoing = false;
		}
	}
}
