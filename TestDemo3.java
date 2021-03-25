import java.util.Scanner;
public class testdemo2{
	public static void main(String[] args) {
		int i=0;
		int ret=1
		int sum=0;
		for(i=1;i<=5;i++){
			ret*=i;
			sum=ret+sum;
		}
	}
	//	public static void main4(String[] args) {
		int a=10;
		switch(a){
			case 1:
			System.out.println("1");
			break;
			case 2:
			System.out.println("2");
			break;
            case 3:
			System.out.println("3");
			break;
		}
	}
	public static void main3(String[] args) {
		Scanner scan = new Scanner(System.in);
		while(scan.hasNext()){
		int year = scan.nextInt();
		if((year%4==0 && year%100!=0)||(year%400==0)){
	    System.out.println("闰年");}
	else{
		System.out.println("不是闰年");
	}
	}
}
	public static void main2(String[] args) {
		int a = 10;
		if(a==10){
			System.out.println("hello");
		}
	}
	public static void main1(String[] args) {
		Scanner scan = new Scanner(System.in);
		int a = scan.nextInt();
		System.out.println(a);
		String str = scan.nextLine();
		System.out.println(str);
	}
}