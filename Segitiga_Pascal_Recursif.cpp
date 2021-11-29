#include <iostream>
using namespace std;

long faktorial(int n) {

  long z = 1;
  int i = 1;

  while(i<=n) {
    z=z*i;
    i++;
  }
  
  return z;
}

int main() {
  int i, x;

  for (i=0; i<6; i++) {
    for (x=0; x<6-i-1; x++){
      cout << " ";
    }

    for (x=0; x<=i; x++){
      cout << faktorial(i) / (faktorial(x) * faktorial(i - x)) << " ";
    }
    
    
    cout << endl;
    
  }
    cout <<"\ndevelop @mahendrarendi";
  return 0;

}
