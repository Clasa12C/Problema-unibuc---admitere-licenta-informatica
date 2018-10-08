#include <iostream>
#include<string.h>
#include<fstream>
#include <algorithm>
using namespace std;

char sir[10001],sir1[10001];
char cuv[100][100]= {'\0'};
int a[100][100]= {0};
int lin=1;
void pct_a(int L)
{
    char *p;
    p=strtok(sir," ");
    int linie=0;
    while (p)
    {
        int k=strlen(p);
        if (linie+k<L)
        {
            cout<<p;
            cout<<" ";
            linie=linie+k+1;
        }
        else if (linie+k==L)
        {
            cout<<p<<endl;
            linie=linie+k;
        }
        else
        {
            cout<<endl;
            cout<<p<<" ";
            linie=k+1;
        }
        p=strtok(NULL," ");
    }
}


void pct_a_v1(int L)
{
    char *p;
    p=strtok(sir," ");
    int linie=0;
    while (p)
    {
        int k=strlen(p);
        if (linie+k<L)
        {

            //cout<<p;
            //cout<<" ";
            strcat(cuv[lin],p);
            strcat(cuv[lin]," ");
            linie=linie+k+1;
        }
        else if (linie+k==L)
        {
            //cout<<p<<endl;
            strcat(cuv[lin],p);
            cuv[lin][strlen(cuv[lin])]=NULL;
            linie=linie+k;
        }
        else
        {
            //cout<<endl;
            lin++;
            //cout<<p<<" ";
            strcat(cuv[lin],p);
            strcat(cuv[lin]," ");
            cuv[lin][strlen(cuv[lin])]=NULL;
            linie=k+1;
        }
        p=strtok(NULL," ");
    }
// afisare matrice mai bine zis vectorul de cuvinte

    for (int i=1; i<=lin; i++)
        cout<<cuv[i]<<endl;
}


void pct_b(int L)
{
    char *p;
    int N;
    cin>>N;
    p=strtok(sir," ");
    int linie=0;
    lin=1;
    while (p && lin<N)
    {
        int k=strlen(p);
        if (linie+k<L)
        {

            cout<<p;
            cout<<" ";

            linie=linie+k+1;
            a[lin][linie]=1;
        }
        else if (linie+k==L)
        {
            cout<<p<<endl;

            linie=linie+k;
            a[lin][linie]=1;
        }
        else
        {
            cout<<endl;
            lin++;
            cout<<p<<" ";

            linie=k+1;
            a[lin][linie]=1;

        }
        p=strtok(NULL," ");
    }
    cout<<endl;
// afisare matrice unde am spatiu am pus 1 altfel 0
    for (int i=1; i<=lin; i++)
    {
        for (int j=1; j<=L; j++)
            cout<<a[i][j];
        cout<<endl;
    }
    int ok=0;
    for (int i=1; i<lin; i++)
    {
        for (int j=1; j<=L; j++)
            if (a[i][j]==1 && a[i+1][j]==1 || a[i][j]==1 && a[i+1][j+1]==1 &&j+1<=L  || a[i][j]==1 && a[i+1][j+1]==1 &&j-1>=1)
                ok=1;

    }
    if (ok==1)
        cout<<"DA";
    else
        cout<<"NU";
}


void pct_c(int L)
{
    char *p;
    int N;
    cin>>N;
    p=strtok(sir," ");
    int linie=0;
    lin=1;
    while (p && lin<N)
    {
        int k=strlen(p);
        if (linie+k<L)
        {

            cout<<p;
            cout<<" ";

            linie=linie+k+1;
            a[lin][linie]=1;
        }
        else if (linie+k==L)
        {
            cout<<p<<endl;

            linie=linie+k;
            a[lin][linie]=1;
        }
        else
        {
            cout<<endl;
            lin++;
            cout<<p<<" ";

            linie=k+1;
            a[lin][linie]=1;

        }
        p=strtok(NULL," ");
    }
    cout<<endl;

    /*
    // afisare matrice unde am spatiu am pus 1 altfel 0

        for (int i=1; i<=lin; i++)
        {
            for (int j=1; j<=L; j++)
                cout<<a[i][j];
            cout<<endl;
        }

        cout<<endl;

    */
    int lmaximrau=0,ok=0;
    for (int i=1; i<lin; i++)
    {
        for (int j=1; j<=L; j++)
            if (a[i][j]!=0)
            {
                if  (a[i+1][j]!=0)
                {
                    a[i+1][j]=max(a[i+1][j],a[i][j]+1);
                    if (a[i+1][j]>lmaximrau) lmaximrau=a[i+1][j];
                }
                if (a[i+1][j-1]!=0)
                {
                    a[i+1][j-1]=max(a[i+1][j-1],a[i][j]+1);
                    if (a[i+1][j-1]>lmaximrau) lmaximrau=a[i+1][j-1];
                }
                if (a[i+1][j+1]!=0)
                {
                    a[i+1][j+1]=max(a[i+1][j+1],a[i][j]+1);
                    if (a[i+1][j+1]>lmaximrau) lmaximrau=a[i+1][j+1];
                }

            }
    }
    cout<<lmaximrau<<endl;

    /*
    // afisare matricea raurilor

                 for (int i=1; i<=lin; i++)
    {
        for (int j=1; j<=L; j++)
            cout<<a[i][j];
        cout<<endl;
    }
    */

}

int main()
{
    ifstream fin("sir.in");
    fin.get(sir,10000);
    //cout<<sir;

    int L;
    cin>>L;
    // pct_a(L);
    //pct_b(L);
    pct_c(L);
    return 0;
}
