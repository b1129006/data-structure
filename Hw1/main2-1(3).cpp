#include <iostream>
#include <string>
#include <cstring>
#include <string.h>
using namespace std;

int main() {
    int NumberOfPpl;
    int MaxLengthOfName;
    cout << "Number of people:" << endl;
    cin >> NumberOfPpl;
    cout << "The maximun length of the name: " << endl;
    cin >> MaxLengthOfName;
    cin.get(); // cin.get 吃掉換行
    char** name = new char* [NumberOfPpl];
    int* NameBlankPos = new int[NumberOfPpl];
    int maxBlankPos = -1;

    for (int i = 0; i < NumberOfPpl; i++) {
        cout << "Enter a name: ";
        cin.getline(name[i] = new char[MaxLengthOfName + 1], MaxLengthOfName + 1); 
        //cout << name[i] << endl;

        int j = 0;
        while (name[i][j] != ' ' && name[i][j] != 0)   j++;
        //cout << "j = " << j << endl;
        NameBlankPos[i] = j;
        if (j > maxBlankPos) {
            maxBlankPos = j;
        }
        //cout << "maxBlankPos: " << maxBlankPos << endl; //test
    }

    for (int k = 0; k < NumberOfPpl; k++) {
        //cout << NameBlankPos[k] << " "; //test
        for (int h = NameBlankPos[k]; h < maxBlankPos; h++) {
            cout << " ";
        }
        cout << name[k] << endl;
        delete [] name[k];
    }

    delete [] name;

    return 0;
}