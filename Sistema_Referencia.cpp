#include <iostream>
#include <string>
#include <locale.h>
#include <conio.h>

using namespace std;
//Aluno:André Lucas de Macedo Santos RA: 00079537

int main(){

    setlocale(LC_ALL, "Portuguese");
    int SOrigem, SDestino, Xminu, Yminu, Xmaxu, Ymaxu, Xmind, Ymind, Xmaxd, Ymaxd, Xu, Yu, Xd, Yd, Xu1, Yu1, Xd1, Yd1;
    float ValorX_Normalizado, ValorY_Normalizado;
    char option;

    while (option != 27)
  {

    //SRU –> SRD
    //SRD –> SRU

    cout<<"\n\n1 - SRU | 2 - SRD"<<endl;
    cout<<"\nInforme qual o sistema de origem: "<<endl;
    cin>>SOrigem;
    cout<<"\nInforme qual o sitema de destino: "<<endl;
    cin>>SDestino;


    if(SOrigem==1){
            
        cout<<"\nDigite um valor para a coordenada X para o SRU entre os valores 0 e 1000."<<endl;
        cin>>Xu;

        cout<<"\nDigite um valor para a coordenada Y para o SRU entre os valores 0 e 1500."<<endl;
        cin>>Yu;        

        Xd = (Xu*640)/1000;

            cout<<"\nCoordenada X no sistema SRD: "<<Xd<<endl;

        Yd = ((Yu*(-480)/1500))+480;

            cout<<"\nCoordenada Y no sistema SRD: "<<Yd<<endl;

    }

    if(SOrigem==2){
        
        cout<<"\nDigite um valor para a coordenada X para o SRD entre os valores 0 e 640."<<endl;
        cin>>Xd;

        cout<<"\nDigite um valor para a coordenada Y para o SRD entre os valores 0 e 480."<<endl;
        cin>>Yd;       

        Xu = (Xd*1000)/640;

            cout<<"\nCoordenada X no sistema SRU: "<<Xu<<endl;

        Yu = ((Yd-480*1500)/(-480));

            cout<<"\nCoordenada Y no sistema SRU: "<<Yu<<endl;

    }

    //SRU –> SRN –> SRD
    //SRD –> SRN –> SRU

    if(SOrigem==1){
        cout<<"\nCoordenadas normalizadas (valores entre 0 e 1) Ex.: 0 ≤ X ≥ 1 e 0 ≤ Y ≥ 1"<<endl;

        ValorX_Normalizado = (Xu-0)/(1000-0);   
            
            cout<<"\nValor de X normalizado: "<<ValorX_Normalizado<<endl;

        ValorY_Normalizado = (Yu-0)/(1500-0);

            cout<<"\nValor de Y normalizado: "<<ValorY_Normalizado<<endl;

        Xu = ValorX_Normalizado*1000;

            cout<<"\nValor de X no SRU: "<<Xu<<endl;

        Yu = ValorY_Normalizado*1500;

            cout<<"\nValor de Y no SRU: "<<Yu<<endl;

    }

    if(SOrigem==2){
        cout<<"\nCoordenadas normalizadas (valores entre 0 e 1) Ex.: 0 ≤ X ≥ 1 e 0 ≤ Y ≥ 1"<<endl;

        ValorX_Normalizado = (Xd-0)/(640-0);   
            
            cout<<"\nValor de X normalizado: "<<ValorX_Normalizado<<endl;

        ValorY_Normalizado = (Yd-0)/(480-0);

            cout<<"\nValor de Y normalizado: "<<ValorY_Normalizado<<endl;

        Xd = ValorX_Normalizado*640;

            cout<<"\nValor de X no SRD: "<<Xd<<endl;

        Yd = ValorY_Normalizado*480;

            cout<<"\nValor de Y no SRD: "<<Yd<<endl;

    }

    if(SDestino==1){
        cout<<"\nCoordenadas normalizadas (valores entre 0 e 1) Ex.: 0 ≤ X ≥ 1 e 0 ≤ Y ≥ 1"<<endl;

        Xu = ValorX_Normalizado*1000;

            cout<<"\nValor de X no SRU: "<<Xu<<endl;

        Yu = ValorY_Normalizado*1500;

            cout<<"\nValor de Y no SRU: "<<Yu<<endl;

    }

    if(SDestino==2){
        cout<<"\nCoordenadas normalizadas (valores entre 0 e 1) Ex.: 0 ≤ X ≥ 1 e 0 ≤ Y ≥ 1"<<endl;

        Xd = ValorX_Normalizado*640;

            cout<<"\nValor de X no SRD: "<<Xd<<endl;

        Yd = ValorY_Normalizado*480;

            cout<<"\nValor de Y no SRD: "<<Yd<<endl;

    }

    //Sistema X e Y (Resolução de sua escolha)

    if(SOrigem==1){
       
        cout<<"\n\n| Resolução da sua escolha para converter no sistema SRD |"<<endl;
        cout<<"\n\nLimites Sistema X e Y"<<endl;
        
        cout<<"\n| Digite o valor mínimo de X e Y para o Sistema |"<<endl;
        cout<<"\nInforme a coordenada X do sistema: "<<endl;
        cin>>Xminu;
        cout<<"\nInforme a coordenada Y do sistema: "<<endl;
        cin>>Yminu;

        cout<<"\nLimites Sistema X e Y"<<endl;

        cout<<"\n| Digite o valor máximo de X e Y para o Sistema |"<<endl;
        cout<<"\nInforme a coordenada X do sistema: "<<endl;
        cin>>Xmaxu;
        cout<<"\nInforme a coordenada Y do sistema: "<<endl;       
        cin>>Ymaxu;


        cout<<"\nDigite um valor para a coordenada X para o sistema entre os valores "<<Xminu<<" e "<<Xmaxu<<"."<<endl;
        cin>>Xu1;

        cout<<"\nDigite um valor para a coordenada Y para o sistema entre os valores "<<Yminu<<" e "<<Ymaxu<<"."<<endl;
        cin>>Yu1;

        Xd1 = (640-0)*(Xu1-0)/(Xmaxu-Xminu);

            cout<<"\nCoordenada X no sistema SRD: "<<Xd1<<endl;

        Yd1 = ((0-480)*(Yu1-0)/(Ymaxu-Yminu))+480;

            cout<<"\nCoordenada Y no sistema SRD: "<<Yd1<<endl;

    }


    if(SOrigem==2){
       
        cout<<"\n\n| Resolução da sua escolha para converter no sistema SRU |"<<endl;       
        cout<<"\n\nLimites Sistema X e Y"<<endl;
        
        cout<<"\n| Digite o valor mínimo de X e Y para o Sistema |"<<endl;
        cout<<"\nInforme a coordenada X do sistema: "<<endl;
        cin>>Xmind;
        cout<<"\nInforme a coordenada Y do sistema: "<<endl;
        cin>>Ymind;

        cout<<"\nLimites Sistema X e Y"<<endl;

        cout<<"\n| Digite o valor máximo de X e Y para o Sistema |"<<endl;
        cout<<"\nInforme a coordenada X do sistema: "<<endl;
        cin>>Xmaxd;
        cout<<"\nInforme a coordenada Y do sistema: "<<endl;       
        cin>>Ymaxd;


        cout<<"\nDigite um valor para a coordenada X para o sistema entre os valores "<<Xmind<<" e "<<Xmaxd<<"."<<endl;
        cin>>Xd1;

        cout<<"\nDigite um valor para a coordenada Y para o sistema entre os valores "<<Ymind<<" e "<<Ymaxd<<"."<<endl;
        cin>>Yd1;

        Xu1 = (1000-0)*(Xd1-0)/(Xmaxd-Xmind);

            cout<<"\nCoordenada X no sistema SRU: "<<Xu1<<endl;

        Yu1 = (1500-0)*(Yd1-Ymaxd)/(Ymind-Ymaxd);

            cout<<"\nCoordenada Y no sistema SRU: "<<Yu1<<endl;
        
    }    

    //Sistema X e Y –> SRN –> SRU

    if(SOrigem==1){
        cout<<"\nCoordenadas normalizadas (valores entre 0 e 1) Ex.: 0 ≤ X ≥ 1 e 0 ≤ Y ≥ 1"<<endl;

        ValorX_Normalizado = (Xu1-0)/(Xmaxu-Xminu);   
            
            cout<<"\nValor de X normalizado: "<<ValorX_Normalizado<<endl;

        ValorY_Normalizado = (Yu1-0)/(Ymaxu-Yminu);

            cout<<"\nValor de Y normalizado: "<<ValorY_Normalizado<<endl;

        Xu1 = ValorX_Normalizado*(Xmaxu-Xminu);

            cout<<"\nValor de X no SRU: "<<Xu1<<endl;

        Yu1 = ValorY_Normalizado*(Ymaxu-Yminu);

            cout<<"\nValor de Y no SRU: "<<Yu1<<endl;

    }

    //Sistema X e Y –> SRN –> SRD

    if(SOrigem==2){
        cout<<"\nCoordenadas normalizadas (valores entre 0 e 1) Ex.: 0 ≤ X ≥ 1 e 0 ≤ Y ≥ 1"<<endl;

        ValorX_Normalizado = (Xd1-0)/(Xmaxd-Xmind);   
            
            cout<<"\nValor de X normalizado: "<<ValorX_Normalizado<<endl;

        ValorY_Normalizado = (Yd1-0)/(Ymaxd-Ymind);

            cout<<"\nValor de Y normalizado: "<<ValorY_Normalizado<<endl;

        Xd1 = ValorX_Normalizado*(Xmaxd-Xmind);

            cout<<"\nValor de X no SRD: "<<Xd<<endl;

        Yd1 = ValorY_Normalizado*(Ymaxd-Ymind);

            cout<<"\nValor de Y no SRD: "<<Yd<<endl;

    }

    //SRN -> SRU

    if(SDestino==1){
        cout<<"\nCoordenadas normalizadas (valores entre 0 e 1) Ex.: 0 ≤ X ≥ 1 e 0 ≤ Y ≥ 1"<<endl;

        Xu1 = ValorX_Normalizado*(Xmaxu-Xminu);

            cout<<"\nValor de X no SRU: "<<Xu1<<endl;

        Yu1 = ValorY_Normalizado*(Ymaxu-Yminu);

            cout<<"\nValor de Y no SRU: "<<Yu1<<endl;

    }

    //SRN -> SRD

    if(SDestino==2){
        cout<<"\nCoordenadas normalizadas (valores entre 0 e 1) Ex.: 0 ≤ X ≥ 1 e 0 ≤ Y ≥ 1"<<endl;

        Xd1 = ValorX_Normalizado*(Xmaxd-Xmind);

            cout<<"\nValor de X no SRD: "<<Xd1<<endl;

        Yd1 = ValorY_Normalizado*(Ymaxd-Ymind);

            cout<<"\nValor de Y no SRD: "<<Yd1<<endl;

    }

    cout << "\n\nPressione a tecla ESC para finalizar ou qualquer tecla para continuar..." << endl;
    option = getch();

    if(option == 27){
      return 0;   
    }
  }

}