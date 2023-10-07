//assignment8
#include <iostream>
#include <vector>
using namespace std;
void printing(vector<vector<float> > &a, vector<float> &b, vector<vector<float> > &p, vector<vector<float> > &l,vector<float> &x)
{
    cout<<"After forward elemination with pivoting and back substituion"<<endl;
    cout << "U = " << endl;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[0].size(); j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "b = " << endl;
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    cout<<endl;

    cout << "P = " << endl;
    for (int i = 0; i < p.size(); i++)
    {
        for (int j = 0; j < p[0].size(); j++)
        {
            cout << p[i][j] << " ";
        }
        cout << endl;
    }

    cout << "L = " << endl;
    for (int i = 0; i < l.size(); i++)
    {
        for (int j = 0; j < l[0].size(); j++)
        {
            cout << l[i][j] << " ";
        }
        cout << endl;
    }

    cout<<"X = "<<endl;
    for(int i = 0 ; i < x.size() ; i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
}

void randmatrix(vector<vector<float> > &a, vector<float> &b, vector<vector<float> > &p, vector<vector<float> > &l, int n1, int n2)
{
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[0].size(); j++)
        {
            a[i][j] = rand() % n1;
        }
        b[i] = rand() % n2;
    }

    cout<<"random matrix A = "<<endl;
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[0].size(); j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "random vector b = " << endl;
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    cout<<endl;


    for (int i = 0; i < p.size(); i++)
    {
        for (int j = 0; j < p[0].size(); j++)
        {
            if (i == j)
            {
                p[i][j] = 1;
                l[i][j] = 1;
            }
            else
            {
                p[i][j] = 0;
                l[i][j] = 0;
            }
        }
    }
}

void forele (vector<vector<float> > &a, vector<float> &b, vector<vector<float> > &p, vector<vector<float> > &l ,int n){
    // gauss elimination with partial pivoting
    for (int i = 0; i < n - 1; i++)
    {
        int pivot = i;
        for (int j = i + 1; j < n; j++)
        {
            if (abs(a[j][i]) > abs(a[pivot][i]))
            {
                pivot = j;
            }
        }

        for (int k = 0; k < n; k++)
        {
            swap(a[i][k], a[pivot][k]);
            swap(p[i][k], p[pivot][k]);
        }
        swap(b[i] , b[pivot]);

        for (int k = 0; k < i; k++)
        {
            swap(l[i][k], l[pivot][k]);
        }

        // forward substition
        for (int j = i + 1; j < n; j++)
        {
            float factor = a[j][i] / a[i][i];
            l[j][i] = factor;
            for (int k = i; k < n; k++)
            {
                a[j][k] = a[j][k] - factor * a[i][k];
            }
            b[j] = b[j] - factor * b[i];
        }
    }
}

void backsubs(vector<vector<float> > &a, vector<float> &b ,vector<float> &x, int n){
    float sum;
    x[n-1] = b[n-1] / a[n-1][n-1];
    for (int i = n - 1; i >= 0; i--)
    {
        sum = b[i];
        for (int j = i + 1; j < n; j++)
        {
            sum = sum - a[i][j] * x[j];
        }
        x[i] = sum / a[i][i];
    }
}

void error(vector<vector<float> > &a, vector<float> &b ,vector<float> &x, int n){
    float e = 0;
    for(int i= 0 ; i < n ; i++){
        float sum = 0;
        for(int j = 0 ; j < n ; j++){
            sum+=a[i][j]*x[j];
        }
        e += abs(sum - b[i]);
    }

    cout<<"sum of errors = "<<e<<endl;
}

int main()
{
    int n;
    cout << "enter the size of matrix :";
    cin >> n;

    vector<vector<float> > a(n, vector<float>(n));
    vector<float> b(n);
    vector<vector<float> > p(n, vector<float>(n));
    vector<vector<float> > l(n, vector<float>(n));
    vector<float> x(n);


    int n1, n2;
    cout << "enter the range for the elements of matrix A :";
    cin >> n1;
    cout << "enter the range for the elements of vector b :";
    cin >> n2;

    randmatrix(a,b,p,l,n1,n2);
    forele(a,b,p,l,n);
    backsubs(a,b,x,n);
    printing(a,b,p,l,x);
    error(a,b,x,n);

    return 0;
}