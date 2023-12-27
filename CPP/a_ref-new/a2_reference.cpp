/* 
day 1
2023.12.25 

주제 : reference

reference는 참조자로 객체를 접근할 수 있는 변수이다. 포인터와 비슷한 역할을 한다.
참조자는 자신이 참조하는 변수를 대실할 수 있는 또 하나의 이름이다.

int *ptr = &num1;
int &num2 = num1;

참조자의 단점은 함수의 선언에서 참조자를 통해 값을 변경하는지 유무를 알 수 없는 것이다.
따라서 다음의 규칙을 따라 줘야 한다.

void HappyFunc(const int &ref) {}
한수 내에서, 참조자를 통한 값의 변경을 진행하지 않을 경우, 참조자를 const로 선언해서,
함수의 원형만 봐도 값의 변경이 이뤄지지 않음을 알 수 있게 한다.
*/

#include <iostream>

void swap(int &n1, int &n2);

int main(void) {
    int num1 = 1;
    int num2 = 2;
    
    std::cout<<num1<<", "<<num2<<std::endl;
    
    swap(num1, num2);
    
    std::cout<<num1<<", "<<num2<<std::endl;
    
    return 0;
}

void swap(int &n1, int &n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
}