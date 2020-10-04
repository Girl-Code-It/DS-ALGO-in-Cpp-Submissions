
int waysUpStair(int n)
{	static int count=0;
    
   
 	if(n==0)
    {
        count++;
      
        return count;
    }else if(n<0)
        return count;
	waysUpStair(n-3);
	 waysUpStair(n-2);
 	 waysUpStair(n-1);
}
