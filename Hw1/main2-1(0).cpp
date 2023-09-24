#include <iostream>
#include <string>
#include <cstring>
#include <string.h>
using namespace std;

int main() {
    int x;
    int y;
    cout << "Number of people:" << endl;
    cin >> x;
    cout << "The maximun length of the name: " << endl;
    cin >> y;
    cin.get(); // cin.get 吃掉換行
    char a[y+1];
    char **p = new char*[x];
    int max = 0;
    int *pBlankPos = new int [x];
    int maxBlankPos = -1;
    
    for (int i = 0; i < x; i++) {
        cout << "Enter a name: ";
        //p[i] = new char[y+1];
        cin.getline(p[i] = new char [y + 1], y+1);
        //strcpy(p[i], a);
        cout << p[i] << endl;
        
        int j = 0;
        while(p[i][j] != ' ' && p[i][j] != 0)   j++;
        cout << "j = " << j << endl;
    }
    
    /*
    for (int k = 0; k < x; k++){
        for (int l = 0; l < y; l++){
            if(p[k][l] == ' '){
                
            }
        }
    }
    
    
    
    for (int m = 0; m < x; m++) {
        for (int n = 0; n < y; n++){
            cout << p[m][n];
        }
        cout << "\n";
    }
    return 0;
    
    delete p;
    */
}
