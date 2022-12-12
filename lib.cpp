float maxarray(const float insieme[], int d){
    float x=0;

    x=insieme[0];
    for(int i=0;i<d;i++){
        if(x<insieme[i])
            x=insieme[i];
    }
    return x;
}
