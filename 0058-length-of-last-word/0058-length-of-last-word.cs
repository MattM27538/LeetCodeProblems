public class Solution {
    public int LengthOfLastWord(string s) {
        if(s[s.Length-1]==' '){s=s.Trim();}
        string[] words=s.Split(' ');
        return words[words.Length-1].Length;
    }
}