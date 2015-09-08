#include <iostream>
using namespace std;

int cn, money;
int coin[10], d[10000];

void CC(){
	d[0]=1;
	for(int i=cn-1; i>=0; i--){
		for(int j= coin[i]; j<=money; j++){
			d[j] += d[j-coin[i]];
		}
	}
	cout << d[money] << endl;
}

int main(){
	cin >> cn;
	for(int i=0; i<cn; i++){
		cin >> coin[i];
	}
	cin >> money;
	
	// cc() 호출
	CC();
	
	return 0;
}

