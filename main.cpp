#include "game.h"
using namespace std;

int main() {

	Game game;
	game.letsBegin();

	cout<<"\nPress Enter to continue"<<endl;
	getchar();

	game.showAllPlayers();

	cout<<"\nPress Enter to continue"<<endl;
	getchar();

	game.selectPlayers();
	game.showTeamPlayers();

	cin.ignore(numeric_limits<streamsize>::max(),'\n');

	cout<<"\nPress Enter to toss"<<endl;
	getchar();

	game.toss();

    game.startFirstInnings();
    game.startSecondInnings();
    game.showMatchSummary();

	return 0;
}

