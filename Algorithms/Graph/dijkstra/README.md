# 다익스트라 알고리즘(Dijkstra's algorithm)
- [개념](#개념)
- [동작 방식](#동작-방식)
- [구현 방식 2가지](#구현-방식-2가지)
    - [인접 행렬을 활용한 단순한 방식](#인접-행렬을-활용한-단순한-방식)
    - [최소 힙을 활용한 방식](#최소-힙을-활용한-방식)
- [참고](#참고)
- [실행 예시](#실행-예시)

## 개념
다익스트라 알고리즘(Dijkstra's algorithm) 그래프의 노드로부터 다른 모든 노드로의 최단 거리를 구하는 알고리즘입니다. 단 다익스트라 알고리즘을 활용하기 위한 조건이 하나 있는데, 바로 그래프에 포함된 간선의 가중치에 음수가 없어야 한다는 것입니다. 음수가 있다면 [벨먼-포드 알고리즘(Bellman-Ford algorithm)](https://ko.wikipedia.org/wiki/%EB%B2%A8%EB%A8%BC-%ED%8F%AC%EB%93%9C_%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98)을 활용하여야 합니다.

## 동작 방식
![Dijkstra's algorithm](https://upload.wikimedia.org/wikipedia/commons/5/57/Dijkstra_Animation.gif)  
출처: https://en.wikipedia.org/wiki/Dijkstra%27s_algorithm    
  
위의 그림은 다익스트라 알고리즘이 어떤 방식으로 동작하는지를 보여주고 있습니다.
처음에는 출발점과 다른 모든 정점과의 거리를 무한대(혹은 나올 수 없는 최대값)로 두고 탐색을 시작합니다. 출발점부터 시작하여, 그래프상에서의 각 정점간의 거리를 활용하여 출발점부터 각 정점까지의 거리를 갱신합니다. 한 정점으로부터의 거리를 모두 활용했다면, 현재까지 계산된 출발점부터 각 정점까지의 거리를 활용하여 가장 가까운 정점으로 이동하여 갱신을 반복합니다. 이를 더 이상 갱신이 없을 때까지 반복하는 것이 바로 다익스트라 알고리즘입니다.

## 구현 방식 2가지
 다익스트라 알고리즘의 구현 방법에는 다음과 같은 두가지 방식이 있습니다.
 
### 인접 행렬을 활용한 단순한 방식
- 알고리즘  
1.  그래프 정보를 [인접 행렬](https://ko.wikipedia.org/wiki/%EC%9D%B8%EC%A0%91%ED%96%89%EB%A0%AC) 형태로 저장합니다. 
2. 출발 정점부터 시작하여 모든 정점에 대한 탐색이 완료될 때까지 다음을 반복합니다.  
    2-1. 인접 행렬을 탐색하며 각 정점과 다른 정점과의 간선의 가중치를 탐색하여, 그 값들을 현재까지의 출발점으로부터 거리의 최소값으로 저장해놓습니다.  
    2-2. 현재까지 저장해놓은 출발점으로부터 거리의 최소값 배열을 활용하여 출발점으로부터 가장 가까운 정점을 찾고, 2-1로 돌아가 찾은 정점에 대해 반복합니다.  
  
- 알고리즘의 시간복잡도  
이 알고리즘의 시간 복잡도는 정점의 개수를 V라 했을 때, 2-2번에서 다음 탐색할 정점을 찾기 위해 모든 정점의 출발점으로부터의 거리를 탐색하고(O(V)), 2-1번에서 찾은 정점에서 다른 모든 정점과의 관계를 탐색하며
 최소 거리를 갱신(O(V))하는 것이므로 전체적인 알고리즘의 시간복잡도는 O(V^2)이 됩니다. 

### 최소 힙을 활용한 방식 
- 알고리즘  
1. 그래프 정보를 [인접 리스트](https://ko.wikipedia.org/wiki/%EC%9D%B8%EC%A0%91_%EB%A6%AC%EC%8A%A4%ED%8A%B8) 형태로 저장합니다.
2. 간선의 가중치가 작은 것이 가장 top에 위치하는 최소 힙(C++에서는 우선순위 큐)에 출발 지점을 푸시(출발점에서 출발점까지는 거리가 0이므로 간선의 가중치는 0으로)하고, 각 정점에 대해 다음을 반복합니다.  
    2-1. 최소 힙의 top에 있는 정점을 가져옵니다.  
    2-2. 가져온 현재 정점으로부터 연결된 모든 다음 정점에 대해 현재 저장된 출발점부터 다음 정점까지 거리의 최소값이 현재 정점을 거쳐서 갔을 때 갱신될 여지가 있다면 갱신 후 다음 정점을 새로 계산된 출발 정점부터 다음 정점까지의 거리와 함께 다음 정점을 우선 순위 큐에 푸시합니다.  

- 알고리즘의 시간복잡도  
정점의 개수를 V, 간선의 개수를 E라고 할 때, 2-1번의 현재까지 계산된 최단 거리를 가진 노드를 가져오고 최소힙에서 삭제하는데 O(VlogV)의 시간이 필요하며, 각 노드마다 이웃한 노드의 최단 거리를 갱신할 때 O(ElogV)의 시간이 필요하기 때문에 전체적인 시간복잡도는 O((V+E)logV)로 첫번째 방법보다 효율적이라고 볼 수 있습니다.

## 참고
- https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/tutorial/
- https://www.baeldung.com/cs/dijkstra-time-complexity
- https://ko.wikipedia.org/wiki/%EB%8D%B0%EC%9D%B4%ED%81%AC%EC%8A%A4%ED%8A%B8%EB%9D%BC_%EC%95%8C%EA%B3%A0%EB%A6%AC%EC%A6%98

## 실행 예시
![Dijkstra's algorithm](https://upload.wikimedia.org/wikipedia/commons/5/57/Dijkstra_Animation.gif)  
위 그림에서의 그래프 정보를 그대로 입력하여 테스트해봤습니다.  
입력된 데이터는 [여기](https://github.com/jiy12345/Algorithms_And_DataStructures_In_CPlusPlus/blob/master/Algorithms/Graph/dijkstra/input.txt)있습니다.  
![dijkstra test](https://github.com/jiy12345/Algorithms_And_DataStructures_In_CPlusPlus/blob/master/result%20images/dijkstra%20test.png)
