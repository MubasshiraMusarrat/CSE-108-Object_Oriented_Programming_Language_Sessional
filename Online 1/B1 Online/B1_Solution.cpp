#include<iostream>
#include<cstdlib>

using namespace std;

class Matrix
{
    int R,C;
    int **mat;
public:
    Matrix(int r, int c);
    ~Matrix();
    void print();
    void set(int r, int c, int value);
    int get(int r, int c);
    void add(int n);
    int add();
};

Matrix :: Matrix(int r, int c)
{
    R=r;
    C=c;
    mat=(int **)malloc(R * sizeof(int*));
    for (int i=0; i<r ; i++)
        *(mat+i)=(int*) malloc (C*sizeof(int));
}

Matrix :: ~Matrix()
{
    for(int i=0; i<R ; i++)
        free(*(mat+i));

    free(mat);
}

void Matrix :: print ()
{
    for(int i=0; i<R; i++)
    {
        for(int j=0; j<C; j++)
            cout<< *(*mat+ i*R+ j)<<" ";
        cout<< endl;
    }
}

void Matrix :: set(int r, int c, int value)
{
    *(*mat+ r*R+ c)= value;
}

int Matrix :: get(int r, int c)
{
    return *(*mat+ r*R +c);
}

void Matrix :: add(int n)
{
    for(int i=0; i<R; i++)
    {
        for (int j=0; j<C; j++)
            *(*mat+ i*R+ j)+= n;
    }
}

int Matrix :: add()
{
    int sum=0;
    for (int i=0; i<R; i++)
    {
        for(int j=0; j<C; j++)
            sum+= *(*mat+ i*R+ j);
    }
    return sum;
}

int main()
{
    cout<<"Hello World"<<'\n';
    Matrix m(3,3);
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            m.set(i,j,i+j);

    m.print();
    cout<<m.get(0,0)<<'\n';
    m.set(0,0,100);
    cout<<m.get(0,0)<<'\n';
    m.add(100);
    m.print();
    cout<<m.add()<<'\n';

    return 0;
}
