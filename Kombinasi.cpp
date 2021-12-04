#include<iostream>
using namespace std;

void printAllKLengthRec(char set[], string prefix, int n, int j)
{
    if (j == 0)
    {
        cout << (prefix) << " ";
        return;
    }
    for (int i = 0; i < n; i++)
    {
        string newPrefix;
        newPrefix = prefix + set[i];
        printAllKLengthRec(set, newPrefix, n, j - 1);
    }
}
void printAllKLength(char set[], int j,int n)
{
    printAllKLengthRec(set," ", n, j);
}

int main()
{
    char set1[] = {'a', 'b','c','d','e','f','g','h', 'i','j','k','l','m','n','o', 'p','q','r','s','t','u','v','w','x','y','z'};
    char x ;
    int N;
    
    awal:
    
    cout << "Jumlah Karakter:" << "";
    while(cin >> N){
        if(N != -1){
        printAllKLength(set1,N, N)    ;
        }
        else if(N>26){
            break;
        }
        else{
            break;
        }
        cout << " "<< endl;
        cout << "\nDo Again [Y/N] ? "; cin >> x ;
        if (x == 'y' || x== 'Y'){
            goto awal;
        } 
        else if(x == 'n' || x == 'N'){
                cout << "Exit ..." << endl;
            }
        cout << "\ndevelop @mahendrarendi";

    }
	return 0; 
}
