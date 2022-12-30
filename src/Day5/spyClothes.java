package Day5;

public class spyClothes {
    public static int solution(String[][] clothes) {
        int answer = 0;
        answer = clothes.length;
        for(int i=0; i<clothes.length; i++){
            for (int j = i+1; j < clothes.length; j++)
                if(!clothes[i][1].equals(clothes[j][1])) answer++;
        }
        return answer;
    }

    public static void main(String[] args) {
        String[][] clothes={{"yellow_hat", "headgear"}, {"blue_sunglasses", "eyewear"}, {"green_turban", "headgear"}};
        System.out.println(solution(clothes));
    }
}
