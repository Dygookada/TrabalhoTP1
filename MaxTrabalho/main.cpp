#include "library.h"
using namespace std;

int main()
{
    Menu2();
    int n;
    string print_funcoes[]={ "(01) Desenha retangulo","(02) Volume esfera","(03) Fatorial","(04) Fibonacci",
                       "(05) Numero Regular","(06) Combinacoes","(07) Palindromo","(08) Converte minusculas",
                       "(09) Converte maiusculas (19)","(10) Centralizar texto","(11) Ordenar tres numeros",
                       "(12) Tamanho string","(13) Compara string","(14) Converte string para int",
                       "(15) Remove espaços em branco inicio e fim","(16) Quebrar string","(17) Buscar na string",
                       "(18) Soma numeros gigantes","(19) Maior e menor do vetor","(20) Soma matriz"};
    string t,t2;
    char v1[100],v2[100];
    while(cin>>n)
    {
        limpa();
        cout<<print_funcoes[n-1]<<endl;
        switch (n) {
            case 1:
                int l,c;
                char con,preen;
                cout<<"Digite a linha e coluna\n";
                cin>>l>>c;
                cout<<"Digite o caracter de Contorno:";
                cin>>con;
                cout<<"Digite o caracter de Preenchimento:";
                cin>>preen;
                desenha_retangulo( l, c, con, preen);
                break;
            case 2:
                int r;
                cout<<"Digite o Raio: ";
                cin>>r;
                cout<<"O volume eh: "<<volume(r);
                break;
            case 3:
                int num;
                cout<<"Digite o fatorial: ";
                cin>>num;
                fatorial(num);
                break;
            case 4:
                int num1;
                cout<<"Digite o Fibonacci: ";
                cin>>num1;
                Fibonacci ( num1);
                break;
            case 5:
                break;
            case 6:
                int n,p;
                cout<<"A combinacao de ";
                cin>>n;
                cout<<" a ";
                cin>>p;
                printf("C(%d,%d)",n,p);
                combinacao(n,p);
                break;
            case 7:
                cout<<"Digite uma palavra ";
                cin>>t;
                Palindromo(t);
                break;
            case 8:
                cout<<"Digite uma palavra ";
                cin>>t;
                TLC( t);
                break;
            case 9:
                cout<<"Digite uma palavra ";
                cin>>t;
                TUC(t);
                break;
            case 10:
                cout<<"Digite uma palavra ";
                cin>>t;
                int num2;
                char c1;
                cout<<"Digite um numero ";
                cin>>num2;
                cout<<"Digite um caracter ";
                cin>>c1;
                caixinha( t, num2, c1);
                break;
            case 11:
                int e,f,g;
                cout<<"Digite 3 numeros para ordena-los\n";
                cin>>e>>f>>g;
                Ord3 ( &e, &f, &g);
                break;
            case 12:
                char carac[100];
                Ssize ( carac);
                break;
            case 13:
                Lexico(&t,&t2);
                break;
            case 14:
                char textnum[18];
                StringToNumber(textnum);
                break;
            case 15:

                break;
            case 16:

                break;
            case 17:
                int ta1,ta2;
                cin>>ta1>>ta2;
                SearchString( v1, v2, ta1, ta2);
                break;
            case 18:
                SumLongNumber( v1, v2);
                break;
            case 19:
                int m,conj[100];
                cin>>m;
                Maior( conj, m);
                Menor( conj, m);
                break;
            case 20:
                int li,co;
                cout<<"Digite o numero de linhas: ";
                cin>>li;
                cout<<"Digite o numero de colunas: ";
                cin>>co;
                if(true)
                {
                    int** vetora=MatrizMat( li, co);
                    int** vetorb=MatrizMat( li, co);
                    LeMat( vetora, li, co);
                    LeMat( vetorb, li, co);
                    ImprimeMat( vetora, li, co);
                    ImprimeMat( vetorb, li, co);
                    int** vetorc=SomaMat(vetora,vetorb,li,co);
                    ImprimeMat( vetorc, li, co);
                    DeleteMat( vetora, li);
                    DeleteMat( vetorb, li);
                    DeleteMat( vetorc, li);
                }
                break;
            default:
                break;
        }
        reseta();
        Menu2();
    }
}
