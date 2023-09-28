#define UNUSED(x) (void)x
#include <iostream> 
using namespace std;
int main(){
double userIn;
double entropy;

double lowTempIn;
double lowEntIn;
double upperTempIn;
double upperEntIn; 

cout << "Input a tempurature between 150 and 500 degrees celcius:" << endl;

cin >> userIn;

if(userIn < 150 || userIn > 500){
    cout << "ERROR: Temperature is outside of range." << endl;
return 1;
}

if(userIn >= 150 && userIn < 200){
    lowTempIn = 150;
    lowEntIn = 7.2810;
    upperTempIn = 200;
    upperEntIn = 7.5081;
}
if(userIn >= 200 && userIn < 250){
    lowTempIn = 200;
    lowEntIn = 7.5081;
    upperTempIn = 250;
    upperEntIn = 7.7100;
}
if(userIn >= 250 && userIn < 300){
    lowTempIn = 250;
    lowEntIn = 7.7100;
    upperTempIn = 300;
    upperEntIn = 7.8941;
}
if(userIn >= 300 && userIn < 400){
    lowTempIn = 300;
    lowEntIn = 7.8941;
    upperTempIn = 400;
    upperEntIn = 8.2236;
}
if(userIn >= 400 && userIn <= 500){
    lowTempIn = 400;
    lowEntIn = 8.2236;
    upperTempIn = 500;
    upperEntIn = 8.5153;
}

entropy = lowEntIn + (upperEntIn-lowEntIn)*((userIn - lowTempIn)/(upperTempIn-lowTempIn));
cout << "Entropy = " << entropy << " kJ/(kg*K)" << endl;

return 0;
}
