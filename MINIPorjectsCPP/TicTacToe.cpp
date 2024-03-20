#include<bits/stdc++.h>

#define COMPUTER 1
#define HUMAN 2

#define SIDE 3

#define COMPUTERMOVE 'O'
#define HUMANMOVE 'X'

void showInstructions(){
    std::cout<<"\nChoose a cell Number form 1 to 9 and play\n\n";
    std::cout<<"\t\t\t 1 | 2 | 3 \n";
    std::cout<<"\t\t\t---------- \n";
    std::cout<<"\t\t\t 4 | 5 | 6 \n";
    std::cout<<"\t\t\t---------- \n";
    std::cout<<"\t\t\t 7 | 8 | 9 \n\n\n";
}
void initialise(char board[][SIDE]){
    for(int i = 0; i < SIDE; i++){
        for(int j = 0; j < SIDE; j++){
            board[i][j] = '*';
        }
    }
}

bool rowCrossed(char board[][SIDE]){
    for(int i = 0; i < SIDE; i++){

        if(board[i][0] == board[i][1] &&
        board[i][1] == board[i][2] &&
        board[i][0] != '*') return true;

    }
    return false;
}

bool colCrossed(char board[][SIDE]){
    for(int i = 0; i < SIDE; i++){

        if(board[0][i] == board[1][i] &&
        board[1][i] == board[2][i] &&
        board[0][i] != '*') return true;

    }
    return false;
}

bool diagonalCrossed(char board[][SIDE]){
    if(board[0][0] == board[1][1] &&
    board[1][1] == board[2][2]&&
    board[0][0] != '*') return true;

    if(board[0][2] == board[1][1] &&
    board[1][1] == board[2][0]&&
    board[0][2] != '*') return true;

    return false;
}

bool gameOver(char board[][SIDE]){
    if(rowCrossed(board) || colCrossed(board) || diagonalCrossed(board)) return true;
    return false;
}

bool showBoard(char board[][SIDE]){
    std::cout<<"\n\n\t\t\t "<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<" \n";
    std::cout<<"\t\t\t---------- \n";
    std::cout<<"\t\t\t "<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<" \n";
    std::cout<<"\t\t\t---------- \n";
    std::cout<<"\t\t\t "<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<" \n\n\n";
}

int minimax(char board[][SIDE], int depth, bool isCOM){
    int score = 0,bestScore = 0;
    if(gameOver(board) == true){
        if(isCOM) return -10;
        else return +10;
    }
    else if(depth < 9){
        if(isCOM){
            bestScore = -100;
            for(int i = 0; i < SIDE; i++){
                for(int j = 0; j < SIDE; j++){
                    if(board[i][j] == '*'){
                        board[i][j] = COMPUTERMOVE;
                        score = minimax(board, depth + 1, false);
                        board[i][j] = '*';
                        if(score > bestScore){
                            bestScore = score;
                        }
                    }

                }
            }
            return bestScore;
        }
        else{
            bestScore = 100;
            for(int i = 0; i < SIDE; i++){
                for(int j = 0; j < SIDE; j++){
                    if(board[i][j] == '*'){
                        board[i][j] = HUMANMOVE;
                        score = minimax(board, depth + 1, true);
                        board[i][j] = '*';
                        if(score < bestScore){
                            bestScore = score;
                        }
                    }

                }
            }
            return bestScore;
        }
    }
    else return 0;
}
int bestMove(char board[][SIDE], int moveIndex){
    int x = -1, y = -1;
    int score = 0, bestScore = -100;
    for(int i = 0; i < SIDE; i++){
        for(int j = 0; j < SIDE; j++){
            if(board[i][j] == '*'){
                board[i][j] = COMPUTERMOVE;
                score = minimax(board, moveIndex + 1, false);
                board[i][j] = '*';
                if(score > bestScore){
                    bestScore = score;
                    x = i; 
                    y = j;
                }

            }
        }
    }
    return x * 3 + y;
}
void playTicTacToe(int turn){
    char board[SIDE][SIDE];
    int moveIndex = 0, x = 0, y = 0;

    initialise(board);
    showInstructions();

    while(gameOver(board) == false && moveIndex < SIDE * SIDE){
        int n;
        if(turn == COMPUTER){
            n = bestMove(board, moveIndex);
            x = n / SIDE;
            y = n % SIDE;
            board[x][y] = COMPUTERMOVE;     
            std::cout<<"COMPUTER has placed a"<<COMPUTERMOVE<<" in cell "<< n + 1<<"\n\n";
            showBoard(board);
            moveIndex++;
            turn = HUMAN;
        }
        else if(turn == HUMAN){
            std::cout<<"\nYou can insert in follwoing positions: ";
            for(int i = 0; i < SIDE; i++){
                for(int j = 0; j < SIDE; j++){
                    if(board[i][j] == '*'){
                        std::cout<<i * 3 + j + 1<<" ";
                    }
                }
            }
            std::cout<<"\nEnter the position: ";
            std::cin>>n;
            n--;
            x = n / SIDE;
            y = n % SIDE;

            if(board[x][y] == '*' && n < 9 && n >= 0){
                board[x][y] = HUMANMOVE;
                std::cout<<"HUMAN has placed "<<HUMANMOVE<<" in the cell "<<n + 1<<"\n\n";
                showBoard(board);
                moveIndex++;
                turn = COMPUTER;
            }
            else if(board[x][y] != '*' && n < 9 && n >= 0)
                std::cout<<"\nThe position is already occupied please select some other position!\n";
            else{
                std::cout<<"\nThe position is invalid\n";
            }
        }
    }
    if(gameOver(board) == false && moveIndex == SIDE * SIDE){
        std::cout<<"\nIt is a draw\n";
    }
    else {
        if(turn == HUMAN){
            std::cout<<"\nThe computer wins!\n";
        }
        else{
            std::cout<<"\nHuman wins: \n";
        }
    }
}


int main(){
    std::cout<<"\n------------------------------------------------------------\n\n";
    std::cout<<"\t\tTic-Tac-Toe\n";
    std::cout<<"\n------------------------------------------------------------\n\n";
    char count = 'y';
    do{
        char choice;
        std::cout<<"\nDo you want to start first?(y / n):  ";
        std::cin>>choice;
        if(choice == 'n'){
            playTicTacToe(COMPUTER);
        }
        else if(choice == 'y'){
            playTicTacToe(HUMAN);
        }
        else{
            std::cout<<"\nInvalid choice!\n";
        }
        std::cout<<"Do you want to quit?(y / n): ";
        std::cin>>count;
    }while(count != 'y');
    return 0;
}