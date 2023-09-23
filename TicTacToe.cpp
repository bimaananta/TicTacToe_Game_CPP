#include<iostream>
using namespace std;

int main(){
	// Inialisasi variabel
	string boxes[] = {"1","2","3","4","5","6","7","8","9"};
	string player1 = "x";
	string player2 = "o";
	string locationSelect1;
	string locationSelect2;
	int countPlayer1 = 0;
	int countPlayer2 = 0;
	int index = 0;
	bool again = true;
	bool winner = false;
	
	// Looping Gameplay
	while(again == true){
		// Tabel Tic Tac Toe
		for(int i = 0; i < 3; i++){
			for(int j = 1; j <= 7; j++){
				if(j == 1 || j == 3 || j == 5 || j == 7){
					cout << "|";
				}
				else if(j == 2 || j == 4 || j == 6){
					cout << boxes[index];
					if(index > 7){
						index = 0;
					}
					else{
						index++;
					}
				}
			}
			cout << endl;
		}
		// Akhir Tabel
		
		if(winner == false){
			// Memasukkan input dari player
			if(countPlayer1 == countPlayer2){
				cout << "Player 1 (x) : ";
				cin >> locationSelect1;
				countPlayer1++;
				for(int i = 0; i < 9; i++){
					if(boxes[i] == locationSelect1){
						boxes[i] = player1;
						break;
					}
				}
			}
			else if(countPlayer1 > countPlayer2){
				cout << "Player 2 (o) : ";
				cin >> locationSelect2;
				countPlayer2++;
				for(int i = 0; i < 9; i++){
					if(boxes[i] == locationSelect2){
						boxes[i] = player2;
						break;
					}
				}
			}
		}
		else if(winner == true){
			break;
		}
		
		// Pengkondisian untuk penentuan pemenang
		if((boxes[0] == "x" && boxes[1] == "x" && boxes[2] == "x") || 
			(boxes[0] == "x" && boxes[3] == "x" && boxes[6] == "x") ||
			(boxes[6] == "x" && boxes[7] == "x" && boxes[8] == "x") ||
			(boxes[2] == "x" && boxes[5] == "x" && boxes[8] == "x") ||
			(boxes[1] == "x" && boxes[4] == "x" && boxes[7] == "x") ||
			(boxes[0] == "x" && boxes[4] == "x" && boxes[8] == "x") ||
			(boxes[2] == "x" && boxes[4] == "x" && boxes[6] == "x")
			)
			{
				cout << "Player 1 Memenangkan Permainan !" << endl;
				winner = true;
			}
		else if((boxes[0] == "o" && boxes[1] == "o" && boxes[2] == "o") || 
			(boxes[0] == "o" && boxes[3] == "o" && boxes[6] == "o") ||
			(boxes[6] == "o" && boxes[7] == "o" && boxes[8] == "o") ||
			(boxes[2] == "o" && boxes[5] == "o" && boxes[8] == "o") ||
			(boxes[1] == "o" && boxes[4] == "o" && boxes[7] == "o") ||
			(boxes[0] == "o" && boxes[4] == "o" && boxes[8] == "o") ||
			(boxes[2] == "o" && boxes[4] == "o" && boxes[6] == "o")
			)
			{
				cout << "Player 2 Memenangkan Permainan !" << endl;
				winner = true;		
			}
	}
	return 0;
}
