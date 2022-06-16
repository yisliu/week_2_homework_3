#include <iostream>
using namespace std;

int main() {
  //make int n so user could input amount of char
  int n;
  cin>>n;
  int b;
  //make a char array, so the user could input multiple elements
  char a[n];
  //make variable to be used for inserting the char the user inputs into a
  int i = 0;
  //loop to convert upper to lower or lower to upper
  while(i<n){
    cin>>a[i];
    if(a[i]>='A' and a[i]<='Z'){
      a[i] = a[i]+32;
    }
    else if(a[i]>='a' and a[i]<='z'){
      a[i] = a[i]-32;
    }
    //this makes the code ignore spaces
    else if(a[i]==32){
      continue;
    }
    //increases i by 1
    i++;
  }

  //prints out the array a
  for(int i = 0; i < n ; i++){
    cout << a[i];
  }
  
}