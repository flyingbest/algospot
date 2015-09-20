#include <iostream>
#include <vector>
using namespace std;

struct TreeNode{
	vector<TreeNode*> children;
};

// 지금까지 찾은 가장 긴 잎-잎 경로의 길이를 저장한다.
int longest;

// root를 루트로 하는 서브트리의 높이를 반환한다.
int height(TreeNode* root){
	// 각 자식을 루트로 하는 서브트리의 높이를 계산한다.
	vector<int> heights;
	for(int i = 0; i < root->children.size(); ++i)
		height.push_back(height(root->children[i]));
	// 만약 자식이 하나도 없다면 0을 반환한다.
	if(heights.empty()) return 0;
	sort(heights.begin(), heights.end());
	// root를 최상위 노드로 하는 경로를 고려하자.
	if(heights.size() >= 2)
		longest = max(longest, 2 + heights[heights.size() - 2] + 
				heights[heights.size() - 1]);
	// 트리의 높이는 서브트리 높이의 최대치에 1을 더해 계산한다.
	return heights.back() + 1;
}




int main(int argc, char *argv[]){
	int test_case;

	cin >> test_case;
	for(int i=0; i<test_case; ++i){
			
	


	}
	return 0;
}

