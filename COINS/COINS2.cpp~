/*
	 COINS

	 @author Taeyoon Moon
	 @dated 2015. 09. 07
	 
	 Dynamic Programming(DP)

*/

#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[]){
	int testcase, money, c_count;
	int d[5001];

	cin >> testcase;
	for(int i=0; i<testcase; i++){
		cin >> money >> c_count;
		int coin[c_count];
		for(int j=0; j<c_count; j++){
			cin >> coin[j];
		}
		
		d[0] = 1;	
		for(int k=c_count-1; k>=0; k--){
			for(int l=coin[k]; l<=money; l++){
					d[l] += d[l-coin[k]];
			}
		}
		cout << d[money] << endl;
	}
	return 0;
}

