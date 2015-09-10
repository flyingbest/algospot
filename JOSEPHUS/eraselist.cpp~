#include <iostream>
#include <list>
using namespace std;

int main(){
	list<int> list1;

	list1.push_front(20);
	list1.push_front(10);
	list1.push_back(30);
	list1.push_back(40);
	list1.push_back(50);

	cout << "erase test 1" << endl;

	// 첫번째 페이지 삭제
	list1.erase(list1.begin());
	
	// 20, 30, 40, 50 순서대로 출력
	list<int>::iterator iterEnd = list1.end();
	for(list<int>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos){
		cout << "list 1 : " << *iterPos << endl;
	}

	cout << endl << "erase test 2" << endl;

	// 두번째 데이터에서 마지막까지 삭제한다.
	list<int>::iterator iterPos = list1.begin();
	++iterPos;
	list1.erase(iterPos, list1.end());

	// print 20
	iterEnd = list1.end();
	for(list<int>::iterator iterPos = list1.begin(); iterPos != iterEnd; ++iterPos){
		cout << "list 1 : " << *iterPos << endl;
	}
}

