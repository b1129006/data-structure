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
    char **name = new char*[NumberOfString];
    
    //
    for (int j = 0; j < NumberOfString; j++) {
        cout << "Please enter the string: " << endl;
        cin.getline(name[j] = new char[MaxLengthOfString+1], MaxLengthOfString+1);
    }
    
    //bubble sort
    for (int k = NumberOfString-1; k > 0; k--) {
        for (int h = 0; h < k; h++){
            if (name[h][0] > name[h+1][0]){
                swap(name[h], name[h+1]);
            }
        }
    }
    
    //印出陣列
    cout  << "\n" << "After the bubble sort:" << endl;
    for (int n = 0; n < NumberOfString; n++) {
        cout << name[n] << endl;
        delete [] name[n];
    }

    delete [] name;
    
    return 0;
}