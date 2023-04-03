
//230403-#1053
/*
class Solution {
public:

    int aux(vector<int> arr, int i){
        int size = arr.size();
        int res=0;
        for(int j = i-1;j>-1;j--){
            if(arr[j]>arr[i]){
                res = (pow(10,size-j)*(arr[j]-arr[i])-pow(10,size-i)*(arr[j]-arr[i]));
                return res;
            }
        }
        return 0;
    }
    vector<int> prevPermOpt1(vector<int>& arr) {
        int size = arr.size();
        if(size==1){
            return arr;
        }
        vector<int> myarr;
        vector<int> position;
        for(int i=size-1;i>0;i--){
            int pre = aux(arr,i);
            if(pre!=0){
                myarr.push_back(pre);
                position.push_back(i);
            }
        }
        int minx =0;
        if(myarr.size()!=0){
            minx = min_element(myarr.begin(),myarr.end())-myarr.begin();
        }
        else{
            return arr;
        }
        int temp =0 ;
        int ind = position[minx];
        for(int j = ind-1;j>-1;j--){
            if(arr[j]>arr[ind]){
                temp = arr[j];

                arr[j]=arr[ind];
                arr[ind]=temp;
                break;
            }
        }
        return arr;


    }
};
*/

class Solution {
public:
    vector<int> prevPermOpt1(vector<int>& arr) {
        int n = arr.size();
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] > arr[i + 1]) {
                int j = n - 1;
                while (arr[j] >= arr[i] || arr[j] == arr[j - 1]) {
                    j--;
                }
                swap(arr[i], arr[j]);
                break;
            }
        }
        return arr;
    }
};
