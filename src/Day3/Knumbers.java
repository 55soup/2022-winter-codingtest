package Day3;

import java.util.Collections;
import java.util.ArrayList;

class Knumbers {
    public static int[] solution(int[] array, int[][] commands) {
        ArrayList<Integer> answerList = new ArrayList<>();
        ArrayList<Integer> newArrayList = new ArrayList<>();

        for(int i=0; i<commands.length; i++){
            newArrayList.clear();
            for(int j=commands[i][0]-1; j<commands[i][1]; j++){
                newArrayList.add(array[j]);
                Collections.sort(newArrayList);
            }
            answerList.add(newArrayList.get(commands[i][2]-1));
        }
        return answerList.stream().mapToInt(i -> i).toArray();
    }

    public static void main(String[] args) {
        int[] array = {1, 5, 2, 6, 3, 7, 4}; //1,2,3,4,5,6,7
        int[][] commands = {{2, 5, 3}, {4, 4, 1}, {1, 7, 3}};
        int[] answer = new int[10];
        answer = solution(array, commands);
        for (int arr:answer) {
            System.out.println(arr);
        }
    }
}
