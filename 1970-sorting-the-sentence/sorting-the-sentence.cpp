class Solution {
public:

    
    string sortSentence(string s) {
        stringstream ss(s); 
        string word;
        vector<string> result(10); 
        while(ss>>word){
            int position = word.back() - '0'; 
            word.pop_back();
            result[position]=word;
        }

        string answer;
        for(int i=0;i<10;i++){
            if(result[i] != ""){
                answer += result[i];
                answer +=" ";
            }
        }

        answer.pop_back(); 

        return answer;
    }
};