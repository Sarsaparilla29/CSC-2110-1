#include <iostream>
#include <string>
using namespace std;

template <class Type>
Type larger(Type x, Type y);

int main(){
    cout << "Line 8: Larger of 5 and 6 = "
         << larger(5, 6) << endl;
    cout << "Line 9: Larger of A and B = "
         << larger('A', 'B') << endl;
    cout << "Line 10: Larger of 5.6 and 3.2 = "
         << larger(5.6, 3.2) << endl;

    std::string str1 = "Hello";
    std::string str2 = "Happy";

    cout << "Line 13: Larger of " << str1 << " and "
         << str2 << "= " << larger(str1, str2)
            << endl;
    return 0;
}

template <class Type>
Type larger(Type x, Type y){
    if(x >= y)
        return x;
    else
        return y;
}

/*
Sample Run:
Line 8: Larger of 5 and 6 = 6
Line 9: Larger of A and B = B
Line 10: Larger of 5.6 and 3.2 = 5.6
Line 13: Larger of Hello and Happy = Hello
*/
