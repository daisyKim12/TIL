/* 
day 1
2023.12.25 

주제 : namespace

같은 이름의 함수와 변수를 구분하기 위해 고유의 이름 공간에 저장한다.
201동의 김철수와 302동의 김철수는 다른 사람이다.

클래스와의 차이점은 객체를 만들 수 없다는 것과 상속이 불가능하다는 것이다.

using 키워드를 사용하면 이름 공간을 매번 지정하는 것을 생략할 수 있다.

*/

#include <iostream>

using namespace std;

namespace BestComImpl
{
    int test = 120;
    void SimpleFunc(void);
} // namespace BestComImpl

namespace ProgComImpl
{
    double test = 99.99;
    void SimpleFunc(void);
} // namespace ProgComImpl

int main(void) {

    using BestComImpl::SimpleFunc;

    SimpleFunc();
    ProgComImpl::SimpleFunc();

    return 0;
}

void BestComImpl::SimpleFunc(void) {
    cout<<"I am from BestCom "<<test<<endl;
}

void ProgComImpl::SimpleFunc(void) {
    std::cout<<"I am from ProgCom "<<test<<std::endl;
}
