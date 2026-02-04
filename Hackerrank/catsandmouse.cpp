string catAndMouse(int x, int y, int z) {
    int distA = abs(x - z);
    int distB = abs(y - z);
    
    if(distA < distB){
        return "Cat A";
    }
    else if( distA > distB){
        return "Cat B";
    }
    else {
    return "Mouse C";
    }
}