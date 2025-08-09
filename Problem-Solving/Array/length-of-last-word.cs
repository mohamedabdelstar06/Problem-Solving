
// أزفلط البنجوج

public class Solution {
    public int LengthOfLastWord(string s) {
    int awadeenLength =0;
    for(int i = s.Length -1 ; i >= 0 ; i--){
        if(s[i] == ' ' && awadeenLength > 0 ){
            break;
        }
     if(s[i] != ' '){
        awadeenLength++;
     }
    }
         return awadeenLength;
}}
