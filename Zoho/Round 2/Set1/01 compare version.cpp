class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i = 0,j=0;
        int len1 = version1.size();
        int len2 = version2.size();
        while(i < len1 || j < len2){
            int v1 = 0, v2 = 0;

            //version 1
            while(i < len1 && version1[i] != '.'){
                v1 = v1 * 10 + (version1[i] - '0');
                i++;
            }

            while(j < len2 && version2[j] != '.'){
                v2 = (v2 * 10) + (version2[j] - '0');
                j++;
            }

            if(v1 < v2) return -1;
            if(v1 > v2) return 1;
            
            i++;
            j++;
        }
        return 0;
    }
};
