string expand(string str, int low, int high)
{
    int len = str.length();

    while (low >= 0 && high < len && (str[low] == str[high])) {
        low--, high++;
    }
    return str.substr(low + 1, high - low - 1);
}

string longestPalin(string A)
{
	int len=A.length();
    string max_str = "", curr_str;
 
    int max_length = 0, curr_length;

    for (int i = 0; i < len; i++)
    {
        curr_str = expand(A, i, i);
        curr_length = curr_str.length();

        if (curr_length > max_length)
        {
            max_length = curr_length;
            max_str = curr_str;
        }

        curr_str = expand(A, i, i + 1);
        curr_length = curr_str.length();

        if (curr_length > max_length)
        {
            max_length = curr_length;
            max_str = curr_str;
        }
    }
 
    return max_str;
}
