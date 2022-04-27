#include <iostream>
 
using namespace std;
  
int main(){
    int n , reversedNumber = 0, remainder;

    cout << "Enter an integer: ";
    cin >> n;

    int inputNumber = n;

    while(n != 0) {  

        remainder = n%10;
        
        reversedNumber = ((reversedNumber*10) + remainder);
        
        n /= 10;
    }


    if(reversedNumber == inputNumber){
        cout << inputNumber << " is Palindrome Number";
    } else {
        cout << inputNumber << " is not a Palindrome Number";
    }
      

    return 0;
}