#include <iostream>
#include <fstream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    ifstream file("score.txt");

    double x, sum = 0, sumSq = 0;
    int count = 0;

    while(file >> x){
        sum += x;
        sumSq += x * x;
        count++;
    }

    file.close();

    double mean = sum / count;
    double sd = sqrt((sumSq / count) - (mean * mean));

    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = " << mean << endl;
    cout << "Standard deviation = " << sd << endl;

    return 0;
}