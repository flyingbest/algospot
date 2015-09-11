#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> getPartialMatch(const string& N){
	int m = N.size();
	vector<int> pi(m, 0);
	int begin = 1, matched = 0;
	while(begin + matched < m){
		if(N[begin + matched] == N[matched]){
			++matched;
			pi[begin + matched - 1] = matched;
		}
		else{
			if(matched == 0)
				++begin;
			else{
				begin += matched - pi[matched - 1];
				matched = pi[matched - 1];
			}
		}
	}
	cout << "pi : " << pi << endl; //print test
	return pi;
}

// s의 접두사도 되고 접미사도 되는 문자열들의 길이를 반환.
vector<int> getPrefixSuffix(const string& s){
	vector<int> ret, pi = getPartialMatch(s);
	int k = s.size();
	while(k > 0){
		// s[..k-1]는 답이다.
		ret.push_back(k);
		// s[..k-1]의 접미사도 되고 접두사도 되는 문자열도 답이다.
		k = pi[k-1];
	}
	cout << "ret : " << ret << endl; //print test
	return ret;
}

int main(){
	string cha1, cha2, S;
	int len;
	//vector<int> result;

	cin >> cha1;
	cin >> cha2;
	S = cha1 + cha2;

	len = cha1.length() + cha2.length();
	if(len > 400000){
		cout << "wrong input!" << endl;
	}

	result = getPrefixSuffix(S);
	cout << "return value : " << result << endl;

	// check print
	cout << "S : " << S << endl;
	cout << "S length : " << len << endl;

	return 0;
}

