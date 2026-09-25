class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector <char> v; 
        int left = 0;
        int ans = 0;

        for ( int right = 0 ; right< s.length(); right++){
            while ( find(v.begin() , v.end(), s[right]) != v.end()) {
                v.erase(v.begin()) ;
                left ++ ;
            }

            v.push_back(s[right]) ;

            ans = max(ans , right - left + 1 );
        }
         return ans ;
    }
};  


    
