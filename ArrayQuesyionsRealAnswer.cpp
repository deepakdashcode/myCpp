/* 

*/

int findUnique(int arr[], int size)
{
    // Visit coding ninjas for problem statement

    int res = 0;
    for(int i = 0; i < size; i ++)
    {
        res ^= arr[i];
    }
    return res;
}

int duplicateInArray(int arr[], int size)
{
    // coding Ninjas problem - 258

    int ans = 0;

    for(int i = 0;i < size; i++)
    {
        ans = ans ^ arr[i];
    }

    for(int i = 0; i< size; i++)
    {
        ans = ans ^ i;
    }
    return ans;
}