#include <iostream>

using namespace std;

void soodi(char*a,int size);
int len(char*a);

int main()
{
    char *a=new char[1024];
    
    cin.getline(a,1024);
    
    soodi(a,len(a));
    
    cout<<a;
    
	return 0;
}

void soodi(char*a,int size)
{
	int n;
	for(int i=1;i<size;i++)        
    {
        int j;
        char key=a[i];
        
        for(j=i-1;j>=0;j--)
        {
            if(a[j] > key)
                a[j+1]=a[j];
            else
                break;
        }
        a[j+1]=key;
    }
}


int len(char*a)
{
	int j=0;
	while(*a!='\0')
	{a++; j++;}
	return j;
}
