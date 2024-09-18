#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_ENTRY_LENGTH 32

char GetPlayerMove();

char GetComputerMove();

void PlayRockPaperScissorsGame(char p_move, char c_move);

int main() {
    char player_move, computer_move;

    printf("Welcome to Rock, Paper, Scissors! Press 'q' to quit or any other key to continue: ");

    scanf("%c", &player_move);

    while (player_move != 'q') {
        player_move = GetPlayerMove();
        computer_move = GetComputerMove();
        
        PlayRockPaperScissorsGame(player_move, computer_move);
        printf("Press 'q' to quit or any other button to continue\n");
        while(getchar() != '\n');
        scanf("%c", &player_move);
    }
    
    printf("Bye Bye!\n");

    return 0;
}

char GetPlayerMove() {
    // prompt player for move
    // reprompt if move is not 'r' 'p' 's' or 'q'
    // return move
    char* player_move = malloc(sizeof(char) * MAX_ENTRY_LENGTH);

    while (1) {
        printf("Enter your move (r for rock, p for paper, s for scissors): ");
        scanf(" %s", player_move);
        if (strlen(player_move) != 1 || (player_move[0] != 'r' && player_move[0] != 'p' && player_move[0] != 's')) {
            printf("Invalid move. ");
        } else {
            char player_move_char = player_move[0];
            free(player_move);
            return player_move_char;
        }
    }
}
char GetComputerMove() {
    // return random move {'r', 'p', 's')}
    srand(time(NULL));
    int random_number = rand() % 3;
    if (random_number == 0) {
        return ('r');
    } else if (random_number == 1) {
        return ('p');
    } else {
        return ('s');
    }
}

void PlayRockPaperScissorsGame(char p_move, char c_move) {
    // get moves from each
    // decide who wins
    // display winner
    printf("Computer's move: %c\n", c_move);
    if ((p_move == 'r' && c_move == 's') || (p_move == 'p' && c_move == 'r') || (p_move == 's' && c_move == 'p')) {
        printf("You Win!\n");
    } else if (p_move == c_move) {
        printf("It's a Tie!\n");
        } else {
        printf("Computer Wins!\n");
    }
}