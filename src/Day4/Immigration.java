package Day4;

import java.util.Arrays;

public class Immigration {
    public static long solution(int n, int[] times) {
        long answer = Long.MAX_VALUE;
        Arrays.sort(times);
        long start=times[0];
        long end=(long)times[times.length-1]*(long)n; 
        // times에 심사대 마다 걸리는 시간이 걸려있으니 최대시간 = 가장오래걸리는 시간 * 인원수

        // 이분검색으로 찾기...
        // 60 => 30/7+30/10 > n  15/7+15/10=3
        long mid;
        long sum=0;
        // 이분검색으로 찾기...
        while(start<=end){
            // 60 => 30/7+30/10 > n  15/7+15/10=3
            mid=(start+end)/2; //5
            sum=0;
            for(int time:times){
                sum+=mid/time; //2+1+1
            }
            if(sum >= n){
                // 시간이 충분한경우
                answer = Math.min(answer, mid);
                end=mid-1;
            }
            else{
                // 시간이 부족한 경우
                start=mid+1;
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
