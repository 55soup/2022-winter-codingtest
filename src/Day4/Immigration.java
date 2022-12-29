package Day4;

import java.util.Arrays;

public class Immigration {
    public static long solution(int n, int[] times) {
        long answer = 0;
        // 처리하는데 걸리는 최장 시간
        int max_time = Arrays.stream(times).max().getAsInt();
        int min=0;
        int max=max_time*n;

        // 이분검색으로 찾기...
        // 60 => 30/7+30/10 > n  15/7+15/10=3
        int cal=0;
        int mid=0;
        // 이분검색으로 찾기...
        while(min<max){
            // 60 => 30/7+30/10 > n  15/7+15/10=3
            mid=(min+max)/2; //5
            cal=0;
            for(int time:times)
                cal+=mid/time; //2+1+1
            if(cal > n){
                // 시간이 충분한경우
                max=mid-1;
            }
            else if(cal < n){
                // 시간이 부족한 경우
                min=mid+1;
            }
            else{
                // 시간이 딱 맞는 경우
                answer=mid;
                break;
            }
        }
        return answer;
    }
    public static void main(String[] args) {
        int n=4;
        int[] times={2,3,5};
        long answer = solution(n, times);
        System.out.println(answer);
    }
}
