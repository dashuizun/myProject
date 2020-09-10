package myJavaProject;

public class Test1 {
	
	public static void main(String[] args) {
		// 声明变量，只能赋值一次
		final int finalBian;
		System.out.println("cs");
		// 输出菱形 lineCount maxLineNum space star declineCount
		int lineCount = 5;
		int maxLineNum = (lineCount + 1)/2;
		for(int a = 1; a <= maxLineNum; a++){
			for(int space = 1; space <= maxLineNum - a; space++){
				System.out.print("  ");
			}
			for(int star = 1; star <= a*2-1; star++){
				System.out.print("* ");
			}
		}
	}
}
