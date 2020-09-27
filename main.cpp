#include <cmath>
#include <iostream>

using namespace std;

bool isPrime(int numIn);

int main(){

    int numPrimes;
    int primeCount = 1;
    int checkPrime = 2;

    cout << "How many primes would you like to calculate?: ";
    cin >> numPrimes;

    while(primeCount < numPrimes+1){
        if(isPrime(checkPrime)){
            cout << checkPrime << endl;
            primeCount++;
        }
        checkPrime++;
    }


 return 0;
}

bool isPrime(int numIn){
    for(int i = 2; i < numIn; i++){
        if(numIn%i == 0){
            return false;
        }
    }
    return true;

}
