package Day3;
import java.util.Arrays;

class H_index {
    public static int solution(int[] citations) {
        int answer = 0;
        // 인용된 논문의 편 == 인용된 횟수
        /*논문의 번호(No)와 피인용횟수를 비교하여 피인용횟수가
        논문의 번호(No)와 같거나 큰 번호가 연구자의 h-index가 됩니다. */

        Arrays.sort(citations);
        for(int i=0; i<citations.length; i++){
            System.out.println("번호: " + citations[i]+"\t");
            System.out.println(i+"\t");
            if(citations[i]==i+1){
                answer=i+1;
            }
        }

        return answer;
    }

    public static void main(String[] args) {
        int[] citation = {1, 2, 3, 4, 5, 6};
        int answer = solution(citation);
//        System.out.println(answer);
    }
}
