class Solution {
public:
    bool isValid(string s) {
        stack<string> open;
        string str="";
     int  len=s.length(); 
     
      bool check=true;
       for(int i=0;i<len;i++) {    
     
      if( s.substr(i,1)=="("|| s.substr(i,1)=="{"|| s.substr(i,1)=="[")
      open.push( s.substr(i,1));
      else{
          if(open.empty()){open.push( s.substr(i,1)); break;}
          str+=open.top()+s.substr(i,1);  
          if(str=="()"||str=="[]"||str=="{}") open.pop(); else{
break; check=false;
          } 
str="";
      }      
       }


     return open.empty();
         }
};
