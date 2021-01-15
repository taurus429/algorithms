#include <iostream>

using namespace std;

int main()
{
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    int i, j, min, index, temp;
    for(i=0; i<10; i++){
        min = 999;
        for (j=i; j<10; j++){
            if (array[j]<min){
                min = array[j];
                index= j;
            }
        }
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }
    return 0;
}
