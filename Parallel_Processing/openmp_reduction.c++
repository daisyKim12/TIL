#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    #pragma omp parallel for reductio n(+: sum)
    for(int i = 0; i<100; i++) {
        sum += i;
    }

    cout << "Sum: " << sum << endl;
    
    return 0;
}
