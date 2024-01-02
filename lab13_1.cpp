#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double x[],int y,double z[]){
    double sum = 0,avg;
    for(int i=0;i<y;i++){
        sum += x[i];
    }
    avg = sum/y;
    z[0] = avg;

    double sum2 = 0,SD;
    for(int i=0;i<y;i++){
        sum2 += pow((x[i]),2);
    }
    SD = sqrt((sum2/y)-(pow((avg),2)));
    z[1] = SD;

    double sum3 = 1,GM;
    for(int i=0;i<y;i++){
        sum3 *= x[i];
    }
    GM = pow(sum3,1.0/y);
    z[2] = GM;

    double sum4=0,HM;
    for(int i=0;i<y;i++){
        sum4 += 1/x[i];
    }
    HM = y/sum4;
    z[3] = HM;

    double max = x[0],min = x[0];
    for(int i=0;i<y;i++){
        if(x[i]>max) max=x[i];
        if(x[i]<min) min=x[i];
    }
    z[4] = max;
    z[5] = min;
}