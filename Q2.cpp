string printLargest()(int a[], int n)
{
    for (int i = n; i >= 0; i--) 
        for (int j = n; j > n - i; j--) 
            if (a[j] > a[j - 1]) 
                swap(a[j], a[j-1]);



	for (int k = 1; k <= n; k++)
	{
	
		int largest =a[0] ;
		if(largest.tostring().append(a[k].tostring()) > a[k].tostring.append(a[k]. tostring()) 
		{
			largest = largest.tostring().append(a[k].tostring());
		
		}
		
		
		else
			largest = a[k].tostring.append(a[k]. tostring());
	}
	return  largest.tostring();
}
