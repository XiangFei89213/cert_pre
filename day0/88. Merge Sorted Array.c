void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {

    // 3 pointer
    int a = n-1;
    int b = m-1;
    int k = m+n-1;

    while(a >= 0 && b >= 0){

        // catch a or b < 0 error
        if(nums2[a] >= nums1[b]){
            nums1[k] = nums2[a];
            k--;
            a--;
            b = b;
        } else{
            nums1[k] = nums1[b];
            k--;
            b--;
            a = a;
        }
    }

    while (a >= 0) {
        nums1[k--] = nums2[a--];

        // 
    }



}
