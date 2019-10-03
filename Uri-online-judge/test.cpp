#include <iostream>
using namespace std;

class CheckBoarad{
    public: 
    void intBoard(){
        for (int y=0;y<8;y++){
            for (int x = 0;x<8;x++){
                if((x%2)==0){
                    board[y][x] = ' ';
                }else{
                    board[y][x] = '*';
                }
            }
        }
    }
    void printBoard(){
        for (int y = 0; y < 8; y++){
            for (int x = 0; x < 8; x++){
                cout << board[y][x];
            }
            cout << endl;
        }
    }
    private:
        char board[8][8];
};

int main(){
    CheckBoarad checkerBoard;
    checkerBoard.intBoard();
    checkerBoard.printBoard();
    return 0;
}