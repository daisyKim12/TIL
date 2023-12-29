/* 
day 1
2023.12.25 

주제 : new & delete

동적 할당을 위해 malloc을 사용하면 바이트 단위로 할당을 해야 하고 형 변환을 시켜야 한다.
이런 불편함을 줄이고자 특정 형에 대한 동적 할당을 가능하게 해준다.
*/

#include <iostream>
#include <string.h>
#include <stdlib.h>

char * MakeStrAdr(int len) {
    // char * str = (char *) malloc (sizeof(char)*len);
    char * str = new char[len];
    return str;
}

int main(void) {

    char * str = MakeStrAdr(20);
    strcpy(str, "I am so Happy~");
    std::cout<<str<<std::endl;
    //free(str);
    delete []str;
    return 0;
}