#include <bits/stdc++.h>
using namespace std;
int findscore(vector<int> &quantity,vector<string> &ele,vector<string> emotion){
	int score=0;
	int res=0;
	int siz = quantity.size(); 
	for (int i = 0; i <siz; ++i){
		int val=emotion[i].size();
		if(val==5){
          res =10;
		}
		else if(val ==3){
			res=5;
		}
		else if(val ==4){
			res=1;
		}
		else{
			res=7;
		}
		score +=quantity[i]*res;

	}
    return score;
	}
	int findvowel(vector<int> &quantity,vector<string> &ele,unordered_map<string,int> vowval){
		int score=0;
		int siz = quantity.size();
		for(int i=0; i<siz;i++){
			score += vowval[ele[i]]*quantity[i];
		}
		return score;
	}

int main() {
    int n;
    cin >> n;
    vector<int> quantity;
    int temp;
    vector<string> ele;
    vector<string> emotion;
    string element[] = {"LAND","ROAD","PEOPLE","STONE","CLOUDS","HOUSE","FOREST","GATES","WATER","ELECTRICITY","AGRICULTURAL","FARMS","SHOPS","TRANSPORT","MOUNTAINS"};
    int vow[]={1,2,3,2,2,3,2,2,2,5,5,1,1,2,4};
    unordered_map<string,int> vowval;
    for(int i=0; i<15; i++){
    	vowval[element[i]]=vow[i];
    }
    string ele1;
    for(int i=0; i<n; i++){
    	cin >> temp;
    	quantity.push_back(temp);
        cin >> ele1;
        ele.push_back(ele1);
    }
    for(int i=0; i<n; i++){
    	cin >> ele1;
    	emotion.push_back(ele1); 
    }

    int score1 =findscore(quantity,ele,emotion);
    int score2 =findvowel(quantity,ele,vowval);
    int prime;
    if(score1>score2){
    	 prime = score1/score2;
    }
    else{
    	prime =score2/score1;
    }

    switch(prime) {
    case 1:
    cout << "NO"<<" ONE";
        break;
    case 2:
       cout <<"YES"<<" TWO";
    break;
    case 3:
    cout << "YES" << " THREE";
    break;
    case 4:
    cout << "NO" << " FOUR";
    break;
    case 5:
    cout << "YES" << " FIVE";
    break;
    case 6:
    cout << "NO" << " SIX";
    break;
    case 7:
    cout << "YES" << " SEVEN";
    break;
    case 8:
    cout << "NO" << " EIGHT";
    break;
    case 9:
    cout << "NO" << " NINE";
    break;
}
  
    return 0;
}