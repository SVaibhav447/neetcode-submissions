class Solution {
public:

    string encode(vector<string>& strs) {
        string code = "";
        for(const string& s : strs){
            code += to_string(s.size());
            code += '#';
            code += s;
        }
        return code;
    }

    vector<string> decode(string s) {
         vector<string> result;
        int i = 0; 

        while (i < s.size()) {
         
            int j = i;
            while (s[j] != '#') {
                j++;
            }

           
            int length = stoi(s.substr(i, j - i));

           
            i = j + 1;

            string actual_str = s.substr(i, length);
            result.push_back(actual_str);

           
            i += length;
        }

        return result;
    }
};
