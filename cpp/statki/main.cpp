#include <iostream>
using namespace std;

int main() {
	char pole[3][3]={
	    {'.','.','.'},
	    {'.','.','.'},
	    {'.','.','.'}
	};
	int statekx;
	int stateky;
	cout<<"współrzedne statku (3x3)\n";
	cout<<"podaj je(x.y):";
	cin>>statekx>>stateky;

	pole[statekx][stateky] ='S';

	int strzalx;
	int strzaly;
	cout<<"\nGra w statki\n"

	cout<<"plansza:\n"
	for(int i=0; i<3; i++){
	    for(int j=0; j<3; j++){
		cout<<"-";
	    }
	    cout<<endl;
	}
	bool traf=false;
	while(!traf){
	    cout<<"\nWspółrzedne strzału (x.y):";
	    cin>>strzalx>>strzaly;

	if(pole[strzalx][strzaly] =='S'){
	    cout<<"trafiony\n";
	    pole[strzalx][strzaly]='X';
	    traf=true;
	}elseif(pole[strzalx][strzaly]=='-'){
	    cout<<"pudło\n";
	    pole[strzalx][strzaly]='o';
	}
	cout<<"zaktualizowana plansza\n";
	for(int i=0; i<3; i++){
	    for(int j=0; j<3; j++){
		if(pole[i][j]=='S'){
		    cout<<'-';
		}else{
		    cout<<pole[i][j]<<" ";
		}
	    }
	    cout<<endl;
	}
    }
    return 0;
}
