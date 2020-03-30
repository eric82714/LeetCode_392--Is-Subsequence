bool isSubsequence(char * s, char * t){
    for(int i = 0; i < strlen(s); i++) {
        char* pos = strchr(t, *(s+i));
        if(!pos) return false;
        t = pos + 1;
    }
        
    return true;
}
