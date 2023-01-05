class Solution(object):
    def sortSentence(self, s):
        """
        :type s: str
        :rtype: str
        """
        temp=[0]*(int(s.count(" ")+1))
        
        for word in s.split():
            x=len(word)-1
            psn=word[x]
            
            temp[int(psn)-1]=word[0:x]
        s=""
        for wrd in temp:
            s+=wrd+" "
            
        return s[0:len(s)-1]  
