#include <iostream>
#include <vector>

using namespace std;

void typeSize(const char* requestType)
{
    cout << "Size of " << requestType << ": " << sizeof(requestType) << "\n";
}

int main(){
    using namespace std;

    typeSize("int");
    typeSize("long");
    typeSize("short");
    typeSize("bool");
    typeSize("double");
    return 0;
    // test comment
}