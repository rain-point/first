import java.util.Arrays;

public class demo5 {
    public static void main(String[] args) {
        int[] array={1,2,3,4,5,6,7};
        int[] ret=Arrays.copyOf(arraya,rray.length);
        System.out.println(Arrays.toString(ret));
    }

    public static int[] copyArray(int[] array) {
        int[] ret=new int[array.length];
        for (int i = 0; i < array.length; i++) {
            ret[i]=array[i];
        }
        return ret;
    }
    public static void main6(String[] args) {
        int[] array={1,2,3,4,5,6,7};
        int[] ret=copyArray(array);
        System.out.println(Arrays.toString(ret));
    }
    public static void main5(String[] args) {
        int a=0;
        System.out.println(a);
        int[] array=null;//array引用的是个空对象
        System.out.println(array);
    }
    public static void main4(String[] args) {
        int[] array={1,2,3,4,5,6,7,8,9,10};
        //将数组以字符串的形式进行输出
        System.out.println(Arrays.toString(array));
    }
    public static void printArray(int[] arr){
        for (int x :arr) {
            System.out.println(x+" ");
        }
    }

    public static void main3(String[] args) {
        int[] array={1,2,3,4};
        printArray(array);
    }
    public static void main3(String[] args) {
        int[] array={1,2,3,4};

    }
    public static void main2(String[] args) {
        int[] array={1,2,3,4}
        for (int i=0;i<array.length;i++){
            System.out.println(array[i]+" ");
        }
        System.out.println("===============");
        for (int val:array) {
            System.out.println(val+" ");
        }
    }
    public static void main1(String[] args) {
        int[] array = {1,2,3,4};
        int[] array2=new int[]{11,22,33,44};
        int[] array3=new int[4];
    }
}
}