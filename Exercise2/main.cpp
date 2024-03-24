#include <iostream>
#include <fstream>
#include<iomanip>
using namespace std;

double f(double x){
    return (x-1.5)/2.0;
}
int main()
{
    double val=0.0;
    unsigned int i=0;
    string nameFile ="data.csv";
    ifstream fstr;
    fstr.open(nameFile);

    if(fstr.fail())
    {
        cerr <<"File not found" << std::endl;
        return 1;
    }
    ofstream outFile("result.csv");
    outFile<<"#"<<" N"<<" Mean"<<endl;

    while(fstr >> val)
    {
        i++;
        outFile<< i<< " "<< setprecision(16)<< scientific << f(val)<<endl;
    }
    fstr.close();
    outFile.close();
    return 0;
}
