#include <iostream>
using namespace std;

int main(){
	string scores;
	getline(cin,scores);
	bool isPlayer1 = true;
	int player1=0,player2=0,extras=0;

	for(auto i: scores){
		if(i == '.' || i == ' ') continue;
		if(i == 'W' || i == 'N'){
			extras++;
		}
		else{
			int score = i - '0';
			if(isPlayer1){
				 player1 += score;
				 if(score & 1) isPlayer1 = false;
			}
			else{
				 player2 += score;
				 if(score & 1) isPlayer1 = true;
			}
			
			
		}
	}
	cout << "P1 - " << player1 << endl;
	cout << "P2 - " << player2 << endl;
	cout << "Extras - " << extras;
}


// Given a timeline of scores, find the individual scores of player 1 and player 2 and Extras

// W – Wide N – No Ball . – Dot Ball

// Consider the game starts from player 1

// I/P:

// 1 . 2 . 4 3 6 W 1 . N . 2 1

// O/P:

// P1 – 8

// P2 – 12

// Extras – 2
