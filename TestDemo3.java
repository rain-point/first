public class testdemo3 {
    //方法的重载
    //1.函数名可以相同
    //返回值不做要求
    //参数列表不同（参数的个数或参数的类型不同）
    //在同一个类当中
    public static int fac(int n){
        if(n==1){
            return 1;
        }
        return n*fac(n:n-1);
    }
    public static void main(String[] args) {
        System.out.println(fac(5));

    }
    public static void main3(String[] args) {
        int a = 10;
        int b = 20;
        System.out.println(sum(a,b));
        double d1 = 19.1;
        double d2 = 19.3;
        System.out.println(sum(d1,d2));

    }
    public static int sum(int a,int b){
        return a+b;
    }
    public static double sum(double a,double b){
        return a+b;
    }
    public static void swap(int x,int y) {
        int tmp=0;
        tmp = x;
        x = y;
        y = tmp;
    }
    public static void main2(String[] args) {
        int a = 10;
        int b = 20;
        swap(a,b);
        System.out.println(a+" "+b);
    }
}
