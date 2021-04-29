public class test4_28 {
    public static void move(char pos1,char pos2){
        //从pos1位置挪到pos2位置
        System.out.println(pos1+"->"+pos2+" ");
    }
    //n 盘子个数
    //起始位置
    //中途位置
    //目的地位置
    public static void hanoi(int n,char pos1,char pos2,char pos3) {
        if(n==1){
            move(pos1,pos3);
        }else{
            hanoi(n-1,pos1,pos3,pos2);
            move(pos1,pos3);
            hanoi(n-1,pos2,pos1,pos3);
            move(pos3,pos1);
        }

    }
    public static void main(String[] args) {
        //1   A-C
        //2   A-B  A-C  B-C
        //3   A-C  A-B  C-B  A-C  B-A  B-C
        hanoi(1,'A','B','C');
        hanoi(1,'A','B','C');
        hanoi(1,'A','B','C');
    }
}
