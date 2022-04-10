#include <iostream>
#include <vector>
using namespace std;
// a small program that correctly lists all primes within a given number.

bool isPrime(int n){
    int i;
    bool is_prime = true;
    // loop to check if n is prime
    for (i = 2; i <= n / 2; ++i)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }else{
            is_prime = true;
        }
    }


        return is_prime;

}

int main(){
    int i, n;
    vector<int> primes;
    for(;;){
        primes.clear();
        cout << "Enter a positive integer to see it's prime numbers" << endl;
        cin >> n;

        for(i = 2; i <= n; i++){
            if( isPrime(i)){
                primes.push_back(i);
            }
        }

        cout << "The list of primes in " << n << " are: " << endl;
        for(int i : primes){
            cout << i << " ";
        }
        cout << endl;
        cout << n << " has " << primes.size() << " integer elements." << endl;


    }

}
