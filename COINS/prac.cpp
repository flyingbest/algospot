#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int d[7490], n, i, j;
	int coin[4] = {5, 10, 25, 50};

	fill(d, d+7490, 1);
	for(i = 0; i < 4; i++){
		for(j = coin[i]; j < 7490; ++j){
			d[j] += d[j-coin[i]];
		}
	}

	while(cin >> n) cout << d[n] << endl;
	return 0;
}

