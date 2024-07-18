class Solution{
public:	
    bool isAllEqual(int hash[]){
        //First take any non zero frequency and compare it with all the frequencies
        int freq = 0;
        for(int i=0;i<26;i++){
            if(hash[i]){
                freq = hash[i];
                break;
            }
        }
        
        
        //comparing the freq with all the frequencies
        for(int i=0;i<26;i++){
            if(hash[i] && hash[i] != freq) return false;
        }
        
        return true;        // all frequencies are equal
    }
	bool sameFreq(string s)
	{
	    int hash[26] = {0};
	    for(auto i: s) hash[i - 'a']++;

	    if(isAllEqual(hash)) return true;
	    
	    // removing one by one freq and checking for equal
	    for(int i=0;i<26;i++){
	        if(hash[i]){
	            hash[i]--;
    	        if(isAllEqual(hash)) return true;
    	        hash[i]++;
	        }
	    }
	    return false;
	}
};
