#include <iostream>
#include <list>
using namespace std;

void josephus(int n, int k){
	// ready list
	list<int> survivors;
	for(int i=0; i<n; ++i){
		survivors.push_back(i);
	}

	// this is pointer for will be deadman
	list<int>::iterator kill = survivors.begin();
	
	while(n > 2){
		// first man suaside. erase()는 지운 원소의 다음 원소를 반환.
		kill = survivors.erase(kill);
		if(kill == survivors.end()) kill = survivors.begin();
		--n;
		// k-1번 다음 사람으로 옮긴다.
		for(int i=0; i<k-1; ++i){
			++kill;
			if(kill == survivors.end()) kill = survivors.begin();
		}
	}
	cout << survivors.front() << " " << survivors.back() << endl;
}

int main(){
	int c, n, k;

	cin >> c;
	for(int i=0; i<c; i++){
		cin >> n >> k;
		josephus(n, k);
	}
	return 0;
}

