   for (int i = 0; i < b; i++)
   {
    int sum = 0;
      if (i%2==0)
      {
    for (int j = 0; j < a; j++)
    {
      cout<<arr[j][i]<<" ";      
    }
   }
   else{ 
    for (int j = a-1; j >= 0; j--)
    {
      cout<<arr[j][i]<<" ";
    }
   }
      }
    cout<<endl;
   