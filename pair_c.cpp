#include <bits/stdc++.h>

using namespace std;

//CRUD

class Map{

    int dec=0;
public:
  // CREATE
    int int_key;
    int int_value;

    string str_key;
    string str_value;
  Map(int key, int value){
        dec = 1;
        int_key = key;
        int_value = value;
  }

  Map( int key, string value){
        dec = 2;
        int_key = key;
        str_value = value;
  }

  Map( string key, string value){
        dec = 3;
        str_key = key;
        str_value = value;

  }

   //READ
   void read(){

    if( dec == 1){
        cout << "Key: " << int_key << " " << "Value: " << int_value << endl;
    }else if( dec == 2){
        cout << "Key: " << int_key << " " << "Value: " << str_value << endl;
    }else if( dec == 3){
        cout << "Key: " << str_key << " " << "Value: " << str_value << endl;
    }

   }

   //UPDATE

};
int main(){

    Map x(1,1);
    x.read();
    Map y(1,"Mashiour");
    y.read();

    Map z("Mashiour", "Sabrina");
    z.read();
    return 0;
}
