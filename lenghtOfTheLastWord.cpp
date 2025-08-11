class Solution {
public:
    int lengthOfLastWord(string s) {
    int index=0;
    const int size=s.size();
    for (int i = 1; i <size; i++)
    {
        if(s[size-i]==' '){
            s.pop_back();
        }
        else{
           break;
        }
        
    }
    reverse(s.begin(),s.end());
     for (int i = 0; i <s.size(); i++)
    {
       
        if (s[i] == ' ')
        {
           index=i;
           
           break;
        }
    }
    string w=s.substr(0,index);
    if (index==0){
        return s.size();
    }
    return w.size();
    }
};