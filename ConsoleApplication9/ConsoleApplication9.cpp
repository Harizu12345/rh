#include <iostream>

using namespace std;


//1

/*
int main() {
    int dynamicArray[10] = { 1, 2, 3, 4, 5 }; 
    int countToAdd = 3; 

    for (int i = 5; i < 5 + countToAdd; ++i) {
        dynamicArray[i] = rand() % 100; 
    }

   
    for (int i = 0; i < 10; ++i) {
        cout << dynamicArray[i] << " ";
    }
    cout << endl;

    return 0;
}
*/


//2

/*
void addRandomElements(int dynamicArray[], int countToAdd, int size) {
    for (int i = size; i < size + countToAdd; ++i) {
        dynamicArray[i] = rand() % 109; 
    }
}

int main() {
    int dynamicArray[10] = { 1, 2, 3, 4, 5 }; 
    int countToAdd = 3; 

    addRandomElements(dynamicArray, countToAdd, 5);

    
    for (int i = 0; i < 10; ++i) {
        cout << dynamicArray[i] << "\t";
    }
    cout << endl;

    return 0;
}
*/

