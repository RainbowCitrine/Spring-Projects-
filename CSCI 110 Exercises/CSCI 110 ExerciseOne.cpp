/This program is a mini calculator from C++


#include <iostream>

using namespace std;

int main()
{
    
    float first; 
    float second; 
    
    cout<< "Please enter the first value: " << endl;
    
    cin >> first; 
    
    cout << "Please enter the second value: " << endl;
    
    cin >> second; 
    
   
    float sum = first + second; 
    
    cout << "Sum = " << sum << endl; 
    
    float diff = first - second; 
    
    cout << "Difference = " << diff << endl; 
    
    float product = first * second; 
    
    cout << "Product = " << product << endl; 
    
    float quotient = first / second; 
    
    cout << "Quotient = " << quotient << endl; 
    
    if (first > second)
    cout << "First value is greater than the second value" << endl; 
    
    else 
    cout << "First value is less than the second value" << endl; 

 
    return 0;
}
