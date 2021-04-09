class sosuucount {
    public static void main(String[] args) {
        long n = 1000000000;

        int tmpCnt = 0;
        int sosuuCnt = 0;

        for (long i = 1; i < n; i++) {
            for (long j = 0; j <= i; j++) {
                if (i % j == 0) {
                    tmpCnt++;
                }
            }
            if (cnt == 2) {
                sosuuCnt++;
            }
            tmpCnt = 0;
        }
    }
}