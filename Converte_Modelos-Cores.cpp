#include <iostream>
#include <string>
#include <locale.h>
#include <conio.h>
#include <math.h>

using namespace std;

//Aluno:André Lucas de Macedo Santos RA: 00079537

int main() {
    
    char option;

        while (option != 27)
  {

    int SOrigem;

    cout<<"\n\n| Conversao entre Modelos de Cores |"<<endl;
    cout<<"\nEscolha o modelo de origem 1 para RGB ou 0 para CMY: "<<endl;
    cin>>SOrigem;

//RGB –> CMY

if (SOrigem == 1){   

    int R, G, B, Rtemp, Gtemp, Btemp, i = 1, a = 1, o = 1, j, k, w, r, g, b;
    char hex0[50], hex1[50], hex2[50]; 
  
    cout<<"\nDigite uma valor para R de 0 a 255?"<<endl;
    cin>>R;

    cout<<"Digite uma valor para G de 0 a 255?"<<endl;
    cin>>G;

    cout<<"Digite uma valor para B de 0 a 255?"<<endl;
    cin>>B; 

    float C = 1.0f - (R / 255.0f);
    float M = 1.0f - (G / 255.0f);
    float Y = 1.0f - (B / 255.0f);

    float cmyArray[3] = {C, M, Y};

    cout<<"\nC: "<<C<<endl;
    cout<<"M: "<<M<<endl;
    cout<<"Y: "<<Y<<endl;

    float C1 = 1 - (R / 255);
    float M1 = 1 - (G / 255);
    float Y1 = 1 - (B / 255);

    float cmyArray_[3] = {C1, M1, Y1};

    cout<<"\nC: "<<C1<<endl;
    cout<<"M: "<<M1<<endl;
    cout<<"Y: "<<Y1<<endl;

    int C2 = (((R/255.0f)-1)*100.0f)*(-1);
    int M2 = (((G/255.0f)-1)*100.0f)*(-1);
    int Y2 = (((B/255.0f)-1)*100.0f)*(-1);

    int cmyArray1_[3] = {C2, M2, Y2};

    cout<<"\nC: "<<C2<<" %"<<endl;
    cout<<"M: "<<M2<<" %"<<endl;
    cout<<"Y: "<<Y2<<" %"<<endl;

    Rtemp = R;
    while (Rtemp != 0)
    {
        r = Rtemp % 16;
        if (r < 10)
            hex0[i++] = r + 48;
        else
            hex0[i++] = r + 55;
        Rtemp = Rtemp / 16;
    }
    cout << "\nHexadecimal de R " << R << ": ";
    for (j = i; j > 0; j--)
        cout << hex0[j];
    
    
    Gtemp = G;
    while (Gtemp != 0)
    {
        g = Gtemp % 16;
        if (g < 10)
            hex1[a++] = g + 48;
        else
            hex1[a++] = g + 55;
        Gtemp = Gtemp / 16;
    }
    
    cout << "\nHexadecimal de G " << G << ": ";

    for (k = a; k > 0; k--)
        cout << hex1[k];
    

     Btemp = B;
    while (Btemp != 0)
    {
        b = Btemp % 16;
        if (b < 10)
            hex2[o++] = b + 48;
        else
            hex2[o++] = b + 55;
        Btemp = Btemp / 16;
    }
    
    cout << "\nHexadecimal de B " << B << ": ";        

    for (w = o; w > 0; w--)
        cout << hex2[w];
    
        cout <<"\n\nCodigo Hexadecimal da cor: #";

    for (j = i; j > 0; j--)
        /*if(hex0[j]==0){
            cout <<"00";
        }*/  
        cout<< hex0[j];
    for (k = a; k > 0; k--)
        /*if(hex1[k]==0){
            cout <<"00";
        }*/  
        cout<< hex1[k];
    for (w = o; w > 0; w--)
        /*if(hex2[w]==0){
            cout <<"00";
        }*/     
        cout<< hex2[w];


    cout<<" "<<endl;
    }

//CMY –> RGB

if (SOrigem == 0){

    int C, M, Y, R1temp, G1temp, B1temp, i1 = 1, a1 = 1, o1 = 1, y, t, u, r1, g1, b1;
    char hex3[50], hex4[50], hex5[50];

    cout<<"\nDigite uma valor para C de 0 a 100? "<<endl;
    cin>>C;

    cout<<"Digite uma valor para M de 0 a 100? "<<endl;
    cin>>M;

    cout<<"Digite uma valor para Y de 0 a 100? "<<endl;
    cin>>Y; 

    int R1 = (((-C/100.0f)+1)*255.0f);
    int G1 = (((-M/100.0f)+1)*255.0f);
    int B1 = (((-Y/100.0f)+1)*255.0f);
    
    cout<<"\nR: "<<R1<<endl;
    cout<<"G: "<<G1<<endl;
    cout<<"B: "<<B1<<endl;
    
    int R2 = (255.0f * (1.0f - (C/100.0f)));
    int G2 = (255.0f * (1.0f - (M/100.0f)));
    int B2 = (255.0f * (1.0f - (Y/100.0f)));
    
    cout<<"\nR: "<<R2<<endl;
    cout<<"G: "<<G2<<endl;
    cout<<"B: "<<B2<<endl;

    float R3 = (255.0f * ((-C/100.0f) + 1.0f));
    float G3 = (255.0f * ((-M/100.0f) + 1.0f));
    float B3 = (255.0f * ((-Y/100.0f) + 1.0f));

    cout<<"\nR: "<<R3<<endl;
    cout<<"G: "<<G3<<endl;
    cout<<"B: "<<B3<<endl;

    R1temp = R1;
    while (R1temp != 0)
    {
        r1 = R1temp % 16;
        if (r1 < 10)
            hex3[i1++] = r1 + 48;
        else
            hex3[i1++] = r1 + 55;
        R1temp = R1temp / 16;
    }
    
    cout << "\nHexadecimal de R " << R1 << ": ";

    for (y = i1; y > 0; y--)
        cout << hex3[y];
    
    G1temp = G1;
    while (G1temp != 0)
    {
        g1 = G1temp % 16;
        if (g1 < 10)
            hex4[a1++] = g1 + 48;
        else
            hex4[a1++] = g1 + 55;
        G1temp = G1temp / 16;
    }
    
    cout << "\nHexadecimal de G " << G1 << ": ";

    for (t = a1; t > 0; t--)
        cout << hex4[t];
    
    B1temp = B1;
    while (B1temp != 0)
    {
        b1 = B1temp % 16;
        if (b1 < 10)
            hex5[o1++] = b1 + 48;
        else
            hex5[o1++] = b1 + 55;
        B1temp = B1temp / 16;
    }
    
    cout << "\nHexadecimal de B " << B1 << ": ";        

    for (u = o1; u > 0; u--)
        cout << hex5[u];
    
        cout <<"\n\nCodigo Hexadecimal da cor: #";

    for (y = i1; y > 0; y--)
        /*if(hex3[y]==0){
            cout <<"00";
        }*/   
        cout << hex3[y];        
    for (t = a1; t > 0; t--)
        /*if(hex4[t]==0){
            cout <<"00";
        }*/
        cout << hex4[t];
    for (u = o1; u > 0; u--)
        /*if(hex5[u]==0){
            cout <<"00";
        }*/    
        cout << hex5[u];


    cout<<" "<<endl;
    }

    cout << "\n\nPressione a tecla ESC para finalizar ou qualquer tecla para continuar..." << endl;
    option = getch();

    if(option == 27){
      return 0;   
    }
  }
}