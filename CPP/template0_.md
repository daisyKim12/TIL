2023.12.29

주제 : template

템플렛이란
data type을 파라미터로 보내 템플렛 안에 만들어 놓은 코드 틀에 Type를 넣는 것을 말한다. 컴파일 시 타입 채킹을 하고 매크로처럼 데이터 타입이 정해진 코드가 삽입된다.


함수 템플렛

**함수 오버로드**
```cpp
int sum(int a, int b) {
    return a + b;
}
double sum(double a, double b) {
    return a + b;
}
```

**함수 템플릿 선언**
```cpp
template <typename T>
T sum (T a, T b) {
    return a + b;
}
```

**함수 템플릿 호출**
```cpp
//< > 안에 자료형을 쓴다. 다만 전달해야 하는 type이 두 개 이상일 때는 컴파일러가 스스로 판단한다.
sum<int>(1, 3);
```

class vs typename
둘은 비슷해서 상호 교환이 가능하지만 특별한 경우에는 다르다.
특히 함수 호출 시 타입을 지정하지 않고 컴파일러가 타입을 보고 전달하게 하고 싶으면 `class`를 사용해야 한다.