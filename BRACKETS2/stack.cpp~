#include <iostream>
#include <stack>
using namespace std;

bool wellmatched(const string& gender){
	const string woman("w"), man("m");
	stack<char> openStack;
	for(int i=0; i<gender.size(); i++){
		if(woman.find(gender[i]) != -1)
			openStack.push(gender[i]);
		else{
			if(openStack.empty()) return false;
			if(woman.find(openStack.top()) != man.find(gender[i])) return false;
			openStack.pop();
		}
	}
	return openStack.empty();
}

int main(){
	int man;
	string gender;

	cin >> man;
	for(int i=0; i<man; i++){
		cin >> gender;
		if(wellmatched(gender) == 1)
			cout << "All gender matched!" << endl;
		else
			cout << "not matched.." << endl;
	}
	return 0;
}

