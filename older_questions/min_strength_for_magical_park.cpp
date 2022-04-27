#include<iostream>
#include<cstring>

using namespace std;
int main(){
    int n,m, strength, start_str;
    cin >> n >> m >> strength >> start_str;
    char mat[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> mat[i][j];
        }
    }
 for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(mat[i][j] == '.'){
                start_str  = start_str -2;
            }
            else if(mat[i][j] == '*'){
                start_str = start_str +5;
            }
            else{
                break;
            }
			if(j==m-1){

			}
              else{
            start_str--; 
			}
        }
    }
    if(start_str > strength){
        cout << "yes" << endl << start_str;
    }
    else{
        cout << "no";
    }

    return 0;
}