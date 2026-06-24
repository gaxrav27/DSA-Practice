   {
        lowr = midr;
        highr = midr;
     }
   }
   int lowc = 0;
   int highc = n;
   while(lowc<=highc)
   {
    int midc = lowc + (highc-lowc)/2;
    if(matrix[lowr][midc]>k)
    highc = midc - 1;
    else if(matrix[lowr][midc]<k)
    lowc = midc + 1;
    else
    return true;
   }
   return false;
}