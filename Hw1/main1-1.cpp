// x = 輸入 x 組
// y = 每組最長 y 個


#include <iostream>
#include <string>
#include <cstring>
#include <string.h>
using namespace std;

// bubble sort
// void bubble sort() {
    
// }



int main() {
    int x;
    int y;
    cout << "x:" << endl;
    cin >> x;
    cout << "y:" << endl;
    cin >> y;
    cin.get(); // cin.get 吃掉換行
    char a[y+1];
    char tmp;
    char **p = new char*[x];
    
    for (int i = 0; i < x; i++) {
        p[i] = new char[y];
    }
    
    for (int j = 0; j < x; j++) {
        //cout<<"check";
        //cout << j << "\n";
        cin.getline(a, y+1);
        strcpy(p[j], a);
        //cout << a << "\n";
        //cout << p[j] << endl;
        //cout << "\n";
    }
    // for (int k = 0; k < x; k++){
    //     for (int h = 0; h < y; h++){
    //         cout << p[k][h];
    //     }
    //     cout << "\n";
    // }
    
    
    //bubble sort
    for (int k = x-1; k > 0; k--) {
        for (int h = 0; h < k; h++){
            if (p[h][0] > p[h+1][0]){
                swap(p[h], p[h+1]);
            }
        }
    }
    
    
    //印出陣列
    for (int n = 0; n < x; n++) {
        for (int l = 0; l < y; l++){
            cout << p[n][l];
        }
        cout << "\n";
    }
    return 0;
    
    delete p;
}