//
//  main.cpp
//  swapper
//
//  Created by Данила Дудин on 11.02.2021.
//

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> a;
    vector<int> b;
    int N, elem, i;
    cin >> N;

    for (i = 0; i < N; i++){
        cin >> elem;
        a.push_back(elem);
    }

    for (i = 0; i < N; i++){
        cin >> elem;
        b.push_back(elem);
    }
    
    for (i = 0; i < N; i++){
        cout << a[i] << ' ';
    }
    cout << "\n";
    
    for (i = 0; i < N; i++){
        cout << b[i] << ' ';
    }
    cout << "\n";
    
    std::reverse(std::begin(b), std::end(b));
//    a.swap(b);//       :D
    vector<int>::iterator itb = b.begin();

    for (vector<int>::iterator ita = a.begin(); ita!= a.end(); ita++){
        elem = *itb;
        *itb = *ita;
        *ita = elem;
        itb++;
    }
    for (i = 0; i < N; i++){
        cout << a[i] << ' ';
    }
    cout << "\n";
    for (i = 0; i < N; i++){
        cout << b[i] << ' ';
    }
    cout << "\n";
    return 0;
}
