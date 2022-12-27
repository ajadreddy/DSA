
string reverseWord(string s)
{
    char temp;
    int n=s.size()-1;
    for(int i=0;i<=(n/2);i++){
        temp=s[i];
        s[i]=s[n-i];
        s[n-i]=temp;
    }
  return s;
}
