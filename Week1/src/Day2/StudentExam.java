package Day2;

import java.util.Collection;
import java.util.HashMap;
import java.util.Objects;

class Student{
    private int hakbun;
    private String name;

    public Student(int hakbun, String name) {
        this.hakbun = hakbun;
        this.name = name;
    }

    @Override
    public boolean equals(Object obj) {
        if(obj instanceof Student) {
            Student student = (Student) obj;
            return (hakbun == student.hakbun) && (name.equals(student.name));
        }else{
            return false;
        }
    }

    @Override
    public int hashCode() {
        return hakbun + name.hashCode();
    }

    @Override
    public String toString() {
        return this.hakbun + "." + this.name;
    }
}
public class StudentExam {
    public static void main(String[] args) {
        Student s1 = new Student(1, "홍길동");
        HashMap<Student, Integer> students = new HashMap<>();
        students.put(s1, 95);
        students.put(new Student(1, "홍길동"), 90); //s1과 같은 경우
        students.put(new Student(2, "김길동"), 80);
        System.out.println("총 Entity : " + students.size());
        System.out.println(students.entrySet());
    }
}
