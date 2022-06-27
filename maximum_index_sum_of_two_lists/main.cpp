// Brute Force
// class Solution {
// public:
//     vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
     
//         int mn = INT_MAX;
//         vector<string> v;
        
//         for(int i = 0; i < list1.size(); i++) {
//             for(int j = 0; j < list2.size(); j++) {
//                 if(list1[i] == list2[j]) {
//                     if(i + j == mn) {
//                         v.push_back(list1[i]);
//                     } else if(i+j > mn) {
//                         continue;
//                     } else {
//                         mn = i + j;
//                         v.clear();
//                         v.push_back(list1[i]);
//                     }
//                 }
//             }
//         }

//         return v;
//     }
// };

// Hash Map
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> v;
        int mn = INT_MAX;
        
        unordered_map<string,int> map;
        for(int j=0;j<list1.size();j++){
            map[list1[j]]=j;                   
        }
        
        for(int i = 0; i < list2.size(); i++) {
            if(map.find(list2[i])!=map.end()){ 
                if(map[list2[i]] + i < mn) {
                    v.clear();
                    v.push_back(list2[i]); 
                    mn=map[list2[i]]+i;
                    
                } else if (map[list2[i]]+i==mn) {
                    v.push_back(list2[i]);
                }
            }
        }
        return v;
    }
};
