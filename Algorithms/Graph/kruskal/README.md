# 크루스칼 알고리즘
## 개념
크루스칼 알고리즘은 그래프 정보를 바탕으로 [최소 신장 트리(Minimum Spanning Tree)](https://en.wikipedia.org/wiki/Minimum_spanning_tree)를 만드는 알고리즘입니다. 그래프 정보가 주어졌을 때, 가장 적은 비용으로 모든 노드를 연결하기 위해 활용됩니다.  

## 패러다임
각 단계에서 연결한 간선을 선택하는 과정에서 가장 비용이 적은 간선을 선택하기 때문에, 그리디 알고리즘으로 분류할 수 있습니다. 

## 동작 방식
![Kruskal Demo](https://upload.wikimedia.org/wikipedia/commons/b/bb/KruskalDemo.gif)  
위 그림은 크루스칼 알고리즘이 동작하는 모습을 보여주고 있는데, 각 단계에서 가중치가 비용이 가장 적은 간선을 선택하되, 사이클을 발생시키는 간선은 선택하지 않는 것을 확인할 수 있습니다. 사이클을 발생시키는 간선의 경우 이미 연결된 두 노드 간의 연결을 다시 진행하는 것이므로, 불필요한 간선이 됩니다. 최소 비용으로 모든 노드를 연결하기 위해서는 반드시 불필요한 간선이 제거되어야 하므로, 사이클을 발생시키지 않는 간선만 선택하도록 합니다. 

## 참고
* [크루스칼 알고리즘](https://ko.wikipedia.org/wiki/%ED%81%AC%EB%9F%AC%EC%8A%A4%EC%BB%AC_%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98)
* [최소 신장 트리(MST: Minimum Spanning Tree)](https://en.wikipedia.org/wiki/Minimum_spanning_tree)
* [그리디 알고리즘(Greedy Algorithm)](https://ko.wikipedia.org/wiki/%ED%83%90%EC%9A%95_%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98)
* [합집합 찾기(Union Find) or 서로소 집합(disjoint-set) 자료구조](https://github.com/jiy12345/Algorithms_And_DataStructures_In_CPlusPlus/tree/master/Data%20Structures/union%20find)

## 관련 알고리즘 문제
[1197: 최소 스패닝 트리](https://www.acmicpc.net/problem/1197)
[1922: 네트워크 연결](https://www.acmicpc.net/problem/1922)
