string file = ch("file");
float radius = ch("radius");
int maxpoint = ch("maxpoint"); //max of points to look for

//s@name = file;
//f@radius=ch("radius");
//i@maxpoint = ch("maxpoint");
//declare

int result = pcopen(file,"P", P, radius, maxpoint);

//i@result;

while (pciterate(result)) {
    int wtf = pcnumfound(result);
    printf("%d %d\n", result, wtf);
    @Cd = set(0, 1, 0);
}
