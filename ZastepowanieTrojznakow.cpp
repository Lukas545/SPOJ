#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
int main()
{
    std::string codeToRepair;
    std::getline(std::cin, codeToRepair);
    const std::vector<std::pair<std::string, std::string>> TRIGRAPH{
        {"??=", "#"}, {"??/", "\\"}, {"??'", "^"}, {"??(", "["}, {"??)", "]"}, {"??!", "|"}, {"??<", "{"}, {"??>", "}"}, {"??-", "~"}};
    constexpr std::size_t SIZE_TRIGRAPH = 3;
    for (const auto &i : TRIGRAPH)
    {
        if (std::size_t found = codeToRepair.find(i.first); found != std::string::npos)
        {
            codeToRepair.replace(found, (found + SIZE_TRIGRAPH), i.second);
        }
    }
    std::cout << codeToRepair;
    return 0;
}