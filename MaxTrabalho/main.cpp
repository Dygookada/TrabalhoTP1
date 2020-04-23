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
                cout<<"Digite uma palavra ";
                for(int i=0; getchar()!='\n' && i<100; i++)
                {
                    scanf("%c",&carac[i]);
                }
                Ssize ( carac);
                break;
            case 13:
                cout<<"Digite uma palavra ";
                cin>>t;
                cout<<"Digite uma palavra ";
                cin>>t2;
                {
                int lex=Lexico(&t,&t2);
                if(lex==0)
                    cout<<"Sim,eh lexico\n;";
                else if (lex==1)
                    cout<<"Nao,eh lexico\n;";
               else
                    cout<<"Deu erro\n";
                }
                break;
            case 14:
                {
                char textnum[18];
                int ii=0;
                cout<<"Digite um numero ";
                while(getchar()!='\n')
                {
                    scanf("%c",&textnum[ii++]);
                }
                cout<<StringToNumber(textnum)<<endl;
                }
                break;
            case 15:
                {
                    cout<<"Digite uma palavra ";
                    cin>>t;
                    int td;
                    char* txt=cpString(t,t.size(),td);
                    for( int ii=0; ii<td; ii++)
                    {
                        cout<<txt[ii];
                    }
                }
                break;
            case 16:
                {
                    int qnts,ii=0;
                    char pa[100],b;
                    cout<<"Digite uma frase ";
                    while(getchar()!='\n')
                    {
                        scanf("%c",&pa[ii++]);
                    }
                    cout<<"Digite um char de quebra ";
                    cin>>b;
                    char** txt=breakString( pa, b, 100, qnts);
                    for( int iii=0; iii<qnts; iii++)
                    {
                        for( int jj=0; txt[jj]!=0 && jj<100; jj++)
                        {
                            cout<<txt[iii][jj];
                        }
                        cout<<endl;
                    }
                }
                break;
            case 17:
                {
                    int ta1,ta2,ii=0;
                    cout<<"Digite o tamanho da string: ";
                    cin>>ta1;
                    cout<<"Digite a string: ";
                    while(getchar()!='\n')
                    {
                        scanf("%c",&v1[ii++]);
                    }
                    cout<<"Digite o tamanho da string: ";
                    cin>>ta2;
                    cout<<"Digite a string: ";
                    while(getchar()!='\n')
                    {
                        scanf("%c",&v1[ii++]);
                    }
                    cin>>ta1>>ta2;
                    SearchString( v1, v2, ta1, ta2);
                }
                break;
            case 18:
                {
                    int ii=0;
                    cout<<"Digite um numero: ";
                    while(getchar()!='\n')
                    {
                        scanf("%c",&v1[ii++]);
                    }
                    cout<<"Digite um numero: ";
                    ii=0;
                    while(getchar()!='\n')
                    {
                        scanf("%c",&v1[ii++]);
                    }
                    cout<<SumLongNumber( v1, v2)<<endl;
                }
                break;
            case 19:
                {
                    int m,conj[100];
                    cout<<"Digite o numero de elementos do conjunto ";
                    cin>>m;
                    for( int ii=0; ii<m; ii++)
                    {
                        cin>>conj[ii];
                    }
                    cout<<"O maior elemento do conjunto eh "<<Maior( conj, m)<<endl;
                    cout<<"O menor elemento do conjunto eh "<<Menor( conj, m)<<endl;
                }
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
