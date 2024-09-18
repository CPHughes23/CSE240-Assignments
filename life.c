// TODO: Simulate the game of life
// TODO: create main function that collects input and runs game while c != 'q'
// TODO: create run_game_of_life function that simulates the game of life
// TODO: convert comma separated list to array of ints
// TODO: create 2d array to represent the generation
// TODO: create print_generation function that prints the board
// ????
// profit


#include <stdio.h>

int main() {
    char user_input;
    printf("Welcome! Press 'q' to quit or any other key to continue: ");
    user_input = getchar();
    while (user_input != 'q') {
        //run_game_of_life();

        printf("Press 'q' to quit or any other key to continue: ");
        user_input = getchar();
    }
    return 0;
}
