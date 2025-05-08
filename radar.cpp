#include<iostream>
#include<vector>
const int GRID_SIZE = 20;

using namespace std;
int main(){

  

  vector<vector<char>> radarGrid(GRID_SIZE, vector<char>(GRID_SIZE, '.'));

  int radarX = GRID_SIZE / 2;
  int radarY = GRID_SIZE / 2;

  radarGrid[radarX][radarY] = 'X';

  cout<< "=== Radar System ===" << endl;
    for (int i = 0; i < GRID_SIZE; ++i) {
        for (int j = 0; j < GRID_SIZE; ++j) {
            cout << radarGrid[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;



}