 public static void main(String[] args) {
        Scanner console = new Scanner(System.in);
        int a = console.nextInt();
        int b = console.nextInt();
        gcd (a, b);
    }

    public static void gcd(int a, int b) {
        System.out.print("Type in two numbers and I will print outs its Greatest Common Divisor: ");
        int gcdNum1 = console.nextInt();
        int gcdNum2 = console.nextInt();
        while (gcdNum1 == 0) {
            gcdNum1 = 0;
        }
        while (gcdNum2 > gcdNum1) {
            int gcd = gcdNum1 % gcdNum2;
        }
        System.out.print(gcdNum1 + gcdNum2);
    }
}