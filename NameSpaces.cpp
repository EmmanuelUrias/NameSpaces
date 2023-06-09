#include <iostream>

namespace user1Age
{
    int x = 19;
}
namespace user2Age
{
    int x = 22;
}

int main()
{
    // Namespace = provides a solution for preventing name conflicts in a large projects. Each entity needs a unique name. A namespace allows for identically named entities as long as the namespaces are different.
    // using namespace user1Age << you can use this code to be able to get rid of line 17 and just use the x variable in this function but I dont like the idea of actually using this

    int x = 18;

    std::cout << x << '\n';
    std::cout << user1Age::x << '\n';
    std::cout << user2Age::x << '\n';

    return 0;
}