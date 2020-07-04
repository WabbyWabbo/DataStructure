#include "/Users/fisher/Desktop/ds/SqList/SqList.h"

bool Merge(SqList A, SqList B, SqList &C)
{
    // if(A.length + B.length > C.maxSize)
    //     return false;
    int i = 0, j = 0, k = 0;
    while (i < A.length && j < B.length)
    {
        if (A.data[i] < B.data[j])
        {
            C.data[k++] = A.data[i++];
        }
        else
        {
            C.data[k++] = B.data[j++];
        }
    }

    while (i < A.length)
    {
        C.data[k++] = A.data[i++];
    }

    while (j < B.length)
    {
        C.data[k++] = B.data[j++];
    }

    C.length = k;

    return true;
}
/*test method*/
int main()
{
    SqList L;

    InitList(L);

    ListInsert(L, 1, 1);
    ListInsert(L, 2, 3);
    ListInsert(L, 3, 5);
    ListInsert(L, 4, 7);
    ListInsert(L, 5, 9);
    ListInsert(L, 6, 11);
    ListInsert(L, 7, 13);

    PrintList(L);

    SqList L2;

    InitList(L2);

    ListInsert(L2, 1, 2);
    ListInsert(L2, 2, 4);
    ListInsert(L2, 3, 6);
    ListInsert(L2, 4, 8);
    ListInsert(L2, 5, 10);
    ListInsert(L2, 6, 12);
    ListInsert(L2, 7, 14);

    PrintList(L2);

    SqList C;
    InitList(C);
    Merge(L,L2,C);
    PrintList(C);
    
    return 0;
}