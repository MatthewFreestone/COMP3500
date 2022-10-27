// Matthew Freestone, maf0083
// simple.cpp 
// g++ simple.cpp -o runme; ./runme
// I used the project 1 template file to get started.
#include <iostream>
#include <cmath> 
using namespace std;

float calculateSD(float data[], int n){
    float sum = 0;
    float mean = 0;
    float sd = 0;
    for(int i = 0; i < n; i++){
        sum += data[i];
    }
    mean = sum/n;
    for(int i = 0; i < n; i++){
        sd += pow(data[i] - mean, 2);
    }
    sd = sqrt(sd/n);
    return sd;
}; 

int factorial(int num){
    if(num == 0){
        return 1;
    }
    return num * factorial(num - 1);
}

int main(int argc, char const *argv[])
{
    int i,j;
    float data[10]; 
     
    cout << "Enter a positive number (<10):"; 
    cin >> j; 
    while(!cin || j < 0 || j > 10){
        cout << "Invalid input. Enter a positive number (<10):";
        cin.clear();
        cin.ignore(100, '\n');
        cin >> j;
    }
    cout << "Please enter "<< j << " positive numbers: " << endl; 
    for(i = 0; i < j; ++i){
        cin >> data[i]; 
        while (!cin || data[i] < 0){
            cout << "Invalid input. Enter a positive number:";
            cin.clear();
            cin.ignore(100, '\n');
            cin >> data[i];
        }
    }
 
    cout << endl << "Standard Deviation = " << calculateSD(data, j)<<endl; 
  
    cout<< "Factorial of "<< j <<" = " << factorial(j) << endl; 
    return 0; 
} 
