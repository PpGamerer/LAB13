#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}

void showImage(const bool a[N][M]){
    for(int i=0;i<M+2;i++) cout << "-";
    cout << "\n";
    for(int i=0;i<N;i++){
        cout << "|";
        for(int j=0;j<M;j++){
            if(a[i][j]==1) cout << "*";
            else cout << " ";
        }
        cout << "|\n";
    }
    for(int i=0;i<M+2;i++) cout << "-";
    cout << "\n";
}

void updateImage(bool b[N][M],int c,int d,int e){
   for(int i=0;i<N;i++)
       for(int j=0;j<M;j++)
           if(sqrt((pow(i-d,2))+(pow(j-e,2)))<=c-1)
               b[i][j] = 1; 
}