#include <iostream>
#include <array>
using namespace std;

//№ 1. Переобразовать матрицу: элементы строки, в которой находится минимальный элемент матрицы, заменить нулями
/*int main()
{
    array<array<int, 4>, 4> a;
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            a[i][j]=rand()%10;

    int  min_el_j, min_el;
    for(int i=0;i<4;i++){
        for(int j=0;j<6;j++){
            if(a[i][j]<min_el){
                min_el = a[i][j];
                min_el_j = i;
             }
         }
    }
    for(int i=0;i<4;i++){
        a[min_el_j][i] = 0;
    }

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++)
            cout<<a[i][j]<<' ';
    cout<<endl;

    }
}*/
//№ 6. Дана матрица. Составить массив, каждый элемент которого равен максимальному элементу соотвветствующей строки матрицы
/*int main(){
    array<array<int, 3>, 3> num;
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            num[i][j]=rand()%20;

    array<int, 3> max={0,0,0};

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            if(num[i][j]>max[i])
                max[i]=num[i][j];}

   for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            num[i][j]=max[i];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
            cout<<num[i][j]<<' ';
    cout<<endl;}
}*/
//№ 8. Дана матрица. Элементы первой строки - мощность электромотора, второй строки - категория матора(от 1 до 3). Найти самый мощный двигатель категории 3.
/*int main(){
    array<array<int, 10>, 2> mat;
    array<int, 10> max;

    for(int i=0;i<1;i++){
        for(int j=0;j<10;j++)
            mat[i][j]=rand()%100+20;}

    for(int i=1;i<2;i++){
        for(int j=0;j<10;j++)
            mat[i][j]=rand()%3+1;}


    for(int j=0;j<10;j++){
        for(int i=0;i<2;i++)
            cout<<mat[i][j]<<' ';
    cout<<endl;}
    cout<<endl;

    for(int i=0;i<10;i++)
        max[i]=0;

    for(int j=0;j<10;j++)
        if(mat[1][j]==3)
            max[j]=mat[0][j];

    int MAX=0;
    for(int i=0;i<max.size();i++){
            if(max[i]>MAX)
                MAX=max[i];}
    cout<<MAX<<endl;
}*/
//№ 9b.  Состояние робота на шахматной доске. Робот характеризуется уровнем заряда, скоростью движения.
/*int main(){
    int size;
    cout<<"Vvedite kolichestvo robotov: ";
    cin>>size;
    double** matr=new double* [2];
    for(int i=0;i<2;i++)
        matr[i]=new double[size];

    for(int i=0;i<size;i++){
        cout<<"Vvedite zaryd "<<i+1<<" robota: ";
        cin>>matr[0][i];
        cout<<"Vvedite skorost "<<i+1<<" robota: ";
        cin>>matr[1][i];}

    for(int i=0;i<2;i++){
        for(int j=0;j<size;j++)
            cout<<matr[i][j]<<' ';
    cout<<endl;}

    for(int i=0;i<2;i++)
        delete[] matr[i];
    delete[] matr;
    return 0;
}*/
