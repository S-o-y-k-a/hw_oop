#include <iostream>
#include "Header.h"
#include<stdexcept>


int main() {
	
	//four suspects at a court
	int num = 4;
	Criminal** arr = new Criminal* [num];
	
	//giving sentences to the guilty
	sentence_time(arr[0], 'f'); //fraud
	sentence_time(arr[1], 'c'); //cannibalism
	sentence_time(arr[2], 'm'); //murder
	sentence_time(arr[3], 'k'); //default (just a criminal)

	//punishment time!
	for (int i = 0; i < num; i++) {
			(*arr[i]).last_words();
		}
	return 0;
}