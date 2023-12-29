2023.12.29

주제 : memory management

자바의 경우 garbage collector를 통해 메모리를 관리하지만 c++은 사용자가 스스로 메모리를 할당 해제를 통해 관리해야 한다. c에서는 malloc, free로 메모리를 할당및 해제를 수행하고 c++은 new, delete를 사용한다. 이때 할당받은 메모리를 해제하지 않을경우 프로그램은 계속 사용하고 있는 메모리로 인지하고 해당 메모리를 사용하지 않는 메모리 누수(memory leak)가 발생한다.


```
int* pointVar = new int;

delete pointVar;
```

스마트 포인터
스마트 포인터는 포인터 처럼 사용하는 클래스 템플릿으로 메모리를 자동으로 해제해 준다. 즉, delete를 자동으로 수행한다. 소멸자는 객체의 사용이 끝나면 자동으로 호출된다. 이곳에 delete가 존재해 메모리를 직접 해제하지 않아도 자동으로 해제되는 간단한 과정이다. 따라서 이 클래스를 템플릿으로 일반화시켜 어떤 객체에 대해서도 메모리를 할당받은 경우에 자동으로 해제를 해주는 것이다.

```cpp
class SmartPtr{
    Point* ptr;
public
    SmartPtr(Point* p) :ptr(p) {}
    ~SmartPtr() {
        delete ptr;
    }
    Point* operator->() const{
        return ptr;
    }
}
```