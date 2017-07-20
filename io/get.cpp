//using get() recognises the space,tab etc nut if we use the insertion overloaded operator(>>) it wont recognise the spces and tabs.
#include <iostream>
using namespace std;
int main()
{
    int count = 0;
    char c;
    c = cin.get(); //we can also use          cin.get(c);

    while (c != '\n')
    {
        cout.put(c);
        cin.get(c);
        count++;
    }
}