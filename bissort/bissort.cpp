// bissort.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
template<typename T>
void print(vector<T> arr) {
    for (T a : arr) {
        cout << a<<' ';
    }
    cout << endl;
}


static int binsearch(vector<int> arr, int a) {
    int iRight = arr.size()-1;
    int iLeft = 0;
    int mid;
    while (iRight - iLeft > 1) {
        mid = (iRight + iLeft) / 2;
        //cout << iLeft << ' ' << iRight << endl;
        if (arr[mid] > a) {
            iRight = mid - 1;
        }
        else if (arr[mid] < a) {
            iLeft = mid + 1;
        }
        else {
            return mid;
        }
        //cout << iLeft << '/' << iRight << endl;
    }
    if (arr[iRight] == a) {
        return iRight;
    }
    if (arr[iLeft] == a) {
        return iLeft;
    }
    return -1;
}
struct Dog {
    string breed;


};
bool operator<(Dog a1,Dog a2) {
    return a1.breed < a2.breed;
}
bool comparebreeds(Dog a1, Dog a2) {
    return a1.breed < a2.breed;
}


template<typename T>
bool issort(vector<T> arr,bool(*fun)(T,T)) {
    try{
        if (arr.size() ==0) throw 0;
        if (arr.size() < 2) throw 1;
    for (int i = 0;i < arr.size()-1;i++) {
        if (!fun(arr[i],arr[i+1])) {
            return false;
        }
    }
    return true;
    }
    catch (int errorcode) {
        switch (errorcode) {
        case 0: cout << "empty array"; break;
        case 1: cout << "array less than 2"; break;
        default: cout << "uknown exeption"; break;
        }
    }
}


void stupidsort(vector<int>& arr) {
    for (int i = 0;i < arr.size()-1;i++) {
        start:
        if (arr[i] > arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
            i = 0;
            
            print(arr);
            goto start;
        }
        
    }
}
void stupidsortdec(vector<int>& arr) {
    for (int i = 0;i < arr.size()-1;i++) {
        start:
        if (arr[i] < arr[i + 1]) {
            swap(arr[i], arr[i + 1]);
            i = 0;
            
            print(arr);
            goto start;
        }
        
    }
}

int main()
{
    vector<int> arr = { 4,7,9,12,21,25,30,56 };
    vector<int> arr5 = { 4,7,9,12,21,25,30,2 };
    vector<int> arr4 = { 1,4,5,24,312,2,4,6543,2};
/*    int a;
    cin >> a;
    cout << binsearch(arr, a);*/
    
    vector<Dog> arr2 = { {"A"},{"Dog"},{"B"}};
    vector<Dog> arr3 = { {"A"},{"Bog"},{"D"}};
    //cout << (arr2[0] < arr3[1]);
    //cout << issort(arr2, comparebreeds);
    //cout << issort(arr3, comparebreeds);
    stupidsort(arr);
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
