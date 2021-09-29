char * reverseWords(char * s){
    int start=0;
    int i;
    int size;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i]==' ')
        {
            size=i-start-1;
            for(int i=0;i<=size/2;i++)
            {
                char temp=s[i+start];
                s[i+start]=s[start+size-i];
                s[start+size-i]=temp;
            }
            start=i+1;
        }
        
    }
    size=i-start-1;
    for(int i=0;i<=size/2;i++)
    {
        char temp=s[i+start];
        s[i+start]=s[start+size-i];
        s[start+size-i]=temp;
    }
    return s;
}