#include <iostream>
#include <iomanip>
#include<fstream>
#include<cmath>
using namespace std;

int main(){
    int N = 0;
    double mean, d, sum = 0, a = 0;
    ifstream source;
    source.open("score.txt");
    string score;
    while(getline(source,score)){
        sum += atof(score.c_str());
        a += pow(atof(score.c_str()),2);
        N++; 
    }
    mean = sum/N;
    d = sqrt((a/N)-pow(mean,2));
    cout << "Number of data = "<< N << endl;
    cout << setprecision(3);
    cout << "Mean = "<< mean << endl;
    cout << "Standard deviation = "<< d;
}
