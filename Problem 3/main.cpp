#import <cmath>
#import <iostream>

using namespace std;

int smallestPrime(double intIn);

int main(){

    double checkNum = 600851475143;
    int currentPrime = -1;

    while(currentPrime < checkNum){
        currentPrime = smallestPrime(checkNum);
        cout << currentPrime << endl;
        checkNum = checkNum/currentPrime;
    }

    return 0;
}

int smallestPrime(double intIn){

    for(double i = 2; i <= intIn; i++){
        if(fmod(intIn,i) == 0){
            return i;
        }
    }
}



