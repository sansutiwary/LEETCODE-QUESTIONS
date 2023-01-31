class Solution:
    def reverseWords(self, s: str) -> str:
        nlist=s.split()
        n=len(nlist)-1
        output=""
        while(n>=0):
            output+=" "+nlist[n]
            n-=1;
        return output.strip()
    
    
        
       