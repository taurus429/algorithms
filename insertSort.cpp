#include <iostream>

using namespace std;

int main()
{
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    int i, j, temp;
    for(i=0; i<9; i++){
        j = i;
        while(array[j-1] > array[j]){
            temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
            j--;
        }
    }
    return 0;
}
