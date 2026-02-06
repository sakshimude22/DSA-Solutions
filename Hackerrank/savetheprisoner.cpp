int saveThePrisoner(int n, int m, int s) {
    int lastp = (s + m-1)%n;
    if(lastp == 0){
        return n;
    }
    return lastp;
}