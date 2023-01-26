/* Part-1: Setting up the main board 
   Part-2: Receiving moves from player
   Part-3: Programming computer moves
   Part-4: Implementing AI
*/

//Part-1

#include<stdio.h>
const int NOUGHT = 1;
const int CROSSES = 2;
const int BORDER = 3;
const int EMPTY = 0;

const int ConvertTo25[9] = {
    6,7,8,
    11,12,13,
    16,17,18
};

void InitialiseBoard(int *board){
    int i=0;
    for(i=0;i<25;i++){
            board[i] = BORDER;
    }
    for(i=0;i<9;i++){
        board[ConvertTo25[i]] = EMPTY;
    }
}

void PrintBoard(int *board){
    int i=0;
    printf("\n Board \n");
    for(i=0;i<25;i++){
        if(i!=0 && i%5==0){
            printf("\n\n");
        }
        printf("%4d",board[i]);
    }
    printf("\n");



}



int main() {
    /* A simple way to represent the  board is to use a one dimensional array of size 9 that should look
    like this : 
    - - -
    - - -
    - - -
    but this is going to be problematic because later on we are going to create a function that anticipate 
    winning moves from the user and blocks them.
    For example: 
    - o x
    x - -
    - - -
    the crosses represent the human side. 
    At this point , it's the computer's turn to play, the function walks through the board an sees if the 
    user could win , it needs to place a blocking moe to prevent player from winnning.
    In this case, as the function goes through index 2 and 3 , it considers the two crosses next to each other,
    but as we can see they are on different rows and sides and they dono't represent a straight line, in order
    to avoid this misunderstanding, we need to create borders around the main board, it should look like:
    :,:,:,:,:,
    :,o,-,x,:,
    :,x,-,-,:,
    :,-,-,-,:,
    :,:,:,:,:,
    another issue is that the user will be asked to enter his move on the basic of 1 to 9 index, so we need to 
    convert those into their equivalents in the 25 sized array.
*/

    int board[25];
    InitialiseBoard(board);
    PrintBoard(board);







    return 0;
}





