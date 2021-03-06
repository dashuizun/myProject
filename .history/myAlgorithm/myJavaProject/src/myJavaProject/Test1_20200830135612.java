package myJavaProject;

public class Test1 {
	
	public static void main(String[] args) {
		// 声明变量，只能赋值一次
		final int finalBian;
		// 1字符串查找，获取字符首次出现的位置
		System.out.println("1We are student".indexOf("e"));
		// 2字符串查找，获取字符最后一次出现的位置
		System.out.println("2We are student".lastIndexOf("e"));
		// 3获取指定位置的字符
		System.out.println("3We are student".charAt(5));
		// 4截取字符串，从某一位置截取到结尾
		System.out.println("4We are student".substring(5));
		// 5截取字符串，从某一位置截取到某一位置
		System.out.println("5We are student".substring(5,8));
		// triangle();
	}

	// 输出菱形
	public static void triangle(){
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
