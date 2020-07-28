#include <bits/stdc++.h>
using namespace std;

//CRUD

class List{

public:
    int *_list;
    int len;


void create( int arr[], int n){

        _list = new int [n];
         len = n;
     for( int i=0; i<n; i++){
        _list[i] = arr[i];
     }

}

void read(){

    int l = sizeof(_list)/sizeof(_list[0]);

    for( int i=0; i<len; i++){
        cout << _list[i] << " ";
    }
    cout << endl;

}

void deleteElement(int index){


    for( int i=index-1; i<len-1; i++){

        _list[i] = _list[i+1];
    }

    len = len-1;

}

void addElement(int x){

    _list[len] = x;

    len++;

}

};

int main(){

    int arr[5] = {1,2,3,4,5};

    List x;

    x.create(arr,5);
    x.read();
    x.deleteElement(2);
    x.read();
    x.deleteElement(1);
    x.read();
    x.addElement(9);
    x.read();

    return 0;

}
