import java.util.Arrays;

public class Student implements Comparable{
    private String name;
    private double gpa;

    public Student(String name, double gpa) {
        this.name = name;
        this.gpa = gpa;
    }

    public Student(String n){name=n;}

    public String getName() {
        return name;
    }

    public double getGpa() {
        return gpa;
    }

//    @Override
//    public int compareTo(Object obj) {
//       // gpa비교할 때
//        Student other = (Student) obj;
//        if(gpa<other.gpa)
//            return -1;
//        else if(gpa>other.gpa)
//            return 1;
//        else return 0;
//    }

    @Override
    public int compareTo(Object obj) {
        Student other = (Student) obj;
//        return (this.gpa-other.gpa);
        return 0;
    }


//    @Override
//    public int compareTo(Object obj) {
//        //문자열 비교일 때
//        Student other=(Student) obj;
////        return (this.name.compareTo(other.name));
////        return (other.name.compareTo(this.name));
//    }

    public static void main(String[] args) {
        Student[] students = new Student[3];
        students[0]=new Student("홍길동", 3.39);
        students[1]=new Student("임꺽정", 4.21);
        students[2]=new Student("황진이", 2.19);

        // 사용자 정의형인 경우 sort가 x => 정렬하기 위해서 Comparable사용
        Arrays.sort(students);

        System.out.println("**GPA오름차순 출력**");
        for(Student s:students)
            System.out.println("이름="+s.getName()+"평점="+s.getGpa());

    }
}
