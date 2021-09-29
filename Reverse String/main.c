

void reverseString(char* s, int sSize){
    if(sSize==0 || sSize==1)
    {
        return;
    }
    char temp;
for(int i=0;i<(sSize/2);i++)
{
    temp=s[i];
    s[i]=s[sSize-1-i];
    s[sSize-1-i]=temp;
}
    return;
}