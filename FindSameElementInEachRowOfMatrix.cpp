/*
    De bai: Tim cac gia tri giong nhau trong tat ca cac dong cua ma tran M * N

    Mo ta giai thuat:
    1. Nhap ma tran kich thuoc M x N.
    2. Tao mang `trace[1000]` de truy vet, khoi tao tat ca gia tri cua `trace` = 0.
    3. Doc dong dau tien cua ma tran va luu vao mang `first_Array`. Cap nhat `trace` danh dau cac gia tri co trong dong dau tien.
    4. Duyet qua cac dong tiep theo cua ma tran:
       - Doc tung gia tri trong dong hien tai.
       - Neu gia tri do da co trong `trace`, tang so lan xuat hien len va dam bao no khong vuot qua so thu tu cua dong hien tai.
    5. Kiem tra cac gia tri trong `first_Array`:
       - Neu gia tri nao co so lan xuat hien bang so dong cua ma tran (M), thi do la gia tri giong nhau trong tat ca cac dong.
    6. Xuat cac gia tri thoa man.

    Ma gia chi tiet:
    1. Nhap kich thuoc ma tran M x N.
    2. Tao mang `trace[1000]` va mang `first_Array[N]`.
    3. Nhap dong dau tien cua ma tran:
       - Cap nhat `trace` cho cac gia tri nay.
    4. Lap qua cac dong tiep theo cua ma tran:
       - Cap nhat `trace` cho cac gia tri theo quy tac truy vet.
    5. Duyet qua `first_Array`:
       - Neu gia tri nao trong `trace` co gia tri bang M, xuat gia tri do.

    Vi du:
    Dau vao:
    3 4
    1 2 3 4
    1 2 5 6
    1 2 7 8

    Dau ra:
    Cac gia tri lap la: 1 2
*/

#include <iostream>
using namespace std;

int trace[1000]; // Khoi tao mang truy vet co tat ca gia tri = 0
int min_Of_Two_Value(int a, int b) {
    return (a < b) ? a : b;
}

int main() {
    int N, M; // M luu so dong, N luu so cot cua ma tran
    cin >> N >> M;
    int first_Array[N];
    int temp_Var; // Bien trung gian xu ly cac phan tu tu dong thu 2 -> dong M

    // Nhap dong dau tien va cap nhat vao mang truy vet
    for (int i = 0; i < N; i++) {
        cin >> first_Array[i];  
        trace[first_Array[i]] = 1;
    }

    // Xu ly cac dong tiep theo cua ma tran
    for (int i = 0; i < M - 1; i++) {
        for (int j = 0; j < N; j++) {
            cin >> temp_Var;
            trace[temp_Var] = min_Of_Two_Value(trace[temp_Var] + 1, i + 2);
        } 
    }

    // In ket qua
    cout << "Cac gia tri lap la: ";
    for (int i = 0; i < N; i++) {
        if (trace[first_Array[i]] == M) cout << first_Array[i] << " ";
    }

    /*
        Danh gia do phuc tap cua thuat toan
        - Do phuc tap: O(M * N) do xu ly tuyen tinh cac phan tu cua ma tran.
        - Do phuc tap luu tru: O(N) do luu tru mang truy vet va mang tam.

        Trade-off:
        - Mang `trace` se gay ton bo nho neu gia tri max(temp_Var) rat lon.
        
        Giai phap phat trien thuat toan:
        - Su dung cac cau truc du lieu nhu map, set hoac linked list.
    */
    return 0;
}
