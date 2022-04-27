#include<iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int mat[N][N];
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cin >> mat[i][j];
        }
    }


 for (int x = 0; x < N / 2; x++) {
        
        for (int y = x; y < N - x - 1; y++) {
            
            int temp = mat[x][y];
 
            
            mat[x][y] = mat[y][N - 1 - x];
 
            mat[y][N - 1 - x]
                = mat[N - 1 - x][N - 1 - y];
 
            mat[N - 1 - x][N - 1 - y]
                = mat[N - 1 - y][x];
 
            mat[N - 1 - y][x] = temp;
        }
    }
    for(int i=0; i<N; i++){
    for(int j=0; j<N; j++){
        cout << mat[i][j] << " " ;
    }
    cout << "" << endl;
    }
    }
