# 합집합 찾기(union–find)
## 개념
서로소 집합(disjoint-set)이라고도 불리는 합집합-찾기(union–find) 자료구조는 많은 서로소 부분 집합들로 나눠진 원소들에 대한 정보를 저장하고 조작하는 자료 구조입니다.

## Union-Find의 연산
- 생성자
    - 초기화 진행
    - x를 유일한 원소로 하는 새로운 집합을 만든다.
- getParent(x)
    - 특정 노드 x의 부모 노드 찾기
- hasSameParent(x, y)
    - x와 y가 같은 부모를 가지고 있는지(연결되어 있는지) 판단
- unionParent(x, y)
    - x와 y가 같은 부모를 가지도록 하여 각각 x, y가 속한 두 집합을 합침

## 참고
* [서로소 집합 자료 구조(disjoint-set)](https://ko.wikipedia.org/wiki/%EC%84%9C%EB%A1%9C%EC%86%8C_%EC%A7%91%ED%95%A9_%EC%9E%90%EB%A3%8C_%EA%B5%AC%EC%A1%B0)
