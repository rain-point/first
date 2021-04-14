import sun.awt.windows.WPrinterJob;

import javax.swing.*;

public class test4_14 {
    public static void main(String[] args) {
        int i=1;
        for(i=1;i<=10;i++)
    }
    public static void main2(String[] args) {
        int i=1;
        int ret=1;
        while(i<=5) {
            ret *= i;
            i++;
        }
        System.out.println(ret);
    }
    public static void main1(String[] args) {
        Scanner scan = new Scanner(System.in);
        int year = scan.nextInt();
        if((year%4==0 && year%100 !=10)||(year%400==0))
        System.out.println("闰年！");
        else{
            System.out.println("不是闰年！");
        }
    }
}
