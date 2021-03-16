import java.util.Scanner;
public class TestDemo{
	public static void main(String[] args) {
		int a = 10;
		//不能做switch参数的类型
		//long float double boolean
		
		switch(a){
			case 1:
			System.out.println("1");
			break;
			case 2:
			System.out.println("2");
			break;
			default:
			System.out.println("请输入正确的数字");
			break;
		}
	}
	public static void main2(String[] args) {
		//else 只会和最近的if结合
		Scanner scan = new Scanner(System.in);
		while(scan.hasnestIn())
			int year = scan.nextInt();
		{
			if(year%4==0 && y%100!=0)||(yea%400==0)){
	           System.out.println("闰年！");
}else{
	System.out.println("不是闰年");
}
		}
	}
	public static void main1(String[] args) {
		Scanner scan = new Scanner(System.in);
		int a = scan.nestIn();
		System.ouut.println(a);  //不放在一起使用
		String str = scan.nextLine();
		System.out.println(str);
		}
	}
}