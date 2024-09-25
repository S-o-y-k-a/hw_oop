#pragma once
#include<iostream>

class Criminal {
public:

	Criminal() {}
	virtual void last_words() {
		std::cout << "This soon? Oh, please, one last minute of sleep, just one minute!" << "\n";
	}
};

class Murderer : public Criminal{
public:
	Murderer() {}

	void last_words() override {
		std::cout << "I'm innocent! He stole my cookies, what would you do in my place?" << "\n";
	}

};

class Cannibal : public Criminal {
public:
	Cannibal() {}
	void last_words() override {
		std::cout << "nom nom nom" << "\n";
	}

};

class 
	Fraud: public Criminal {
public:
	Fraud() {}

	void last_words() override {
		std::cout << "Come on, it's just buisness!" << "\n";
	}

};

void sentence_time(Criminal*& c, char type) {
	switch (type) {
	case('m') : 
		c = new Murderer;
		break;
	case('c'):
		c = new Cannibal;
		break;
	case('f'):
		c = new Fraud;
		break;
	default:
		c = new Criminal;
	}

}