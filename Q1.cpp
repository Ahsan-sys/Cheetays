#include <iostream>
#include <string>
using namespace std;
  
#define MAX 26

string chooseandswap(string A)
{
	int n = A.length();
    int i, j;
    int chk[MAX];
    
    for (i = 0; i < MAX; i++)
    {
    	chk[i] = -1;

	}

    for (i = 0; i < n; i++) 
	{  
        if (chk[A[i] - 'a'] == -1)
        {
        	
        	chk[A[i] - 'a'] = i;	
        	
		}
	}
  
    for (i = 0; i < n; i++) 
	{
  
        bool flag = false;
  
        for (j = 0; j < A[i] - 'a'; j++) 
		{
            if (chk[j] > chk[A[i] - 'a'])
			{
                flag = true;
                
                break;
            }
        }
  
        if (flag)
            break;
    }
  
    if (i < n) 
	{
  
        char ch1 = A[i];
        char ch2 = char(j + 'a');
        for (i = 0; i < n; i++) 
		{
            if (A[i] == ch1)
                A[i] = ch2;
  
            else if (A[i] == ch2)
                A[i] = ch1;
        }
    }
  
    return A;
}

