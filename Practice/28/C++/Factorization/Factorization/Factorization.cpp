#include <iostream>
#include <map>
#include <string>

void print_factors(const std::map<unsigned int, unsigned int>& factors)
{
    bool not_first = false;
    for (const auto& pair : factors)
    {
        std::cout << (not_first
            ? "*"
            : (not_first = true, ""))
            << pair.first;

        if (pair.second > 1)
        {
            std::cout << '^' << pair.second;
        }
    }
}

void factorization(unsigned int n)
{
    const int min_divisor = 2;

    std::map<unsigned int, unsigned int> factors;

    for (unsigned int i = min_divisor; n == 0 || i <= n; ++i)
    {
        if (n % i == 0)
        {
            n /= i;
            ++factors[i];

            i = min_divisor;
        }
    }

    print_factors(factors);
}

int main()
{
    unsigned int num;
    std::cin >> num;
    factorization(num);
}