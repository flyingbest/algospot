#include <iostream>
#include <list>	// list container header file
using namespace std;

// struct item
struct Item{
	Item(int itemCd, int buyMoney){
		ItemCd = itemCd;
		BuyMoney = buyMoney;
	}

	int ItemCd; // item code
	int BuyMoney; // sell price
};

int main(){
	// STL's Container < 자료 type > ::iterator 변수 이름;
	list<Item> Itemlist;

	// insert item
	Item item2(2, 1000);
	Itemlist.push_front(item2);
	Item item1(1, 2000);  // push_front
	Itemlist.push_front(item1);
	//Item item2(2, 1000);	// 값과는 상관없음. 들어간 순서에 따라서 출력하는것
	//Item item2(2, 5000);
	//Itemlist.push_front(item2);
	Item item3(3, 3000);	// push_back
	Itemlist.push_back(item3);
	Item item4(4, 4000);
	Itemlist.push_back(item4);

	// 리스트변수의 처음값 출력
	// error : iterFirst->변수값
	//				 struct(구조체)의 변수를 접근할 때는 ->표시 활용
	list<Item>::iterator iterFirst = Itemlist.begin();
	cout << "First position itemCd : " << iterFirst->ItemCd << endl;
	cout << "First position buymoney : " << iterFirst->BuyMoney << endl;

	// item code number가 2, 1, 3, 4 순서로 출력된다.
	// 들어간 순서대로라 2-1-3-4 이다.
	// 순서를 바꾸면 1-2-3-4 로 변경 가능
	list<Item>::iterator iterEnd = Itemlist.end();
	for(list<Item>::iterator iterPos = Itemlist.begin(); iterPos != iterEnd; ++iterPos){
		cout << "item code : " << iterPos->ItemCd << endl;
	}
	
	// rbegin() - begin()과 비슷하지만 역 방향으로 첫번째 요소를 가리킨다
	//list::reverse_ieterator iterPos = Itemlist->rbegin();
	//cout << "rbegin position itemCd : " << iterPos->ItemCd << endl;
	//cout << "rbegin position buymoney : " << iterPos->BuyMoney << endl;

	/*
	list<Item>::reverse_iterator IterPos = Itemlist.rbegin();
	list<Item>::reverse_iterator IterPos = Itemlist.rend();
	for(list::reverse_iterator IterPos = Itemlist.rbegin(); IterPos != Itemlist.rend(); ++IterPos){
		cout << "역 방향 list 의 요소 : " << *IterPos << endl;
	}
	*/
	if(false == Itemlist.empty()){
		list<Item>::size_type Count = Itemlist.size();
		cout << "아이템 개수 : " << Count << endl;
	}
	
	// 앞에 있는 데이터를 삭제
	Itemlist.pop_front();

	// 앞에 있는 데이터의 참조를 반환
	Item front_item = Itemlist.front();
	cout << "아이템 코드1 : " << front_item.ItemCd << endl;

	// 마지막에 있는 데이터를 삭제
	Itemlist.pop_back();

	// 마지막에 있는 데이터의 참조를 반환
	Item back_item = Itemlist.back();
	cout << "아이템 코드2 : " << back_item.ItemCd << endl;

	// print all
	iterEnd = Itemlist.end();
	for(list<Item>::iterator iterPos = Itemlist.begin(); iterPos != iterEnd; ++iterPos){
		cout << "item code : " << iterPos->ItemCd << endl;
	}
	// print count
	if(false == Itemlist.empty()){
		list<Item>::size_type Count = Itemlist.size();
		cout << "아이템 개수 : " << Count << endl;
	}
	Itemlist.clear();
	if(false != Itemlist.empty()){
		list<Item>::size_type Count = Itemlist.size();
		cout << "아이템 개수 : " << Count << endl;
	}
	return 0;
}

