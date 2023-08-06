#include <iostream>
 
int main () {
    int w;
    std::cin >> w;
    
    if (w>=4 && w%2 == 0){
        std::cout << "YES\n";
    }
    
    else {
        std::cout <<"NO\n";
    }
    
    return 0;
}
