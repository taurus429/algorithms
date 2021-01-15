#include <iostream>

using namespace std;

void quickSort(int *data, int start, int end){
    if(start >= end){
        return;
    }
    int key = start;
    int i = start +1;
    int j = end;
    int temp;

    while(i<=j){
        while(data[i] <= data[key]){
            i++;
        }
        while(data[j] >= data[key] && j>start){
            j--;
        }
        if(i>j){
            temp = data[j];
            data[j] = data[key];
            data[key] = temp;
        }
        else{
            temp = data[j];
            data[j] = data[i];
            data[i] = temp;
        }
    }
    quickSort(data, start, j-1);
    quickSort(data, j+1, end);
}

int main()
{
    int array[10] = {1, 10, 5, 8, 7, 6, 4, 3, 2, 9};
    quickSort(array, 0, 9);
    for (int i=0;i<10;i++)
        cout << array[i] << " ";

    return 0;
}
