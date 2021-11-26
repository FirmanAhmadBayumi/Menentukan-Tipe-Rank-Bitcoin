#include <iostream>
using namespace std;
int main(){
  /*Firman Ahmad Bayumi
    2117051062
    B*/
  
  //variabel
  float btc;
  
  //input
  cout << " Jumlah Bitcoin : ";
  cin >> btc;
  
  //output
  if (btc < 1 ){
    cout << "Tipe rank:Shrimp";
  }
  else if (btc >= 1 && btc < 10){
    cout << "Tipe rank:Crab";
  }
  else if (btc >= 10 && btc < 5){
    cout << "Tipe rank:Octopus";
  }
  else if (btc >= 50 && btc < 100){
    cout << "Tipe rank:Fish";
  }
  else if (btc >= 100 && btc < 500){
    cout << "Tipe rank:Dolphin";
  }
  else if (btc >= 500 && btc < 1000){
    cout << "Tipe rank:Shark";
  }
  else if (btc >= 1000 && btc < 5000){
    cout << "Tipe rank:Whale";
  }
  else {
    cout << "Tipe rank:Humpback";
  }
  
  return 0;
}