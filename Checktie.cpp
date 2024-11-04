cpp

bool checkTie(char *spaces){
    for(int i = 0; i < 9; i++){
        if(spaces[i] == ' '){ // Check for any empty space
            return false; // Game is not a tie if there's an empty space
        }
    }
    cout << "IT'S A TIE!\n"; // Inform about the tie
    return true; // All spaces filled, so it's a tie
}
