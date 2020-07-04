#include <iostream>
#define MaxSize 50

using namespace std;

//顺序表定义
typedef struct {
    int data[MaxSize];
    int length;
}SqList;
//初始化
void InitList(SqList &L) {
    for (int i = 0; i < MaxSize; i++) {
        L.data[i] = 0;
    }
    L.length = 0;
}
//求长度
int Length(SqList L) {
    return L.length;
}
//插入
bool ListInsert(SqList& L, int i, int e) {
    if (i < 1 || i > L.length + 1) {
        return false;
    }

    if (L.length >= MaxSize) {
        return false;
    }

    for (int j = L.length; j >= i; j--) {
        L.data[j] = L.data[j - 1];
    }

    L.data[i - 1] = e;
    L.length++;

    return true;
}
//删除
bool ListDelete(SqList& L, int i, int &e) {
    if (i < 1 || i > L.length) {
        return false;
    }
    if (L.length == 0) {
        return false;
    }

    e = L.data[i - 1];
    
    for (int j = i; j < L.length; j++) {
        L.data[j - 1] = L.data[j];
    }

    L.length--;

    return true;
}
//查找
int LocateElem(SqList L, int e) {
    for (int i = 0; i < L.length; i++) {
        if (L.data[i] == e) {
            return i + 1;
        }
    }
    return 0;//查找失败
}
//输出
void PrintList(SqList L) {
    for (int i = 0; i < L.length - 1; i++) {
        cout << L.data[i]<< " ";
    }
    cout << L.data[L.length - 1]<< endl;
}

//逆置
void Reverse(SqList& L) {
    int temp;
    int i, j;
    for (i = 0,j = L.length - 1; i < j; i++, j--) {
        temp = L.data[i];
        L.data[i] = L.data[j];
        L.data[j] = temp;
    }
}


bool Delete_Same(SqList& L) {
    if (L.length == 0)
        return false;

    int k = 0;
    for (int i = 0; i < L.length; i++) {
        if (L.data[i] == L.data[i + 1])
            k++;
        else
            L.data[i + 1 - k] = L.data[i + 1];
    }
    L.length -= k;
    return true;
}