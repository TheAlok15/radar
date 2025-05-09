// Program A
#include <iostream>
#include <vector>
#include <conio.h>
#include <Windows.h>

const int GRID_SIZE = 20;

using namespace std;

int main() {
    vector<vector<char>> radarGrid(GRID_SIZE, vector<char>(GRID_SIZE, '.'));

    int radarX = GRID_SIZE / 2;
    int radarY = GRID_SIZE / 2;
    radarGrid[radarX][radarY] = 'X';

    char move;
    bool running = true;

    while (running) {
        system("cls");

        // Display the radar grid
        cout << "=== Radar System ===" << endl;
        for (int i = 0; i < GRID_SIZE; ++i) {
            for (int j = 0; j < GRID_SIZE; ++j) {
                cout << radarGrid[i][j] << ' ';
            }
            cout << endl;
        }

        cout << "\nUse WASD keys to move the radar (X): " << endl;
        cout << "Press 'q' to quit." << endl;

        // Get the user input
        if (_kbhit()) {
            move = _getch();

            
            if (move == 'w' && radarX > 0) { // Move up
                radarGrid[radarX][radarY] = '.';
                radarX--;
            }
            else if (move == 's' && radarX < GRID_SIZE - 1) { // Move down
                radarGrid[radarX][radarY] = '.';
                radarX++;
            }
            else if (move == 'a' && radarY > 0) { // Move left
                radarGrid[radarX][radarY] = '.';
                radarY--;
            }
            else if (move == 'd' && radarY < GRID_SIZE - 1) { // Move right
                radarGrid[radarX][radarY] = '.';
                radarY++;
            }
            else if (move == 'q') { // Quit the program
                running = false;
                break;
            }

            radarGrid[radarX][radarY] = 'X'; // Update the radar's new position
        }
        Sleep(100); 
    }

    return 0;
}
