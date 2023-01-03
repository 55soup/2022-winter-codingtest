package Day1;

public class Main {
    static int solution(int array[]) {
        int answer = 0;
        int count[] = new int[array.length];
        for(int i=0; i<array.length; i++)
            count[array[i]]++;
        for(int i=1; i<array.length; i++)
            if(count[i]>answer) answer=count[i];
        return answer;
    }
    public static void main(String[] args) {
        int array[] = {1};
        int answer = solution(array);
        System.out.println(answer);
    }
}