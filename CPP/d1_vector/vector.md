# Vector

Vectors are the same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted, with their storage being handled automatically by the container.

### declare
```cpp
std::vector<T> name;
```
T: type(int, char, float)


### initialize
```cpp
// Initializer list
vector<int> vector1 = {1, 2, 3, 4, 5};
```

```cpp
// 5 is the size and 12 is the value
vector<int> vector3(5, 12);
```

### member function

- push_back(): 가장 뒤에 요소 추가
  ```cpp
  vector1.push_back(6);
  ```
- at(): index으로 요소 접근(출력, 변경)
  ```cpp
  std::cout << "element at index 3: " << vector3.at(3) << std::endl;
  ```
- pop_back(): 마지막 요소 삭제
  ```cpp
  vector1.pop_back();
  ```

# vector iterators
vector iterator는 vector의 요소의 메모리 주소를 가리킨다.

### declare
```cpp
vector<T>::iterator iteratorName;
```

### initialize
```cpp
vector<int> num = {1,2,3};
vector<int>::iterator iter;

iter = num.begin()
//iter = num.end() -1;
```

- begin(): 백터의 첫번째 요소를 가리킨다.
- end(): 벡터의 마지막 요소 바깥의 요소를 가리키기 때문에 마지막 요소를 접근하려면 1을 빼야한다.

