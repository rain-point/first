import java.util.Scanner;
public class TestDemo{
	public static void main(String[] args) {
		int a = 10;
		//������switch����������
		//long float double boolean
		
		switch(a){
			case 1:
			System.out.println("1");
			break;
			case 2:
			System.out.println("2");
			break;
			default:
			System.out.println("��������ȷ������");
			break;
		}
	}
	public static void main2(String[] args) {
		//else ֻ��������if���
		Scanner scan = new Scanner(System.in);
		while(scan.hasnestIn())
			int year = scan.nextInt();
		{
			if(year%4==0 && y%100!=0)||(yea%400==0)){
	           System.out.println("���꣡");
}else{
	System.out.println("��������");
}
		}
	}
	public static void main1(String[] args) {
		Scanner scan = new Scanner(System.in);
		int a = scan.nestIn();
		System.ouut.println(a);  //������һ��ʹ��
		String str = scan.nextLine();
		System.out.println(str);
		}
	}
}