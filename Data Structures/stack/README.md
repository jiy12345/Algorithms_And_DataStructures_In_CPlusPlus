# 스택(stack)
## 개념
스택(stack)은 제한적으로 접근할 수 있는 자료구조로, 스택에 대한 접근은 언제나 목록의 끝(top)에서만 일어나도록 구현되어 있습니다.
![stack](https://upload.wikimedia.org/wikipedia/commons/2/29/Data_stack.svg)
스택은 한 쪽 끝에서만 자료를 넣거나 뺄 수 있는 선형 구조 이므로, LIFO(Last In First Out)방식을 적용한 자료구조라고 볼 수 있습니다.

## stack의 연산
- 생성자
    - 용량(capacity) 설정
    - 설정된 capacity 만큼의 배열 동적 할당
    - top의 인덱스를 초기값(-1)로 설정
- push(x)
    - x를 stack의 top에 삽입
    - 스택의 여유 용량이 없을 경우 삽입되지 않음
- pop()
    - stack의 top에 있는 수 삭제
- size()
    - 현재 스택의 크기(스택에 들어있는 수의 개수) 출력
- top()
    - 스택의 top에 있는 값 출력
- empty()
    - 스택이 비어있는지 여부 반환
- full()
    - 스택에 여유 용량이 있는지 여부 반환

## 참고
* [서로소 집합 자료 구조(disjoint-set)](https://ko.wikipedia.org/wiki/%EC%84%9C%EB%A1%9C%EC%86%8C_%EC%A7%91%ED%95%A9_%EC%9E%90%EB%A3%8C_%EA%B5%AC%EC%A1%B0)

## 실행 예시
![stack test](https://github.com/jiy12345/Algorithms_And_DataStructures_In_CPlusPlus/blob/master/result%20images/stack%20test.png)
