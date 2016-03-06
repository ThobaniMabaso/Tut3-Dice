//Thobani Mabaso (212535063)

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Dice{
public:
	Dice();
	void Roll();
	void Dislay();
	void Reset();
private:
	int LastRoll;
	int TotalRolls;
	int TotalScore;
};

Dice::Dice() : LastRoll(0), TotalRolls(0), TotalScore(0)
{}
void Dice::Roll(){
	LastRoll = 0;
	TotalRolls++;

	//generate a randm number betweem 1 and 6
	LastRoll = (rand() % 6) + 1;
	TotalScore += LastRoll;
}

void Dice::Dislay(){
	cout << "Your last roll was" << ": " << LastRoll << "." << endl;
	cout << "You have rolled" << ": " << TotalRolls << " " << "times" << endl;
	cout << "Your Total score is" << ": " << TotalScore << "." << endl << endl;
}

void Dice::Reset(){
	LastRoll = 0;
	TotalScore = 0;
	TotalRolls = 0;
}

int main(){
	//seed the random number generator
	srand(static_cast<unsigned int>(time(0)));
	Dice MyDice;
	MyDice.Dislay();

	for (int i = 0; i < 6; i++) {
		MyDice.Roll();
		MyDice.Dislay();
	}

	MyDice.Reset();
	MyDice.Dislay();

	cin.get();

	system("pause");
	return 0;
}
