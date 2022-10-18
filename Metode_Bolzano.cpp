#include <iostream> 
#include <cmath>
using namespace std; 

// Problem :
// dapatkan akar dari persamaan  f(x) = x^3 + x^2 – 3x – 3 = 0 yang terletak di antara x = 1 dan x = 2.

// Analisis :
// Membuat sebuah program yang dapat menampilkan hasil fungsi dari persamaan f(x) = x^3 + x^2 – 3x – 3 = 0, 
// kemudian setelah ditemukan perubahan  tanda kita bisa mendapatkan interval baru

int main () {
    double xt, x0, x1; 
    double f0, f1, ft; 
    int n = 1; // n sebagai counter looping iterasi Metode Bolzano
    cout<<"METODE BOLZANO"<<endl<<endl; 
    cout<<"Masukkan X0 : "; // perintah buat masukkan nilai dari x0
    cin>>x0; 
    cout << "Masukkan X1 : "; 
    cin >> x1; 
    // xm = xn+1; 
    cout <<"\n-------------------------------------------------------------\n"; 
    cout <<"Iterasi\tx0\tx1\txt\tf(x0)\tf(x1)\tf(xt)"; 
    cout <<"\n-------------------------------------------------------------\n\n"; 
    while(n<=10) 
    { 
    int i = n;
    xt = (x0 + x1)/2; 
    f0 = (pow(x0, 3))+(pow(x0, 2))-(3 * x0)-3; // Penggunaan Rumus f(x) = x^3 + x^2 – 3x – 3 = 0
    f1 = (pow(x1, 3))+(pow(x1, 2))-(3 * x1)-3; // Penggunaan Rumus f(x) = x^3 + x^2 – 3x – 3 = 0
    ft = (pow(xt, 3))+(pow(xt, 2))-(3 * xt)-3; // Penggunaan Rumus f(x) = x^3 + x^2 – 3x – 3 = 0
    //cout<<iterasi<<"\t"<<x0<<"\t"<<x1<<"\t"<<xt<<"\t"<<f0<<"\t"<<f1<<"\t"<<ft<<endl; 
    printf("%d\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\t%.3f\n",i,x0,x1,xt,f0,f1,ft); // Output Iterasi ke, nilai x0,x1,xt,serta hasil fungsi
    if(ft < 0) 
    { 
        x0 = xt; 
    } 
    else if(ft > 0) 
    { 
        x1 = xt; 
    } 
    else 
    { 
        xt; 
        break; 
    } 
        n++; 
    } 
        system("pause"); 
        return 0; 
}