#include <iostream>

using namespace std;
int trace[1000]; // Khoi tao mang truy vet co tat ca gia tri = 0
int min_Of_Two_Value(int a, int b){
    if (a < b) return a;
    return b;
}

int main()
{
    int N,M; // M luu so dong, N luu so cot cua ma tran
    cin >> N >> M;
    int first_Array[N];
    int temp_Var; // bien trung gian xu ly cac phan tu tu dong thu 2 -> dong M
    for (int i = 0; i < N; i++){
        cin >> first_Array[i];
        trace[first_Array]
    }
    for (int i = 0; i < M-1; i++){
        for (int j = 0; j < N; j++){
            cin >> temp_Var;

        } 
    }
}