#include <iostream>
#include <cmath>

using namespace std;

class Matrix
{
    // a matrix is 2 dimensional array.
    int r; // rows
    int c; // columns
    int *mat;

public:
    Matrix(int rows, int columns)
    {
        r = rows;
        c = columns;

        mat = new int[r * c];
    }

    void insert(int val, int i, int j)
    {

        *(mat + i * c + j) = val;
    }

    void traverse()
    {

        int i, j;

        cout << "\n";

        for (int i = 0; i < r; i++)
        {

            for (int j = 0; j < c; j++)
            {
                int elem = *(mat + i * c + j);
                cout << elem << " ";
            }
            cout << "\n"; // newline after each row.
        }
    }
    void transpose()
    {
        int new_rows = c;
        int new_cols = r;
        int *new_mat = new int[new_rows * new_cols];

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                *(new_mat + j * new_cols + i) = *(mat + i * c + j);
            }
        }

        delete[] mat;

        // update
        r = new_rows;
        c = new_cols;
        mat = new_mat;
    }

    static void matmul(Matrix *m1, Matrix *m2){
        if(m1->c != m2->r){
            cout<<"multiplication not possible"<<endl;
            return;

        }
        else{
            int new_r = m1->r;
            int new_c = m2->c;

            int m1_c = m1->c;
            int m2_r = m2->r;

            int *m1_mat = m1->mat;
            int *m2_mat = m2->mat;

            int prod[new_r][new_c];

            int i,j;
            for(i = 0;i<new_r;i++){

                for(j = 0;j<new_c;j++){

                    // now here, we can access ith of m1 and jth col of m2, now we iterate again

                    prod[i][j] = 0;

                    for(int k = 0;k<new_r;k++){

                        int a = *(m1_mat + i*m1_c + k);
                        int b = *(m2_mat + k*new_c + j);
                        prod[i][j] += a*b;

                    }

                    cout<<prod[i][j]<<" ";

                }
                cout<<"\n";

            }

            return;

        }
    }
    static void mat_sum(Matrix *m1, Matrix *m2){

        int *m1_mat = m1->mat;
        int *m2_mat = m2->mat;

        int new_r = m1->r;
        int new_c = m1->c;
        
        int res[new_r][new_c];

        for(int i =0;i<new_r;i++){

            for(int j = 0;j<new_c;j++){
                
                res[i][j] = *(m1_mat + i*new_c + j) + *(m2_mat + i*new_c + j);
                cout<<res[i][j]<<" ";

            }
            cout<<"\n";
            
        }

    }
};

int main()
{

    Matrix *mat = new Matrix(3, 3);

    int i, j;
    int c{};

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < 3; j++)
        {
            mat->insert(c++, i, j);
        }
    }

    cout<<"Matrix M1"<<endl;
    mat->traverse();
    mat->transpose();

    cout<<"Transpose of M1:"<<endl;
    mat->traverse();


    cout<<"Matrix M2:"<<endl;
    Matrix *mat2 = new Matrix(3,3);
    
    for(int i= 0;i<3;i++){

        for(j=0;j<3;j++){

            mat2->insert(c++,i,j);

        }

    }

    mat2->traverse();

    cout<<"\n Product of M1 (transpose) & M2:"<<endl;

    Matrix::matmul(mat,mat2);

    cout<<"\n Sum of the matrices:"<<endl;
    
    Matrix::mat_sum(mat,mat2);

    delete[] mat;
    delete[] mat2;

    return 0;
