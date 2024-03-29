// HW.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <ctime> // will be used for rand() the rng 
#include <thread> // used to call sleep_for and thread to command the program to wait for a specified time
#include <chrono> // this will be used so that the program can recognize seconds
using namespace std;

int GetMeARandomNumber()
{
	// all these vars are local, so we can use same names outside 
	// of this function and they are considered different.
	// These vars are born and die inside this function. 
	int max = 64; // setting the range to 64

	int random_number = rand() % max + 1; // if we do not do this then 64 will not be included in guesses, 1 - 63
	return random_number;
}

int main()
{

	// ************ START ONE TIME INIT Section *****************************
							   // random_number will store the guessed number
							   // and i will be the iteration so that we can run the loop 64 times
	int  hidinglocation = 0;// this is the number that we will check against the guessed number to see if we've found them
	srand(static_cast<unsigned int>(time(0))); // seeding so that we can get different numbers every time we run this program
	hidinglocation = GetMeARandomNumber();

	// ************ END ONE TIME INIT Section *****************************

	// ************ Start User Search Section *****************************
	cout << "INITIATING PROJECT user SEARCH AND DESTROY HUMAN THREAT" << endl;
	cout << "AREA'S 1 THROUGH 64 WILL BE SEARCHED IN 8X8 GRID SEARCH PATTERN FOR TARGETS" << endl;
	//cout << "the Target is at located at:" << hidinglocation << endl;
	// line 27 sets i to 0 first and increments it by 1 for each search, once it reaches 64, the search will stop
	// below bool is for the user search
	bool isTargetFoundByuserAlgorithm = false;
	int userAlgorithimPredictionCounter = 0;
	int userAlgorithimPrediction = 0;
	do {
		userAlgorithimPredictionCounter++;
		// Gets a user number for a guess
		
		cout << "Where do you think the target is located User? ";
		cin >> userAlgorithimPrediction;


		cout << "Our user algorithm guess = " << userAlgorithimPrediction << endl;
		// referencing this program, and telling it to wait 1 second each time it reaches this point before it continues
		std::this_thread::sleep_for(std::chrono::seconds(1));

		/* this below block will be executed if the target is found
		aka when hidinglocation matches user_number which is our guess variable */

		if (hidinglocation == userAlgorithimPrediction) {
			cout << "TARGET LOCATED AT " << hidinglocation << endl;
			system("pause");
			cout << "TARGET DECIMATED" << endl;
			system("pause");
			// after this it will close out
			isTargetFoundByuserAlgorithm = true;
		}
		else {
			cout << "LOOK UNDER YOUR BED NEXT TIME" << endl;

		}
		// this will execute when the target is not found


	} while (!isTargetFoundByuserAlgorithm);

	// ************ ENd User Search Section *****************************

		// ************ Start binary Search Section *****************************
	cout << "INITIATING PROJECT binary SEARCH AND DESTROY HUMAN THREAT" << endl;
	cout << "AREA'S 1 THROUGH 64 WILL BE SEARCHED IN 8X8 GRID SEARCH PATTERN FOR TARGETS" << endl;
	cout << "the Target is at located at:" << hidinglocation << endl;
	// line 27 sets i to 0 first and increments it by 1 for each search, once it reaches 64, the search will stop
	// below bool is for the random search
	bool isTargetFoundByBinaryAlgorithm = false;
	int binaryAlgorithimPrediction = 0;
	int binaryAlgorithimPredictionCounter = 0;
	int searchGridHighNumber = 64;
	int searchGridLowNumber = 1;
	int reduceAmount = 0;

	do {
		binaryAlgorithimPredictionCounter++;
		// Gets a binary number for a guess
		int binaryAlgorithimPrediction = ((searchGridHighNumber - searchGridLowNumber) / 2) + searchGridLowNumber;

		cout << "Our binary algorithm guess = " << binaryAlgorithimPrediction << endl;
		// referencing this program, and telling it to wait 1 second each time it reaches this point before it continues
		std::this_thread::sleep_for(std::chrono::seconds(1));

		// if the the guess was too high execute the block below
		if (hidinglocation < binaryAlgorithimPrediction) {
			cout << "PREDICTION WAS TOO HIGH " << binaryAlgorithimPrediction << endl;
			cout << "CHANGING SEARCH GRID HIGH NUMBER FROM " << searchGridHighNumber;
			searchGridHighNumber = binaryAlgorithimPrediction - 1;
			// this will execute when the target is not found
			cout << " TO " << searchGridHighNumber << endl;

		}
		// // if the the guess was too low execute the block below
		else if (hidinglocation > binaryAlgorithimPrediction) {
			cout << "PREDICTION WAS TOO LOW " << binaryAlgorithimPrediction << endl;
			cout << "CHANGING SEARCH GRID LOW NUMBER FROM " << searchGridLowNumber;
			searchGridLowNumber = binaryAlgorithimPrediction + 1;
			// this will execute when the target is not found
			cout << " TO " << searchGridLowNumber << endl;

		}
		/* this below block will be executed if the target is found
		aka when hidinglocation matches random_number which is our guess variable */

		else if (hidinglocation == binaryAlgorithimPrediction) {
			cout << "TARGET LOCATED" << endl;
			system("pause");
			cout << "TARGET DECIMATED" << endl;
			system("pause");
			// after this it will close out
			isTargetFoundByBinaryAlgorithm = true;
		}
		else {

			cout << "Error with binary prediction" << endl;
		}


	} while (!isTargetFoundByBinaryAlgorithm);

	// ************ End binary Search Section *****************************






// ************ Start Linear Search Section *****************************
	cout << "INITIATING PROJECT LINEAR SEARCH AND DESTROY HUMAN THREAT" << endl;
	cout << "AREA'S 1 THROUGH 64 WILL BE SEARCHED IN 8X8 GRID SEARCH PATTERN FOR TARGETS" << endl;
	cout << "the Target is at located at:" << hidinglocation << endl;
	// line 27 sets i to 0 first and increments it by 1 for each search, once it reaches 64, the search will stop
	// below bool is for the random search
	bool isTargetFoundByLinearAlgorithm = false;
	int linearAlgorithimPrediction = 0;
	int linearAlgorithimPredictionCounter = 0;

	do {
		linearAlgorithimPredictionCounter++;
		// Gets a linear number for a guess
		linearAlgorithimPrediction++;
		cout << "Our Linear algorithm guess = " << linearAlgorithimPrediction << endl;
		// referencing this program, and telling it to wait 1 second each time it reaches this point before it continues
		std::this_thread::sleep_for(std::chrono::seconds(1));

		/* this below block will be executed if the target is found
		aka when hidinglocation matches random_number which is our guess variable */

		if (hidinglocation == linearAlgorithimPrediction) {
			cout << "TARGET LOCATED" << endl;
			system("pause");
			cout << "TARGET DECIMATED" << endl;
			system("pause");
			// after this it will close out
			isTargetFoundByLinearAlgorithm = true;
		}
		// this will execute when the target is not found
		cout << "TARGET NOT FOUND YET, STILL HUNTING, REINITIALIZING SEARCH IN ANOTHER SECTOR " << endl;

	} while (!isTargetFoundByLinearAlgorithm);

	// ************ End Linear Search Section *****************************


	// ************ Start Random Search Section *****************************
	cout << "INITIATING PROJECT RANDOM SEARCH AND DESTROY HUMAN THREAT" << endl;
	cout << "AREA'S 1 THROUGH 64 WILL BE SEARCHED IN 8X8 GRID SEARCH PATTERN FOR TARGETS" << endl;
	cout << "the Target is at located at:" << hidinglocation << endl;
	// line 27 sets i to 0 first and increments it by 1 for each search, once it reaches 64, the search will stop
	// below bool is for the random search
	bool isTargetFoundByRandomAlgorithm = false;
	int randomAlgorithimPredictionCounter = 0;
	do {
		randomAlgorithimPredictionCounter++;
		// Gets a random number for a guess
		int randomAlgorithimPrediction = GetMeARandomNumber();
		cout << "Our Random algorithm guess = " << randomAlgorithimPrediction << endl;
		// referencing this program, and telling it to wait 1 second each time it reaches this point before it continues
		std::this_thread::sleep_for(std::chrono::seconds(1));

		/* this below block will be executed if the target is found
		aka when hidinglocation matches random_number which is our guess variable */

		if (hidinglocation == randomAlgorithimPrediction) {
			cout << "TARGET LOCATED" << endl;
			system("pause");
			cout << "TARGET DECIMATED" << endl;
			system("pause");
			// after this it will close out
			isTargetFoundByRandomAlgorithm = true;
		}
		// this will execute when the target is not found


	} while (!isTargetFoundByRandomAlgorithm);

	// ************ ENd Random Search Section *****************************





	// *************************** End of Simulation below this********************
	cout << "END OF SIMULATION, TALLYING UP NUMBER OF SEARCHES TO COMPARE HUMAN HUNTING EFFIENCY " << endl;
	cout << "USER SEARCHES: " << userAlgorithimPredictionCounter << endl;
	cout << "BINARY SEARCHES: " << binaryAlgorithimPredictionCounter << endl;
	cout << "LINEAR SEARCHES: " << linearAlgorithimPredictionCounter << endl;
	cout << "RANDOM SEARCHES: " << randomAlgorithimPredictionCounter << endl;
	system("pause");
	return 0;
}



