import java.util.Scanner;
import java.util.Random;
public class Homework{
    public static void main(String[] args) {
    	Scanner scan = new Scanner(System.in){
    		int a = scan.nextInt();
    		int b = scan.nextInt();
    		int c = 0;
    		while(a%b!=0){
    			c=a%b;
    			a=b;
    			b=c;
    		}
    		System.out.println(c);
    	}
    }
    public static void main3(String[] args) {
    	Scanner scan = new Scanner(System.in);
    	int n = scan.nextInt();
    	for(int i=1;i<=n;i++){
    	for(int j=2;j<=(int)Math.sqrt(n);j++){
    		if(n%j==0){
    			System.out.println(n+"不是素数！");
    			break;
    		}
    	}
    	if(j>(int)Math.sqrt(j)){
    		System.out.println(i+" 是素数 ！");
    	}
    }
 }
    public static void main2(String[] args) {
    	Scanner scan = new Scanner(System.in);
    	int n = scan.nextInt();
    	for(int i=2;i<n;i++){
    		if(n%i==0){
    			System.out.println(n+"不是素数！");
    			break;
    		}
    	}
    }
	public static void main1(String[] args) {
		Scanner scan = new Scanner(System.in);
		Random random = new Random();
		int randNum = random.nextInt(100);
		System.out.println(randNum);
		while(true){
			System.out.println("请输入你要猜的数字:");
			int num = scan.nextInt();
			if(num<random){
				System.out.println("你猜的数字小了！")；
			}else if(num == random){
				System.out.println("你猜的数字对了！")；
			}else{
				System.out.println("你猜的数字大了！")；

			}
		}
	}
}