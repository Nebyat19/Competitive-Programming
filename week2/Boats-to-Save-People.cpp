class Solution {
public:

    int numRescueBoats(vector<int>& people, int limit) {
       
      sort(people.begin(),people.end());
      int count=0;int wgt=0;
       int i=0; int j=people.size()-1;
        while(i<j){
      wgt=people[i]+people[j];
       if(wgt<=limit) {
           
            count++;
            i++;
            j--;
            }else{
                count++;
                j--;
            }
           
        }if(i==j)count++;
        
        return count;
    }
};
