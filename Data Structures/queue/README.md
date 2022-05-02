# 큐(queue)

- [개념](#개념)
- [종류](#종류)
    - [선형 방식](#선형-방식)
    - [원형 방식](#원형-방식)
    - [연결 리스트로 구현하는 방식](#연결-리스트로-구현하는-방식)
- [큐의 연산](#큐의-연산)
- [참고](#참고)
- [실행 예시](#실행-예시)

## 개념
큐(queue)는 제한적으로 접근할 수 있는 자료구조로, 큐에서의 데이터 삽입(enqueue)은 가장 뒤(back)에서만, 데이터 삭제(dequeue)는 가장 앞(front)에서만 일어나도록 구현되어 있습니다.
![Queue](https://upload.wikimedia.org/wikipedia/commons/5/52/Data_Queue.svg)

스택은 한쪽에서는 삽입만, 한쪽에서는 삭제만 일어나는 선형 구조 이므로, FIFO(First In First Out)방식을 적용한 자료구조라고 볼 수 있습니다.

## 종류
 큐는 삽입과 삭제가 각기 다른 방향에서 일어납니다. 따라서 배열로 구현했을 시 큐의 처음과 끝의 배열 상에서의 위치가 계속해서 뒤로 밀리게 됩니다. 따로 처리를 해주지 않는다면 앞쪽에 남은 공간을 사용하지 못하게 되는 문제가 발생합니다.  
 ![linear queue](https://github.com/jiy12345/Algorithms_And_DataStructures_In_CPlusPlus/blob/master/Image%20for%20description/linear%20queue.jpeg)  
 (출처: https://www.geeksforgeeks.org/advantages-of-circular-queue-over-linear-queue/)  
 위의 그림에서 확인할 수 있듯, 일반적인 배열은 선형적인 형태이므로 Front 앞쪽 공간이 반드시 비었음에도 사용할 수 없는 상태가 됩니다.
 
 이러한 문제를 해결하기 위해, 큐의 구현 방식에는 몇가지가 있습니다.
 
 
### 선형 방식
배열의 선형적인 특성을 그대로 유지하는 방식입니다. 이 경우, Front 앞쪽에 빈 공간이 생기는 것을 방지하기 위해 삭제(dequeue)가 일어날 때마다 데이터들을 앞으로 한칸씩 당겨와야 합니다. 당연히 시간복잡도상 좋지 않다고 볼 수 있겠습니다.

### 원형 방식
배열을 원형(Circlular)으로 활용하므로서, 배열의 선형성 때문에 발생하는 문제를 쉽게 해결할 수 있습니다. 아래는 원형 방식으로 구현한 큐를 그림으로 나타낸 것입니다.  
 ![circular queue](https://github.com/jiy12345/Algorithms_And_DataStructures_In_CPlusPlus/blob/master/Image%20for%20description/circular%20queue.jpeg)  
(출처: https://www.geeksforgeeks.org/advantages-of-circular-queue-over-linear-queue/)  
큐의 끝에 다다르면 다시 처음으로 가게 되므로, 기존의 선형 방식에서는 활용할 수 없었던, 혹은 활용하려면 많은 노력을 들여야 했던 공간을 쉽게 활용할 수 있습니다.
실제 구현은 인덱스가 배열의 끝에 다다랐을 때 0으로 바꾸어 주는 형식으로 이루어지게 됩니다.

###  연결 리스트로 구현하는 방식
[연결 리스트](https://ko.wikipedia.org/wiki/%EC%97%B0%EA%B2%B0_%EB%A6%AC%EC%8A%A4%ED%8A%B8)  
배열에 저장되기 때문에 용량의 제한이 있었던 앞선 두가지 방식과 달리, 연결 리스트로 구현하면 따로 크기의 제한 없이 구현이 가능합니다. 각각의 데이터가 서로를 가리키고 있기만 하고 특정한 공간에 국한되지 않으므로, 삽입/삭제도 쉽게 이루어집니다.

## queue의 연산
앞서 설명한 큐 구현 방식 중 __원형 방식__ 을 활용하여 구현하였습니다.
- 생성자
    - 용량(capacity) 설정
    - 설정된 capacity 만큼의 배열 동적 할당
    - front와 back의 인덱스를 초기값(0)으로 설정
    - __원형으로 구현되어 있으므로, 빈 상태(front == back)와 차있는 상태(front == back + 1)를 구분하기 위해 실제 용량은 설정하는 용량(capacity)보다 1 작게 됨__ 
- enqueue(x)
    - x를 stack의 back에 삽입
    - 큐의 여유 용량이 없을 경우 삽입되지 않음
- dequeue()
    - 큐의 front에 있는 수 삭제하고 반환
    - 큐가 비어있을 경우 INT_MIN 반환
- front()
    - 큐의 front에 있는 수 반환
    - 큐가 비어있을 경우 INT_MIN 반환
- back()
    - 큐의 back에 있는 수 반환
    - 큐가 비어있을 경우 INT_MIN 반환
- size()
    - 현재 큐의 크기(큐에 들어있는 데이터의 개수) 출력
- empty()
    - 큐가 비어있는지 여부 반환
- full()
    - 큐에 여유 용량이 있는지 여부 반환

## 참고
* [큐 (자료 구조)](https://ko.wikipedia.org/wiki/%ED%81%90_(%EC%9E%90%EB%A3%8C_%EA%B5%AC%EC%A1%B0))

## 실행 예시
![queue test](https://github.com/jiy12345/Algorithms_And_DataStructures_In_CPlusPlus/blob/master/result%20images/queue%20test.png)
