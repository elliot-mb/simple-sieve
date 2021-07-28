#include <iostream>
#include <bitset> //for bitset
#include <cmath> //for sqrt and ceil

int main() //sieve of eratosthenes
{
    
    constexpr int primesTo = 10000000; //constexpr means const
    int primes = 0;
    std::bitset<primesTo> nonprime;

    nonprime.set(0, true);

    for(int i = 2; i < ceil(sqrt(primesTo)); i++)
    {
        //std::cout << i - 1;
        //std::cout << "\n";
        for(int j = (i * i) - 1; j < primesTo; j+=i)
        {
            nonprime.set(j, true);
        }
    }

    for(int k = 0; k < primesTo; k++){
        if(nonprime[k] == false){ 
            //std::cout << k + 1;
            //std::cout << "\n";
            primes++; 
        }
    }

    std::cout << primes;

    return 0;
}

