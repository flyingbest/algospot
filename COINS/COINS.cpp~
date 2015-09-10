/*
	 COINS

	 @author Taeyoon Moon
	 @dated 2015. 09. 07
	 
	 Dynamic Programming(DP)

*/

#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[]){
	int testcase, money, c_count;
	int d[5001];

	//위치가 여기가 아님. for 문 안에 있어야 효과발휘
	//memset(d, 0, sizeof(int)*5001);
	/*
	for(int i=0; i<5001; i+=1000){
		cout << "d[" << i << "] : " << d[i] << "  ";
	}
	cout << endl;
	*/
	cin >> testcase;
	//cout << "testC : " << testcase << endl;
	for(int i=0; i<testcase; i++){
		//배열 초기화
		memset(d, 0, sizeof(int)*5001);
		
		/*
		for(int i=0; i<5001; i+=1000){
			cout << "d[" << i << "] : " << d[i] << "  ";
		}
		cout << endl;
		*/

		cin >> money >> c_count;
		
		int coin[c_count];
		/* //출력용
		for(int j=0; j<c_count; j++){
			cout << "coin[" << j << "] : " << coin[j] << endl;
		}
	  */
		for(int j=0; j<c_count; j++){
			cin >> coin[j];
		}
		/* //출력용
		for(int j=0; j<c_count; j++){
			cout << "coin[" << j << "] : " << coin[j] << endl;
		}
		*/
		d[0] = 1;
		for(int k=0; k<c_count; k++){
			for(int l=coin[k]; l<=money; ++l){
					d[l] += d[l-coin[k]];
			}
		}
		cout << d[money] << endl;
	}
	return 0;
}

