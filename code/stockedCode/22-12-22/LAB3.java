// No 38

public class LAB3 {
	public static void main(String[] args) {
		String node = "";

		for (int i=1; i<8; i++) {
			for (int j=0; j<i; j++) {
				if (node == "") {
					node = String.valueOf(i);
				} else {
					node = node + ' ' + String.valueOf(i);
				}
			}

			System.out.println(node);

			node = "";
		}
	}
}
