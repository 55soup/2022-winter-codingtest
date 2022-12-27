package Day2;

import java.util.HashSet;
import java.util.Scanner;

public class HashSetEx {
    public static void main(String[] args) {
        HashSet<String> set = new HashSet<String>();
        Scanner scan = new Scanner(System.in);
        for (int i = 0; i < 5; i++) {
            System.out.print("추가할 회원의 이름은 : ");
            set.add(scan.nextLine());
        }
        System.out.println(set);
    }
}
