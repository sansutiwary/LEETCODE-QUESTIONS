class Solution {
public:
    string addStrings(string num1, string num2) {
      string res;
        int i=num1.size()-1;
        int j=num2.size()-1;
        int carry=0;
        while(i>=0 || j>=0 ){
            if(i<0){
                res.push_back(((num2[j]-48 + carry)%10)+48);
                
                carry=(num2[j]-48 + carry)/10;
                 
            j--;
                
            }
            else if(j<0){
                res.push_back(((num1[i]-48 + carry)%10)+48);
                
                carry=(num1[i]-48 + carry)/10;
                  i--;
            }
            else{
                res.push_back(((num1[i]-48 + num2[j]-48 + carry)%10)+48);
                
                carry=(num1[i]-48 + num2[j]-48 + carry)/10;
                 i--;
            j--;
            }
            
           
        }
        if(carry){
            res.push_back(carry+48);
        }
        reverse(res.begin(),res.end());
        return res;
    }
};