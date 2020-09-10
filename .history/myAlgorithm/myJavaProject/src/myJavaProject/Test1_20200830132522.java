package myJavaProject;

public class Test1 {
	
	public static void main(String[] args) {
		// 声明变量，只能赋值一次
		final int finalBian;
		System.out.println("cs");
		// 输出菱形 lineCount maxLineNum space star declineCount
		int lineCount = 5; //需要多少行
		int maxLineNum = (lineCount + 1) / 2; //上部分
		for(int a = 1; a <= maxLineNum; a++){
			for(int space = 1; space <= maxLineNum - a; space++){ // 空格数量 数量=最后一行-当前行数
				System.out.print("  ");
			}
			for(int star = 1; star <= (a * 2) - 1; star++){ // 输出星号，数量=行数*2-1
				System.out.print("* ");
			}
			System.out.println();// 换行
		}
		int declineCount = lineCount - maxLineNum;
		for(int a = 1; a <= declineCount; a++){
			for(int space = 1; space <= a; space++){
				System.out.print("  ");
			}
			for(int star = 1; star <= (declineCount - a + 1)*2-1;star+){
				System.out.print("* ");
			}
			System.out.println();// 换行
		}
	}
}
