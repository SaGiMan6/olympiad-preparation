#include <iostream>
#include <fstream>

using namespace std;


int main() {
    // ios::sync_with_stdio(false);


    ifstream in_file;
    ofstream out_file;
    int a, b;


    in_file.open("input.txt");
    in_file >> a >> b;
    in_file.close();


    out_file.open("output.txt");
    out_file << (a + b);
    out_file.close();
}
