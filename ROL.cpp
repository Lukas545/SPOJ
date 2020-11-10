#include <iostream>
#include <valarray>
  
int main()
{
    size_t t;
    std::cin >> t;
    for (int i = 0; i < t; i++)
    {
        size_t n;
        std::cin >> n;
  
        std::valarray<int> array(n);
  
        for (int i = 0; i < n; i++)
            std::cin >> array[i];
  
        for (int i = 1; i < n; i++)
            std::cout << array[i] << " ";
        std::cout << array[0] << "\n";
    }
} 