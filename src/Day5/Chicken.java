package Day5;

public class Chicken {
    public static void main(String[] args) {
        System.out.println(solution(2001));
    }
    public static int solution(int chicken) {
        int answer = 0;
        int coupon=0;
        // 1) 처음 시키고 받은 치킨쿠폰 => 1081/10 == 108마리 ==> 쿠폰 1장 남음.
        // 2) 두 번째 시킨 서비스 치킨의 쿠폰 => 108/10==10마리 ==> 쿠폰 8장 남음.
        // 3) 세 번째 시킨 서비스 치킨의 쿠폰 => 10/10 == 1마리 ==> 쿠폰 1장 남음.
        // 108+10+1+1=120
        while(chicken>0){
            chicken+=coupon;
            coupon=chicken%10;

            // 처음 시킨 치킨
            answer+=chicken/=10; // 108마리
        }
        // answer+=(coupon>=10)?coupon/10:0;
        return answer;
    }
}
