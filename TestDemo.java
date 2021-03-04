
public class TestDemo{

	//数组代表的是什么
	public static void main(String[] args) {
		double d = 12.5;//默认双精度类型
		System.out.println(d);
		System.out.println(Double.MAX_VALUE);
		System.out.println(Double.MIN_VALUE);

		int a=1;
		int b=2;
		System.out.println(a/b);//a和b都是整型，不能保存小数

		double num=1.1;
		System.out.println(num*num);
	}
	public static void main2(String[] args) {
		for(int i=0; i < args.legth; i++){
			System.out.println(args[i]);

		}
		System.out.println("kaixin"); 
	}
	public static void main1(String[] args){

		Long a=10L;
		System.out.println(a);
		System.out.println("最大值:"+Long.MAX_VALUE);
		System.out.println("最小值:"+Long.MIN_VALUE);//拼接
		int b=10;
		int c=20;
		System.out.println(b+c);
		//注意：任何类型的数据和字符串进行拼接结果就是字符串
		System.out.println("hhh"+b+c);
	}
}