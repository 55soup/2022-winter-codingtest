package Day3;
import java.util.Arrays;

class Greedy {
    public static int solution(int[] people, int limit) {
        int answer = people.length; // 전체 사람 수
        int weight=0;
        int i,j;
        Arrays.sort(people); // 정렬
        for(i=0; i<people.length/2; i++){
            //최고 몸무게 + 최저몸무게가 limit 이하라면
            if(people[people.length-1-i]+people[i] <= limit) {
                people[people.length-1-i]=people[i]=250; // 탐색 범위에서 제외
                --answer; //보트 빼기
            }
        }

        for(i=0; i<people.length; i++){
            //처음부터 비교
            if(people[i]<250){ //유효한 숫자인가?
                for(j=i+1; j<people.length; j++){
                    if(people[i]+people[j] <= limit) {
                        people[i]=people[j]=250;
                        --answer; //보트 빼기
                        break;
                    }
                }
            }
        }

        return answer;
    }

    public static void main(String[] args) {
        int []people = {70,50,80,50};
        int answer = solution(people, 100);
        System.out.println(answer);
    }
}
