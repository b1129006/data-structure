#include <iostream>
#include <string>
#include <cstring>
#include <string.h>
using namespace std;

int main() {
    int NumberOfName; //x
    int MaxLengthOfName; //y
    cout << "Number of Name:" << endl;
    cin >> NumberOfName;
    cout << "MaxLengthOfName:" << endl;
    cin >> MaxLengthOfName;
    cin.get(); // cin.get 吃掉換行
    char **name = new char*[NumberOfName];
    
    //
    for (int j = 0; j < NumberOfName; j++) {
        cout << "Please enter the name: " << endl;
        cin.getline(name[j] = new char[MaxLengthOfName+1], MaxLengthOfName+1);
    }
    
    //bubble sort
    for (int k = NumberOfName-1; k > 0; k--) {
        for (int h = 0; h < k; h++){
            if (name[h][0] > name[h+1][0]){
                swap(name[h], name[h+1]);
            }
        }
    }
    
    //印出陣列
    cout  << "\n" << "After the bubble sort:" << endl;
    for (int n = 0; n < NumberOfName; n++) {
        cout << name[n] << endl;
        delete [] name[n];
    }

    delete [] name;
    
    return 0;
}