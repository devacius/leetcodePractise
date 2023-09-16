class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        st.push(s[0]);
        for(int i=1;i<s.size();i++){
           if(st.empty()){
               st.push(s[i]);
           } 
            else if((st.top()=='['&&s[i]==']')||(st.top()=='('&&s[i]==')')||(st.top()=='{'&&s[i]=='}')){
                st.pop();
            }
            
            else{
                st.push(s[i]);
            }
           // cout<<st.top()<<endl;
        }
        // while(!st.empty()){
        //     cout<<st.top();
        //     st.pop();
        // }
        if(st.size()==0){
            return true;
        }
       return false;
    }
};