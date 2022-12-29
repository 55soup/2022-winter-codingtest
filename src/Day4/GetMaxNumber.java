package Day4;
import java.util.Arrays;
import java.util.Comparator;
public class GetMaxNumber{
    public static String solution(int[] numbers) {
        String answer = "";
        String[] strNumbers = new String[numbers.length];
        int cnt=0;
//        Arrays.sort(numbers);
        for(int i=0; i<strNumbers.length; i++) strNumbers[i]=String.valueOf(numbers[i]); //int->string
        //문자열 내림차순 정렬
        Arrays.sort(strNumbers, (a,b) -> (b+a).compareTo(a+b));
        for(String str:strNumbers) {
            answer+=str;
            if(str.equals("0")) cnt++;
        }
        answer=(strNumbers.length==cnt) ? "0" : answer;
        // 들어온 문자배열이 모두 0이라면
        return answer;
    }

    public static void main(String[] args) {
        int[] numbers = {0,0,0,0,0}; // {9,5,34,3,30}
        String answer = solution(numbers);
        System.out.println(answer); //"9534330"
    }
}
