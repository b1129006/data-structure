#include <iostream>
#include <string>
#include <cstring>
#include <string.h>
using namespace std;

int main() {
    int NumberOfString; //x
    int MaxLengthOfString; //y
    cout << "Number of String:" << endl;
    cin >> NumberOfString;
    cout << "MaxLengthOfString:" << endl;
    cin >> MaxLengthOfString;
    cin.get(); // cin.get 吃掉換行
    char **strings = new char*[NumberOfString]; 
    
    //將使用者輸入的名字存進name[]陣列 
    for (int j = 0; j < NumberOfString; j++) {
        cout << "Please enter the string: " << endl;
        cin.getline(strings[j] = new char[MaxLengthOfString+1], MaxLengthOfString+1);
    }
    
    //bubble sort
    for (int k = NumberOfString-1; k > 0; k--) {
        for (int h = 0; h < k; h++){
            if (strings[h][0] < strings[h+1][0]){
                swap(strings[h], strings[h+1]);
            }
        }
    }
    
    //印出陣列
    cout  << "\n" << "After the bubble sort:" << endl;
    for (int n = 0; n < NumberOfString; n++) {
        cout << strings[n] << endl;
        delete [] strings[n];
    }

    delete [] strings;
    
    return 0;
}
