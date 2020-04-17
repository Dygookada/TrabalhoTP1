#include "library.h"
using namespace std;

void Menu1()
{
    cout<<"[01] Lista 1 A Questao 5     [11] Lista 2A Questao 1"<<endl;
    cout<<"[02] Lista 1 B Questao 2     [12] Lista 2A Questao 3"<<endl;
    cout<<"[03] Lista 1 B Questao 6     [13] Lista 2A Questao 4"<<endl;
    cout<<"[04] Lista 1 B Questao 8     [14] Lista 2B Questao 1"<<endl;
    cout<<"[05] Lista 1 B Questao 9     [15] Lista 2B Questao 3"<<endl;
    cout<<"[06] Lista 1 B Questao 10    [16] Lista 2B Questao 4"<<endl;
    cout<<"[07] Lista 1 C Questao 3     [17] Lista 2B Questao 5"<<endl;
    cout<<"[08] Lista 1 C Questao 5     [18] Lista 2B Questao 6"<<endl;
    cout<<"[09] Lista 1 C Questao 6     [19] Lista 2C Questao 5"<<endl;
    cout<<"[10] Lista 1 C Questao 7     [20] Lista 2D Questao 6"<<endl;
    cout<<"Escolha a funcao para testar : ";
}
void Menu2()
{
    cout<<"(01) Desenha retangulo   (11) Ordenar tres numeros"<<endl;
    cout<<"(02) Volume esfera       (12) Tamanho string"<<endl;
    cout<<"(03) Fatorial            (13) Compara string"<<endl;
    cout<<"(04) Fibonacci           (14) Converte string para int"<<endl;
    cout<<"(05) Numero Regular      (15) Remove espaços em branco inicio e fim"<<endl;
    cout<<"(06) Combinacoes         (16) Quebrar string"<<endl;
    cout<<"(07) Palindromo          (17) Buscar na string"<<endl;
    cout<<"(08) Converte minusculas (18) Soma numeros gigantes"<<endl;
    cout<<"(09) Converte maiusculas (19) Maior e menor do vetor"<<endl;
    cout<<"(10) Centralizar texto   (20) Soma matriz"<<endl;
    cout<<"Escolha a funcao para testar : ";
}

void reseta()
{
    getchar();
    if(getchar()!='\0')
        #ifdef __linux__
            system("clear");
        #else
            system("cls");
        #endif
}
void limpa()
{
    if(getchar()!='\0')
        #ifdef __linux__
            system("clear");
        #else
            system("cls");
        #endif
}
//Lista 1-A
//questao5
void linha(int c, char letra, bool com_endl)
{
    for( int i=0; i<c; i++)
    {
        cout<<letra;
    }
    if(com_endl)
        cout<<endl;
}

void desenha_retangulo( int l, int c, char con, char preen)
{
    linha(c,con,true);
    for( int i=0; i<l-2; i++)
    {
        cout<<con;
        linha(c-2,preen,false);
        cout<<con<<endl;
    }
    linha(c,con,true);
}

//Lista 1-B
//questao 2
double volume( int r)
{
    return 4*pi*r*r*r/3;
}
//questao 6
int Multiplica(int x, int num[], int tam)
{
    int carry = 0;
    for (int i=0; i<tam; i++)
    {
        int res = num[i] * x + carry;
        num[i] = res % 10;
        carry = res/10;
    }
    while (carry)
    {
        num[tam] = carry%10;
        carry = carry/10;
        tam++;
    }
    return tam;
}
int fatorial(int n)
{
    int num[MAX];
    num[0] = 1;
    int tam = 1;
    for (int x=2; x<=n; x++)
        tam = Multiplica(x, num, tam);

    cout << "Fatorial do numero dado eh: \n";
    for (int i=tam-1; i>=0; i--)
        cout << num[i];
    cout<<endl;
    return tam;
}
//questao 8
int Fibonacci ( int x)
{
    if(x==0)
        return 0;
    if(x==1)
        return 1;
    return Fibonacci(x-1)+Fibonacci(x-2);
}
//questao 9

//questao 10
int combinacao( int n, int p)
{
    int x=1;
    for( int i=n-p+1; i<=n; i++)
        x*=i;
    for( int i=2; i<=p; i++)
        x/=i;
    return x;
}

//Lista 1-C
//questao 3
bool Palindromo( string t)
{
    int ta=t.size();
    for( int i=0; 2*i<ta; i++)
    {
        if(t[i]!=t[ta-1-i])
            return false;
    }
    return true;
}
//questao 5
string TLC( string  t)
{
    int ta=t.size();
    for( int i=0; i<ta; i++)
    {
        if(t[i]>='A' && t[i]<='Z')
            t[i]+=32;
    }
    return t;
}
//questao 6
string TUC( string  t)
{
    int ta=t.size();
    for( int i=0; i<ta; i++)
    {
        if(t[i]>='a' && t[i]<='z')
            t[i]-=32;
    }
    return t;
}
//questao 7
void caixinha( string t, int n, char c)
{
    int ta=t.size(),m=(n-ta)/2;
    for( int i=0; i<n; i++)
        printf("%c",c);
    printf("\n%c",c);
    for( int i=1; i<m; i++)
    {
        printf(" ");
    }
    for(int i=0; i < ta; i++)
    {
       printf("%c",t[i]);
    }
    puts("");
    for( int i=m+ta; i<n-1; i++)
        printf(" ");
    printf("%c\n",c);
    for( int i=0; i<n; i++)
        printf("%c",c);
    printf("\n");
}

//Lista 2-A
//questao 1
void Ord3( int* a, int* b, int* c)
{
    int me,ma;
    ma=max(*a,max(*b,*c));
    me=min(*a,min(*b,*c));
    *b=*a+*b+*c-ma-me;
    *a=me;
    *c=ma;
}
//questao 3
int Ssize ( char* t)
{
    int i;
    for( i=0; t[i]!=0; i++);
    return i;
}
//questao 4
int Lexico ( string* t1, string* t2)
{
    int ta1=(*t1).size(),ta2=(*t2).size(),i=0;
    while(i<ta1 && i<ta2)
    {
        if(t1[0][i]!=t2[0][i])
            return 1;
        i++;
    }
    if(ta1==ta2)
        return 0;
    return -1;
}

//Lista 2-B
//questao 1
long long StringToNumber(char* num)
{
    int j;
    for( int j=0; num[j]!=0; j++);
    int number=0,dez=1;
    for( int i=j-1; i>=0; i--)
    {
        number+=dez*(num[i]-'0');
        dez*=10;
    }
    return number;
}
//questao 3
char* cpString(string &p, int ta,int &tam)
{
    char* copy = new char[ta];
    int i;
    for( i=0; i<ta && p[i]!='\0'; i++)
    {
        copy[i]=p[i];
    }
    tam=i;
    return copy;
}
//questao 4
char* cpString( char* p, int ini, int fim)
{
    int i, dif=fim-ini;
    char* copy = new char[dif+1];
    for( i=0; i<dif && p[ini+i]!='\0'; i++)
    {
        copy[i]=p[ini+i];
    }
    copy[dif]='\0';
    return copy;
}

char** breakString( char* p, char b, int ta, int &v)
{
    int qnts=1,i;
    for( i=0; i<ta && p[i]!='\0'; i++)
        if(p[i]==b)
            qnts++;
    int ini=0,fim=i;
    char** ponteiro = new char*[qnts];
    v=qnts,qnts=0;
    for( i=0; i<ta && p[i]!='\0'; i++)
    {
        if(p[i]==b)
        {
            ponteiro[qnts]=cpString(p,ini,i);
            ini=i+1,qnts++;
        }
    }
    ponteiro[qnts]=cpString(p,ini,fim);

    return ponteiro;
}
//questao 5
int SearchString( char* v1, char* v2, int ta1, int ta2)
{
    int t1,t2,i,ind;
    for( i=0; v1[i]!='\0' && i<ta1; i++);
    t1=i;
    for( i=0; v2[i]!='\0' && i<ta2; i++);
    t2=i;
    i=0;
    for( int j=0; j<t1; j++)
    {
        if(v1[j]==v2[i])
        {
            if(i==0)
                ind=j;
            if(i==t2)
                return ind;
            i++;
        }else
            i=0;
    }
    return -1;
}
//questao 6
char* SumLongNumber( char* n1, char* n2)
{
    int ta1,ta2,j;
    for( j=0; n1[j]!=0; j++);
    ta1=j;
    for( j=0; n2[j]!=0; j++);
    ta2=j;
    int m=max(ta1,ta2)+1,dif=min(ta1,ta2),carry=0,aux;
    char* res=new char[m+1];
    for( int i=0; i<dif; i++)
    {//faco ate o menor
        aux=(n1[ta1-1-i]-'0')+(n2[ta2-1-i]-'0')+carry;
        res[m-1-i]=aux%10+'0';
        carry=aux/10;
    }
    for( int i=dif; i<m-1; i++)
    {// se entrar garanto q nao sao iguais
        if(ta1>ta2)
            aux=(n1[ta1-1-i]-'0')+carry;
        else
            aux=(n2[ta2-1-i]-'0')+carry;
        res[m-1-i]=aux%10+'0';
        carry=aux/10;
    }
    res[0]=carry+'0';
    res[m+1]=0;
    return res;
}

//Lista 2-C
//questao 5
void MaMeInd( int* vet, int n, int &ma, int &me)
{
    int maior=-inf,menor=inf;
    for( int i=0; i<n; i++)
    {
        if(vet[i]>maior)
        {
            maior=vet[i];
            ma=i;
        }
        if(vet[i]<menor)
        {
            menor=vet[i];
            me=i;
        }
    }
}
int Maior( int* vet, int n)
{
    int m;
    int ma=-9999999;
    for( int i=0; i<n; i++)
        if(vet[i]>ma)
        {
            ma=vet[i];
            m=i;
        }
    return m;
}
int Menor( int* vet, int n)
{
    int m;
    int me=9999999;
    for( int i=0; i<n; i++)
        if(vet[i]<me)
            me=vet[i],m=i;
    return m;
}

//Lista 2-D
//questao 6
int** MatrizMat( int li, int co)
{
    int** mat=new int*[li];
    for( int i=0; i<li; i++)
        mat[i]=new int[co];
    return mat;
}

void LeMat( int** v, int li, int co)
{
    for( int i=0; i<li; i++)
        for( int j=0; j<co; j++)
            cin>>v[i][j];
}

void ImprimeMat( int** v, int li, int co)
{
    for( int i=0; i<li; i++)
    {
        for( int j=0; j<co; j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }
}

void DeleteMat( int** v, int li)
{
    for( int i=0; i<li; i++)
        delete[] v[i];
}

int** SomaMat( int** a, int** b, int m, int n)
{
    int** res=MatrizMat(m,n);
    for( int i=0; i<m; i++)
    {
        for( int j=0; j<n; j++)
        {
            res[i][j]=a[i][j]+b[i][j];
        }
    }
    return res;
}

