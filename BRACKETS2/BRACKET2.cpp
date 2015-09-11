/*
	 BRACKET2
	 
	 @author	: taeyoon, Moon
	 @date		: 2015. 9. 10

*/

#include <iostream>
#include <stack>
using namespace std;

bool wellMatched(const string& formula){
	// 여는 괄호 문자들과 닫는 괄호 문자들
	const string opening("({["), closing(")}]");
	// 이미 열린 괄호들을 순서대로 담는 스택
	stack<char> openStack;
	for(int i=0; i<formula.size(); ++i)
		// 여는 괄호인지 닫는 괄호인지 확인
		if(opening.find(formula[i]) != -1)
			// 여는 괄호라면 무조건 스택에 집어넣는다.
			openStack.push(formula[i]);
		else{
			// 이 외의 경우 스택 맨 위의 문자와 맞춰본다.
			// 스택이 비어 있는 경우에는 실패
			if(openStack.empty()) return false;
			// 서로 짝이 맞지 않아도 실패
			if(opening.find(openStack.top()) != closing.find(formula[i]))
				return false;
			// 짝을 맞춘 괄호는 스택에서 뺀다.
			openStack.pop();
		}
	// 닫히지 않은 괄호가 없어야 성공
	return openStack.empty();
}

int main(){
	int C;
	string cha;

	bool val1 = false;
	bool val2 = true;
	cout << "false : " << val1 << endl;
	cout << "true : " << val2 << endl;

	cin >> C;
	for(int i=0; i<C; i++){
		cin >> cha;
		if(wellMatched(cha) == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}

