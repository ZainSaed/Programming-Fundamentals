#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream fout("pf.txt");
    fout << "Hello World";
    fout.close();
    ifstream fin("pf.txt");
    string line;
    if (fin)
    {
        getline(fin, line);
        cout << line;
    }

    fin.close();

    return 0;
}
