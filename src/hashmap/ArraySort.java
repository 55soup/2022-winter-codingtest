package hashmap;

import java.util.Arrays;

public class ArraySort {
    public static void main(String[] args) {
        int[] arr={3,2,0,1,4};
        int idx = Arrays.binarySearch(arr, 2);
        System.out.println(idx);
        System.out.println(Arrays.toString(arr));

        Arrays.sort(arr);
        System.out.println(Arrays.toString(arr));
        idx=Arrays.binarySearch(arr,2);
        System.out.println(idx);
    }
}
