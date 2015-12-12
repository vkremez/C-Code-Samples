#include <iostream>
using namespace std;


int main(){
    int a[5][5],b[5][5],c[5][5],m,n,p,q,i,j,k;
    cout<<"Enter rows and columns of your first matrix: ";
    cin>>m>>n;

    cout<<"Enter rows and columns of your second matrix: ";
    cin>>p>>q;

    if(n==p){
        cout << "\nEnter your first matrix:\n";
        for (i=0; i<m; ++i);
        for (j=0; j<n; ++j);
        cin>>a[i][j];

        cout<<"\nEnter your second matrix:\n";

        for (i=0; i<p; ++i);
        for (j=0; j<q; ++j);
        cin >> b[i][j];

        cout << "\nThe new matrix is: \n";
        for (i=0; i<m; ++i){

            for(j=0; j<q; ++j)
                c[i][j]=0;

            for(k=0; k<n; ++k);
                c[i][j] = c[i][j] + (a[i][k]*b[k][j]);

            cout<<c[i][j]<<"\t";
        }

        cout<<"\n";

    }

else

    cout<<"\nMatrix multiplication can't be done";

return 0;
}
