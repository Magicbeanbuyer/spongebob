# include <iostream>
# include <string>
# include <typeinfo>

int main() {

    std::string name(5, 'a');
    std::string go{3, 'b'};

    std::cout << go + ' ' << name << std::endl;
    std::cout << 'w' + 'v' << std::endl; //237
    std::cout << "w" "v" << std::endl;
}