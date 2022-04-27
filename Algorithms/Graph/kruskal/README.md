# 크루스칼 알고리즘
## 개념
크루스칼 알고리즘은 그래프 정보를 바탕으로 [최소 신장 트리(Minimum Spanning Tree)](https://en.wikipedia.org/wiki/Minimum_spanning_tree)를 만드는 알고리즘입니다. 그래프 정보가 주어졌을 때, 가장 적은 비용으로 모든 노드를 연결하기 위해 활용됩니다.  

## 패러다임
각 단계에서 연결한 간선을 선택하는 과정에서 가장 비용이 적은 간선을 선택하기 때문에, 그리디 알고리즘으로 분류할 수 있습니다. 

## 동작 방식
![Kruskal Demo](https://upload.wikimedia.org/wikipedia/commons/b/bb/KruskalDemo.gif)
위 그림은 크루스칼 알고리즘이 동작하는 모습을 보여주고 있는데, 각 단계에서 가중치가 비용이 가장 적은 간선을 선택하되, 사이클이 발생하는 간선은 선택하지 않는 것을 확인할 수 있습니다. 사이클이 발생하게 하는 간선의 경우 모든 노드를 연결하는데 있어 불필요한 간선이 하나 추가되는 것이므로, 사이클이 발생하도록 하는 간선은 추가하지 않고 바로 다음 

## 참고
* [크루스칼 알고리즘](https://ko.wikipedia.org/wiki/%ED%81%AC%EB%9F%AC%EC%8A%A4%EC%BB%AC_%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98)
* [최소 신장 트리(MST: Minimum Spanning Tree)](https://en.wikipedia.org/wiki/Minimum_spanning_tree)
* [그리디 알고리즘(Greedy Algorithm)](https://ko.wikipedia.org/wiki/%ED%83%90%EC%9A%95_%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98)
* [합집합 찾기(Union Find) or 서로소 집합(disjoint-set) 자료구조](https://github.com/jiy12345/Algorithms_And_DataStructures_In_CPlusPlus/tree/master/Data%20Structures/union%20find)
