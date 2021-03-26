import java.util.Scanner;

public class testdemo {

    public static int maxNum(int num1,int num2){
        return num1>num2 ? num1:num2;
    }

    public static void main(String[] args) {
         int a=10;
         int b=20;
         int sum=maxNum(a,b);

    }
    public static void main3(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n1 = scanner.nextInt();
        int n2 = scanner.nextInt();
        int ret = maxNum(n1,n2);
        System.out.println(ret);
    }
    public static void main2(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n=scanner.nextInt();
        int count = 0;
        while(n!=0){
            n=n&(n-1);
            count++;
        }
        System.out.println(count);
    }
    public static void main1(String[] args) {//psvm
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int count = 0;
        for(int i = 0;i<32;i++){
            if(((n>>i)&1)==1){
                count++;
            }
            System.out.println("count:"+count);
        }
    }
}
