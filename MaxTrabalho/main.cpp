#include "library.h"
using namespace std;

int main()
{
    Menu2();
    int n;
    string print_funcoes[]={ "(01) Desenha um retangulo","(02)Calcula o Volume esfera","(03) Fatorial de n","(04) Fibonacci",
                       "(05) Numero Regular","(06) Combinacoes","(07) Palindromo","(08) Converte minusculas",
                       "(09) Converte maiusculas (19)","(10) Centralizar texto","(11) Ordenar tres numeros",
                       "(12) Tamanho string","(13) Compara string","(14) Converte string para int",
                       "(15) Remove espacos em branco inicio e fim","(16) Quebrar string","(17) Buscar na string",
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
                cout<<Fibonacci ( num1);
                break;
            case 5:
                int reg;
                cout<<"Digite um numero: ";
                cin>>reg;
                if(regular(reg))
                    cout<<"Ele eh regular"<<endl;
                else
                    cout<<"Ele nao eh regular"<<endl;
                break;
            case 6:
                int n,p;
                cout<<"A combinacao de ";
                cin>>n;
                cin>>p;
                printf("C(%d,%d)=",n,p);
                cout<<combinacao(n,p);
                break;
            case 7:
                cout<<"Digite uma palavra: ";
                cin>>t;
                if(Palindromo(t))
                    cout<<"Eh palindromo\n";
                else
                    cout<<"Nao eh palindromo\n";
                break;
            case 8:
                cout<<"Digite um texto: ";
                getline(cin,t);
                cout<<TLC( t);
                break;
            case 9:
                cout<<"Digite um texto: ";
                getline(cin,t);
                cout<<TUC(t);
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
                printf("%d %d %d",e,f,g);
                break;
            case 12:
                {
                   char carac[100],aux;
                   int ii=0;
                   cout<<"Digite uma palavra ";
                   while(scanf("%c",&aux) && aux!='\n')
                   {
                       carac[ii++]=aux;
                   }
                   carac[ii]=0;
                   cout<<Ssize(carac);
                }
                break;
            case 13:
                cout<<"Digite uma palavra ";
                cin>>t;
                cout<<"Digite outra palavra ";
                cin>>t2;
                {
                int lex=Lexico(&t,&t2);
                if(lex==0)
                    cout<<"Sim,eh lexico\n;";
                else if (lex==1)
                    cout<<"Nao eh lexico\n;";
               else
                    cout<<"Deu erro\n";
                }
                break;
            case 14:
                {
                    char textnum[18],aux;
                    int ii=0;
                    cout<<"Digite um numero ";
                    while(scanf("%c",&aux) && aux!='\n' && ii<18)
                    {
                        textnum[ii++]=aux;
                    }
                    cout<<StringToNumber(textnum)<<endl;
                }
                break;
            case 15:
                {
                    int td,ii=0;
                    cout<<"Digite uma frase ";
                    char aux;
                    while(scanf("%c",&aux) && aux!='\n')
                    {
                        v1[ii++]=aux;
                    }
                    v1[ii]=0;
                    char* txt=space(v1,td);
                    for( int jj=0; jj<td; jj++)
                    {
                        cout<<txt[jj];
                    }
                    delete [] txt;
                }
                break;
            case 16:
                {
                    int qnts,ii=0;
                    char pa[100],b,aux;
                    cout<<"Digite uma frase ";
                    while(scanf("%c",&aux) && aux!='\n')
                    {
                        pa[ii++]=aux;
                    }
                    pa[ii]=0;
                    cout<<"Digite um char de quebra ";
                    cin>>b;
                    char** txt=breakString( pa, b, qnts);
                    for( int iii=0; iii<qnts; iii++)
                    {
                        for( int jj=0; txt[iii][jj]!=0; jj++)
                        {
                            cout<<txt[iii][jj];
                        }
                        cout<<endl;
                    }
                    delete txt;
                }
                break;
            case 17:
                {
                    int ii=0;
                    char aux;
                    cout<<"Digite a string: "<<endl;
                    while(scanf("%c",&aux) && aux!='\n')
                    {
                        v1[ii]=aux;
                        ii++;
                    }
                    v1[ii]=0;
                    ii=0;
                    cout<<"Digite o que procura: "<<endl;
                    while(scanf("%c",&aux) && aux!='\n')
                    {
                        v2[ii]=aux;
                        ii++;
                    }
                    v2[ii]=0;
                    cout<<SearchString( v1, v2)<<endl;
                }
                break;
            case 18:
                {
                    char aux;
                    int ii=0;
                    cout<<"Digite um numero: ";
                    while(scanf("%c",&aux) && aux!='\n')
                    {
                        v1[ii++]=aux;
                    }
                    cout<<"Digite um numero: ";
                    ii=0;
                    while(scanf("%c",&aux) && aux!='\n')
                    {
                        v2[ii++]=aux;
                    }
                    char* numero=SumLongNumber( v1, v2);
                    if(numero[0]!=0)
                        printf("1");
                    for( int i=1; numero[i]!=0; i++)
                    {
                        printf("%c",numero[i]);
                    }
                }
                break;
            case 19:
                {
                    int m,conj[100],ma,me;
                    cout<<"Digite o numero de elementos do conjunto ";
                    cin>>m;
                    cout<<"Digite os elementos do conjunto \n";
                    for( int ii=0; ii<m; ii++)
                    {
                        cin>>conj[ii];
                    }
                    ma=Maior( conj, m);
                    me=Menor( conj, m);
                    cout<<"O indice do maior eh "<<ma+1<<" ,e o valor eh "<<conj[ma]<<endl;
                    cout<<"O indice do menor eh "<<me+1<<" ,e o valor eh "<<conj[me]<<endl;
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
                    cout<<"Digite os elementos da matriz A\n";
                    LeMat( vetora, li, co);
                    cout<<"Digite os elementos da matriz B\n";
                    LeMat( vetorb, li, co);
                    int** vetorc=SomaMat(vetora,vetorb,li,co);
                    cout<<"Vetor C=A+B\n";
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
