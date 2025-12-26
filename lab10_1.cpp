#include <iostream>
using namespace std;

int main(){
    int count[5] = {}; // A, B, C, D, F
    char grade;
    int student = 1;

    cout << "Please input grade of each student (A-F) or input 0 to exit.\n";

    while(true){
        cout << "Student [" << student << "]: ";
        cin >> grade;

        if(grade == '0'){
            break;
        }

        if(grade == 'A'){
            count[0]++;
            student++;
        }else if(grade == 'B'){
            count[1]++;
            student++;
        }else if(grade == 'C'){
            count[2]++;
            student++;
        }else if(grade == 'D'){
            count[3]++;
            student++;
        }else if(grade == 'F'){
            count[4]++;
            student++;
        }else{
            cout << "Wrong input. Please input again.\n";
        }
    }

    int total = count[0] + count[1] + count[2] + count[3] + count[4];

    cout << "In total " << total << " students.\n";
    cout << "A = " << count[0]
         << ", B = " << count[1]
         << ", C = " << count[2]
         << ", D = " << count[3]
         << ", F = " << count[4];

    return 0;
}