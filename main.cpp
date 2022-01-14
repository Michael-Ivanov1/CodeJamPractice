#include <iostream>
#include <fstream> 
#include <unordered_map>

/* 
TODO
    - HashTable to store every individual ingredient
        - Add one count to the ingredient per like and remove one per dislike
        

*/

std::string INPUT_FILE = "../Input/a_an_example.in.txt";

struct Ingredient {
    std::string name;
    int likedness = 0;
};

int main() {
    std::unordered_map<std::string, Ingredient> ingredientsMap;

    std::ifstream inputFile;
    inputFile.open(INPUT_FILE);

    std::string mystring;
    if ( inputFile.is_open() ) { // always check whether the file is open
        inputFile >> mystring; // pipe file's content into stream
        std::cout << mystring; // pipe stream's content to standard output
    }

    inputFile.close();
    return 0;
}