#include <iostream>
using namespace std;

int main(){
    int rows = 5;
    int columns = 5;
    int matrix[rows][columns];
    int a,b;
    int count = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if(matrix[i][j] == 1){
                a = i;
                b = j;
            }
        }
    }

    if(a<2)
    {
        rows=2-a;
    }
    else if(a>2)
    {
        rows=a-2;
    }
    else
    {
        rows=0;
    }
    if(b<2)
    {
        columns=2-b;
    }
    else if(b>2)
    {
        columns=b-2;
    }
    else
    {
        columns=0;
    }

    std::cout<<rows+columns<<endl;

    return 0;

}