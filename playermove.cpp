void playerMove(char *spaces, char player){
    int number;
    do{
        cout << "Enter a spot to place a marker (1-9): ";
        cin >> number;
        number--; // Adjust for zero-based indexing
        if(spaces[number] == ' '){
           spaces[number] = player;
           break; 
        }
    } while(!number > 0 || !number < 8);
}
