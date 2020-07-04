#include "/Users/fisher/Desktop/ds/SqList/SqList.h"

void Function(SqList &L, int x)
{
    int start = 0;
    int end = L.length - 1;
    int mid;

    while (start <= end)
    {
        mid = (start + end) / 2;
        if (x == L.data[mid])
        {
            if (mid < L.length - 1)
            {
                int temp = L.data[mid];
                L.data[mid] = L.data[mid + 1];
                L.data[mid + 1] = temp;
                return;
            }
            else
            {
                cout << x << " 没有后继元素" << endl;
                return;
            }
        }
        else if (x < L.data[mid])
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    //下标end的后一个是插入位置下标，即L中的第(end+2)个数
    ListInsert(L, end + 2, x);
}

int main(void)
{
    SqList L;
    InitList(L);
    ListInsert(L, 1, 1);
    ListInsert(L, 2, 2);
    ListInsert(L, 3, 3);
    ListInsert(L, 4, 4);
    ListInsert(L, 5, 5);
    ListInsert(L, 6, 6);
    ListInsert(L, 7, 7);
    ListInsert(L, 8, 8);
    ListInsert(L, 9, 9);
    ListInsert(L, 10, 10);

    Function(L,-1);

    PrintList(L);
}