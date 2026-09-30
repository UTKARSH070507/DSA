class Solution {
public:
    string reverseWords(string s) {
        string output = "";
        int i = s.length()-1;
        while(i >= 0){
            while(i >= 0 && s[i] == ' '){i--;}
            if(i < 0){break;}
            int j = i;
            while(i >= 0 && s[i] != ' '){i--;}
            for(int a = i+1;a <= j;a++){output += s[a];}
            output += ' ';
        }
        if (!output.empty()){output.pop_back();}
        return output;

    }
};