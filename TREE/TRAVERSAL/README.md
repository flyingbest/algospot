TRAVERSAL
====

### 트리 순회 변경

> printPostOder()

이 함수의 수행 시간을 지배하는 것은 선형 시간이 걸리는 std::find()와 slice() 함수의 호출이다. 

트리의 각 노드마다 printPostOrder()가 한 번씩 호출되므로 전체 시간 복잡도는 O(n^2)임을 알수 있다.

