package myJavaProject;

public class Test1 {
	
	public static void main(String[] args) {
		// 声明变量，只能赋值一次
		final int finalBian;
		System.out.println("cs");

	}

	public void triangle(){
		// 输出菱形 lineCount maxLineNum space star declineCount
		int lineCount = 5; //需要多少行
		int maxLineNum = (lineCount + 1) / 2;// 菱形最多一行
		for (int i = 1; i <= maxLineNum; i++) {// 循环菱形数量越来越多的几行
			for (int space = 1; space <= maxLineNum - i; space++) {// 输出空格，数量=最后一行-当前行数
				System.out.print(" ");
			}
			for (int star = 1; star <= (i * 2) - 1; star++) {// 输出星号，数量=行数*2-1
				System.out.print("*");
			}
			System.out.println();// 换行
		}

		int declineCount = lineCount - maxLineNum;// 计算剩下的几行，这几行星号的数量是递减的
		for (int i = 1; i <= declineCount; i++) {// 循环菱形数量越来越少的行数
			for (int space = 1; space <= i; space++) {// 输出空格，数量等于当前的行数
				System.out.print(" ");
			}
			for (int star = 1; star <= (declineCount - i + 1) * 2 - 1; star++) {// 输出星号，数量等于（总数-当前行数）*2-1
				System.out.print("*");
			}
			System.out.println();
		}
	}
}
