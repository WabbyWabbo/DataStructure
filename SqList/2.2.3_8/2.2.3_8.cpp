#include "/Users/fisher/Desktop/ds/SqList/SqList.h"

void Reverse(int R[], int l, int r)
{
    int i, j, temp;
    for (i = l, j = r; i < j; i++, j--)
    {
        temp = R[i];
        R[i] = R[j];
        R[j] = temp;
    }
}

void Exchange(int A[], int m, int n){
    Reverse(A,0,m+n-1);
    Reverse(A,0,n-1);
    Reverse(A,n,m+n-1);
}

//main method for test
int main(void){
    int A[] = {1,2,3,4,5,111,222,333};
    Exchange(A,5,3);
    for(int i = 0; i < 8; i++){
        cout<<A[i]<<endl;
    }
    return 0;
}